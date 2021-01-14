/*
* Generated on Thursday, January 14, 2021 at 2:23:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CryptoTokenKit.framework/CryptoTokenKit
*/


@protocol OS_dispatch_source, OS_dispatch_queue;
@class NSString, TKSharedResource, NSObject;

@interface TKSharedResourceSlot : NSObject {

	NSString* _name;
	TKSharedResource* _resource;
	id _object;
	NSObject*<OS_dispatch_source> _idleTimer;
	/*^block*/id _createObjectBlock;
	/*^block*/id _objectDestroyedBlock;
	double _idleTimeout;
	NSObject*<OS_dispatch_queue> _idleQueue;

}

@property (nonatomic,copy) id createObjectBlock;                                  //@synthesize createObjectBlock=_createObjectBlock - In the implementation block
@property (nonatomic,copy) id objectDestroyedBlock;                               //@synthesize objectDestroyedBlock=_objectDestroyedBlock - In the implementation block
@property (assign,nonatomic) double idleTimeout;                                  //@synthesize idleTimeout=_idleTimeout - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> idleQueue;              //@synthesize idleQueue=_idleQueue - In the implementation block
-(void)setIdleQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setCreateObjectBlock:(id)arg1 ;
-(id)createObjectBlock;
-(void)setIdleTimeout:(double)arg1 ;
-(id)object;
-(id)initWithName:(id)arg1 ;
-(id)description;
-(NSObject*<OS_dispatch_queue>)idleQueue;
-(void)releaseResource;
-(void)destroyObject;
-(id)resourceWithError:(id*)arg1 ;
-(void)setObjectDestroyedBlock:(id)arg1 ;
-(id)objectDestroyedBlock;
-(double)idleTimeout;
-(void)dealloc;
@end

