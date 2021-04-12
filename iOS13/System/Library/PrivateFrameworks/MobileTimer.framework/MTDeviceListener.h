/*
* Generated on Monday, March 1, 2021 at 2:32:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
+(BOOL)hasBeenUnlockedSinceBoot;
+(id)sharedDeviceListener;
+(BOOL)_latestKeyBagValueForHasBeenUnlockedSinceBoot;
-(id)init;
-(void)setInternalHasBeenUnlockedSinceBoot:(BOOL)arg1 ;
-(BOOL)internalHasBeenUnlockedSinceBoot;
-(BOOL)handlesNotification:(id)arg1 ofType:(long long)arg2 ;
-(void)handleNotification:(id)arg1 ofType:(long long)arg2 completion:(/*^block*/id)arg3 ;
-(void)printDiagnostics;
-(id)gatherDiagnostics;
-(id<NAScheduler>)workScheduler;
-(BOOL)_hasBeenUnlockedSinceBoot;
-(void)setWorkScheduler:(id<NAScheduler>)arg1 ;
@end

