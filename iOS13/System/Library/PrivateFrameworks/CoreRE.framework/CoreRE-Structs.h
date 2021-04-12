/*
* Generated on Monday, March 1, 2021 at 2:32:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreRE.framework/CoreRE
*/


@class NSObject<OS_dispatch_queue>;

typedef struct _compressed_pair<boost::lockfree::queue<GainRampCommand> *, std::__1::default_delete<boost::lockfree::queue<GainRampCommand> > > {
	queue<GainRampCommand> __value_;
} compressed_pair<boost::lockfree::queue<GainRampCommand> *, std::__1::default_delete<boost::lockfree::queue<GainRampCommand> > >;

typedef struct unique_ptr<boost::lockfree::queue<GainRampCommand>, std::__1::default_delete<boost::lockfree::queue<GainRampCommand> > > {
	compressed_pair<boost::lockfree::queue<GainRampCommand> *, std::__1::default_delete<boost::lockfree::queue<GainRampCommand> > > __ptr_;
} unique_ptr<boost::lockfree::queue<GainRampCommand>, std::__1::default_delete<boost::lockfree::queue<GainRampCommand> > >;

typedef struct _cxx_atomic_impl<bool, std::__1::__cxx_atomic_base_impl<bool> > {
	AB __a_value;
} cxx_atomic_impl<bool, std::__1::__cxx_atomic_base_impl<bool> >;

typedef struct atomic<bool> {
	cxx_atomic_impl<bool, std::__1::__cxx_atomic_base_impl<bool> > __a_;
} atomic<bool>;

typedef struct opaque_pthread_mutex_t {
	long long __sig;
	char __opaque[56];
} opaque_pthread_mutex_t;

typedef struct mutex {
	opaque_pthread_mutex_t __m_;
} mutex;

typedef struct _cxx_atomic_impl<float, std::__1::__cxx_atomic_base_impl<float> > {
	Af __a_value;
} cxx_atomic_impl<float, std::__1::__cxx_atomic_base_impl<float> >;

typedef struct atomic<float> {
	cxx_atomic_impl<float, std::__1::__cxx_atomic_base_impl<float> > __a_;
} atomic<float>;

typedef struct shared_ptr<AudioStreamRecordingManager::StreamWriter> {
	StreamWriter __ptr_;
	__shared_weak_count __cntrl_;
} shared_ptr<AudioStreamRecordingManager::StreamWriter>;

typedef struct OpaqueAudioComponentInstance* OpaqueAudioComponentInstanceRef;

typedef struct _cxx_atomic_impl<double, std::__1::__cxx_atomic_base_impl<double> > {
	Ad __a_value;
} cxx_atomic_impl<double, std::__1::__cxx_atomic_base_impl<double> >;

typedef struct atomic<double> {
	cxx_atomic_impl<double, std::__1::__cxx_atomic_base_impl<double> > __a_;
} atomic<double>;

typedef struct _cxx_atomic_impl<REAudioPlaybackState, std::__1::__cxx_atomic_base_impl<REAudioPlaybackState> > {
	AQ __a_value;
} cxx_atomic_impl<REAudioPlaybackState, std::__1::__cxx_atomic_base_impl<REAudioPlaybackState> >;

typedef struct atomic<REAudioPlaybackState> {
	cxx_atomic_impl<REAudioPlaybackState, std::__1::__cxx_atomic_base_impl<REAudioPlaybackState> > __a_;
} atomic<REAudioPlaybackState>;

typedef struct _cxx_atomic_impl<unsigned int, std::__1::__cxx_atomic_base_impl<unsigned int> > {
	AI __a_value;
} cxx_atomic_impl<unsigned int, std::__1::__cxx_atomic_base_impl<unsigned int> >;

typedef struct atomic<unsigned int> {
	cxx_atomic_impl<unsigned int, std::__1::__cxx_atomic_base_impl<unsigned int> > __a_;
} atomic<unsigned int>;

typedef struct _cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> > {
	Ai __a_value;
} cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> >;

typedef struct atomic<int> {
	cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> > __a_;
} atomic<int>;

typedef struct DynamicArray<re::Event<re::IDSSessionService, re::SharedPtr<re::DiscoveryInvite> >::SubscriptionLegacy> {
	Allocator m_allocator;
	unsigned long long m_capacity;
	unsigned long long m_size;
	unsigned m_version;
	SubscriptionLegacy m_data;
} DynamicArray<re::Event<re::IDSSessionService, re::SharedPtr<re::DiscoveryInvite> >::SubscriptionLegacy>;

typedef struct DynamicArray<re::Event<re::IDSSessionService, re::SharedPtr<re::DiscoveryInvite> >::Subscription> {
	Allocator m_allocator;
	unsigned long long m_capacity;
	unsigned long long m_size;
	unsigned m_version;
	Subscription m_data;
} DynamicArray<re::Event<re::IDSSessionService, re::SharedPtr<re::DiscoveryInvite> >::Subscription>;

