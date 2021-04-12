/*
* Generated on Monday, March 1, 2021 at 2:32:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
*/


@protocol OS_dispatch_queue;
@class NSObject;

@interface _NMSDispatchQueue : NSObject {

	NSObject*<OS_dispatch_queue> _q;
	AB _r;

}

@property (getter=isSuspended,nonatomic,readonly) BOOL suspended; 
-(id)init;
-(void)dealloc;
-(void)resume;
-(BOOL)isSuspended;
-(void)suspend;
-(void)async:(/*^block*/id)arg1 ;
-(void)sync:(/*^block*/id)arg1 ;
-(id)initWithName:(id)arg1 attributes:(id)arg2 target:(id)arg3 ;
@end

