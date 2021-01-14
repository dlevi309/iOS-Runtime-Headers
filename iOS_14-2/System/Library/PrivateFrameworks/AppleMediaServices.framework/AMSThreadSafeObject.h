/*
* Generated on Thursday, January 14, 2021 at 2:20:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
*/


@protocol OS_dispatch_queue;
@class NSObject;

@interface AMSThreadSafeObject : NSObject {

	id _object;
	NSObject*<OS_dispatch_queue> _objectAccessQueue;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> objectAccessQueue;              //@synthesize objectAccessQueue=_objectAccessQueue - In the implementation block
@property (nonatomic,retain) id object;                                                   //@synthesize object=_object - In the implementation block
-(id)initWithObject:(id)arg1 ;
-(id)init;
-(id)object;
-(void)setObject:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)objectAccessQueue;
-(id)accessAndSetObjectWithBlock:(/*^block*/id)arg1 ;
-(void)setObjectAccessQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
@end

