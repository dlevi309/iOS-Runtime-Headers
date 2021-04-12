/*
* Generated on Monday, March 1, 2021 at 2:31:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(id)object;
-(id)initWithObject:(id)arg1 ;
-(void)setObject:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)objectAccessQueue;
-(id)accessAndSetObjectWithBlock:(/*^block*/id)arg1 ;
-(void)setObjectAccessQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
@end

