/*
* Generated on Thursday, January 14, 2021 at 2:23:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
*/

#import <libobjc.A.dylib/MTAgentDiagnosticDelegate.h>
#import <libobjc.A.dylib/MTAgentNotificationListener.h>

@protocol NAScheduler;
@class NSString;

@interface MTDeviceListener : NSObject <MTAgentDiagnosticDelegate, MTAgentNotificationListener> {

	BOOL _internalHasBeenUnlockedSinceBoot;
	id<NAScheduler> _workScheduler;

}

@property (nonatomic,retain) id<NAScheduler> workScheduler;                      //@synthesize workScheduler=_workScheduler - In the implementation block
@property (assign,nonatomic) BOOL internalHasBeenUnlockedSinceBoot;              //@synthesize internalHasBeenUnlockedSinceBoot=_internalHasBeenUnlockedSinceBoot - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedDeviceListener;
+(BOOL)hasBeenUnlockedSinceBoot;
+(BOOL)_latestKeyBagValueForHasBeenUnlockedSinceBoot;
-(BOOL)handlesNotification:(id)arg1 ofType:(long long)arg2 ;
-(id)gatherDiagnostics;
-(void)printDiagnostics;
-(id)init;
-(BOOL)internalHasBeenUnlockedSinceBoot;
-(void)handleNotification:(id)arg1 ofType:(long long)arg2 completion:(/*^block*/id)arg3 ;
-(id<NAScheduler>)workScheduler;
-(void)setInternalHasBeenUnlockedSinceBoot:(BOOL)arg1 ;
-(BOOL)_hasBeenUnlockedSinceBoot;
-(void)setWorkScheduler:(id<NAScheduler>)arg1 ;
@end

