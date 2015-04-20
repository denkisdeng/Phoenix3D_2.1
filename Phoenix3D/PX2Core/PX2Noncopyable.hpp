// PX2Noncopyable.hpp

#ifndef PX2NONCOPYABLE_HPP
#define PX2NONCOPYABLE_HPP

namespace PX2
{

	/// �Ӵ���������Ķ��󽫲��ɱ�����
	class Noncopyable
	{
	protected:
		Noncopyable () {}
		~Noncopyable () {}

	private:
		Noncopyable (const Noncopyable &);
		Noncopyable &operator = (const Noncopyable &);
	};

}

#endif