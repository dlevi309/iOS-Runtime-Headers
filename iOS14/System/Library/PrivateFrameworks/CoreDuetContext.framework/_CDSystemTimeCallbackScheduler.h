/*
* Generated on Thursday, January 14, 2021 at 2:21:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreDuetContext.framework/CoreDuetContext
*/


@class NSString;

@interface _CDSystemTimeCallbackScheduler : NSObject {

	NSString* _eventNameRoot;

}

@property (nonatomic,copy,readonly) NSString * eventNameRoot;              //@synthesize eventNameRoot=_eventNameRoot - In the implementation block
+(id)sharedInstance;
-(void)scheduleCallbackAtDate:(id)arg1 identifier:(id)arg2 requiringDeviceWake:(BOOL)arg3 ;
-(void)unscheduleCallbackAtDate:(id)arg1 identifier:(id)arg2 requiringDeviceWake:(BOOL)arg3 ;
-(id)initWithEventNameRoot:(id)arg1 ;
-(NSString *)eventNameRoot;
-(void)_handleCallbackAtDate:(id)arg1 ;
@end

