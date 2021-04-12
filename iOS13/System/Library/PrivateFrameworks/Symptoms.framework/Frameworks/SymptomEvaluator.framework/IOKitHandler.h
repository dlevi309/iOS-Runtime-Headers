/*
* Generated on Monday, March 1, 2021 at 2:33:22 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
*/

#import <SymptomEvaluator/SymptomEvaluator-Structs.h>
#import <libobjc.A.dylib/ConfigurableObjectProtocol.h>

@protocol OS_dispatch_queue;
@class NSObject, NSString;

@interface IOKitHandler : NSObject <ConfigurableObjectProtocol> {

	unsigned long long _ioHdl;
	unsigned _pwrConnect;
	unsigned _pwrNotifier;
	IONotificationPortRef _pwrPort;
	NSObject*<OS_dispatch_queue> _queue;
	unsigned long long _mostRecentAPWakeMachTime;
	unsigned long long _mostRecentAPSleepMachTime;

}

@property (nonatomic,readonly) unsigned long long mostRecentAPSleepMachTime; 
@property (nonatomic,readonly) unsigned long long mostRecentAPWakeMachTime; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
+(id)configureClass:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(NSString *)description;
-(int)configureInstance:(id)arg1 ;
-(int)read:(id)arg1 returnedValues:(id)arg2 ;
-(unsigned long long)mostRecentAPSleepMachTime;
-(void)enableIOKitPowerNotifications;
-(void)enableIOKitAssertionNotifications;
-(void)disableIOKitAssertionNotifications;
-(void)disableIOKitPowerNotifications;
-(void)reportIOPMAssertionException:(int)arg1 pid:(int)arg2 ;
-(unsigned long long)mostRecentAPWakeMachTime;
-(void)updateMostRecentAPSleepTime;
-(void)updateMostRecentAPWakeTime;
@end

