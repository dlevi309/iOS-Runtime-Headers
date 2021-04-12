/*
* Generated on Thursday, January 14, 2021 at 2:23:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSDate *)fireDate;
-(BOOL)isValid;
-(void)invalidate;
-(NSObject*<OS_dispatch_queue>)queue;
-(id)initWithFireDate:(id)arg1 queue:(id)arg2 target:(id)arg3 selector:(SEL)arg4 ;
-(id)initWithFireDate:(id)arg1 queue:(id)arg2 block:(/*^block*/id)arg3 ;
@end