typedef struct Event<re::IDSSessionService, re::SharedPtr<re::DiscoveryInvite> > {
	DynamicArray<re::Event<re::IDSSessionService, re::SharedPtr<re::DiscoveryInvite> >::Subscription> m_subscriptions;
	DynamicArray<re::Event<re::IDSSessionService, re::SharedPtr<re::DiscoveryInvite> >::SubscriptionLegacy> m_subscriptionsLegacy;
} Event<re::IDSSessionService, re::SharedPtr<re::DiscoveryInvite> >;

typedef struct DynamicArray<re::Event<re::IDSSessionService, re::SharedPtr<re::DiscoveryInvite>, re::SharedPtr<re::DiscoveryIdentity> >::SubscriptionLegacy> {
	Allocator m_allocator;
	unsigned long long m_capacity;
	unsigned long long m_size;
	unsigned m_version;
	SubscriptionLegacy m_data;
} DynamicArray<re::Event<re::IDSSessionService, re::SharedPtr<re::DiscoveryInvite>, re::SharedPtr<re::DiscoveryIdentity> >::SubscriptionLegacy>;

typedef struct DynamicArray<re::Event<re::IDSSessionService, re::SharedPtr<re::DiscoveryInvite>, re::SharedPtr<re::DiscoveryIdentity> >::Subscription> {
	Allocator m_allocator;
	unsigned long long m_capacity;
	unsigned long long m_size;
	unsigned m_version;
	Subscription m_data;
} DynamicArray<re::Event<re::IDSSessionService, re::SharedPtr<re::DiscoveryInvite>, re::SharedPtr<re::DiscoveryIdentity> >::Subscription>;

typedef struct Event<re::IDSSessionService, re::SharedPtr<re::DiscoveryInvite>, re::SharedPtr<re::DiscoveryIdentity> > {
	DynamicArray<re::Event<re::IDSSessionService, re::SharedPtr<re::DiscoveryInvite>, re::SharedPtr<re::DiscoveryIdentity> >::Subscription> m_subscriptions;
	DynamicArray<re::Event<re::IDSSessionService, re::SharedPtr<re::DiscoveryInvite>, re::SharedPtr<re::DiscoveryIdentity> >::SubscriptionLegacy> m_subscriptionsLegacy;
} Event<re::IDSSessionService, re::SharedPtr<re::DiscoveryInvite>, re::SharedPtr<re::DiscoveryIdentity> >;

typedef struct DynamicArray<re::IDSInvite *> {
	Allocator m_allocator;
	unsigned long long m_capacity;
	unsigned long long m_size;
	unsigned m_version;
	IDSInvite m_data;
} DynamicArray<re::IDSInvite *>;

typedef struct DynamicArray<re::IDSDiscoveryView *> {
	Allocator m_allocator;
	unsigned long long m_capacity;
	unsigned long long m_size;
	unsigned m_version;
	IDSDiscoveryView m_data;
} DynamicArray<re::IDSDiscoveryView *>;

typedef struct DynamicString {
	Allocator m_allocator;
	char* m_buffer;
	unsigned long long m_capacity;
	unsigned long long m_length;
} DynamicString;

typedef struct Config {
	ServiceLocator serviceLocator;
	NSObject<OS_dispatch_queue>* dispatchQueue;
	DynamicString serviceID;
} Config;

typedef struct DynamicArray<re::SharedPtr<(anonymous namespace)::MCProtocolHandle> > {
	Allocator m_allocator;
	unsigned long long m_capacity;
	unsigned long long m_size;
	unsigned m_version;
	SharedPtr<(anonymous namespace)::MCProtocolHandle> m_data;
} DynamicArray<re::SharedPtr<(anonymous namespace)::MCProtocolHandle> >;

typedef struct DynamicArray<unsigned char> {
	Allocator m_allocator;
	unsigned long long m_capacity;
	unsigned long long m_size;
	unsigned m_version;
	char* m_data;
} DynamicArray<unsigned char>;

typedef struct Queue<QueuedUpdateMessage> {
	Allocator m_allocator;
	unsigned long long m_capacity;
	unsigned long long m_size;
	unsigned long long m_head;
	unsigned m_version;
	QueuedUpdateMessage m_data;
} Queue<QueuedUpdateMessage>;

typedef struct os_unfair_lock_s {
	unsigned _os_unfair_lock_opaque;
} os_unfair_lock_s;

typedef struct UnfairLock {
	os_unfair_lock_s m_lock;
} UnfairLock;

typedef struct {
	[4 columns];
} SCD_Struct_RE33;

