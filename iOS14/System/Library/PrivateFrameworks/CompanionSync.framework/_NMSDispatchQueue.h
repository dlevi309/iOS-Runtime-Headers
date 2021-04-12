/*
* Generated on Thursday, January 14, 2021 at 2:24:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
*/


@protocol OS_dispatch_queue;
@class NSObject;

@interface _NMSDispatchQueue : NSObject {

	NSObject*<OS_dispatch_queue> _q;
	AB _r;

}

@property (getter=isSuspended,nonatomic,readonly) BOOL suspended; 
-(void)sync:(/*^block*/id)arg1 ;
-(void)suspend;
-(BOOL)isSuspended;
-(id)init;
-(void)async:(/*^block*/id)arg1 ;
-(void)resume;
-(void)dealloc;
-(id)initWithName:(id)arg1 attributes:(id)arg2 target:(id)arg3 ;
@end

