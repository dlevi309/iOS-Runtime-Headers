/*
* Generated on Thursday, January 14, 2021 at 2:22:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaServices.framework/MediaServices
*/


@class PCPersistentTimer, NSString, NSDate;

@interface MSVPersistentTimer : NSObject {

	PCPersistentTimer* _timer;
	NSString* _name;
	/*^block*/id _block;
	NSDate* _startDate;
	double _interval;

}

@property (getter=isValid,nonatomic,readonly) BOOL valid; 
-(void)invalidateWithReason:(id)arg1 ;
-(void)_handleTimerElapsed:(id)arg1 ;
-(BOOL)isValid;
-(id)initWithInterval:(double)arg1 name:(id)arg2 queue:(id)arg3 block:(/*^block*/id)arg4 ;
-(void)invalidate;
-(void)dealloc;
@end

