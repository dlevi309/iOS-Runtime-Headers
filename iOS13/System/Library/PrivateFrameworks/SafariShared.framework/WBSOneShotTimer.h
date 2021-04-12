/*
* Generated on Monday, March 1, 2021 at 2:33:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
*/


@protocol OS_dispatch_queue;
@class NSObject, NSDate;

@interface WBSOneShotTimer : NSObject {

	/*^block*/id _block;
	NSObject*<OS_dispatch_queue> _queue;
	NSDate* _fireDate;

}

@property (nonatomic,readonly) BOOL isValid; 
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
@property (nonatomic,readonly) NSDate * fireDate;                               //@synthesize fireDate=_fireDate - In the implementation block
-(void)invalidate;
-(NSObject*<OS_dispatch_queue>)queue;
-(BOOL)isValid;
-(NSDate *)fireDate;
-(id)initWithFireDate:(id)arg1 queue:(id)arg2 target:(id)arg3 selector:(SEL)arg4 ;
-(id)initWithFireDate:(id)arg1 queue:(id)arg2 block:(/*^block*/id)arg3 ;
@end

