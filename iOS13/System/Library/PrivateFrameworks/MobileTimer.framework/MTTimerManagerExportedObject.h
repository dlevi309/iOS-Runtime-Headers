/*
* Generated on Monday, March 1, 2021 at 2:32:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
*/

#import <libobjc.A.dylib/MTTimerClient.h>

@class MTTimerManager, NSString;

@interface MTTimerManagerExportedObject : NSObject <MTTimerClient> {

	MTTimerManager* _timerManager;

}

@property (nonatomic,__weak,readonly) MTTimerManager * timerManager;              //@synthesize timerManager=_timerManager - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)timerFired:(id)arg1 ;
-(void)timersAdded:(id)arg1 ;
-(void)timersUpdated:(id)arg1 ;
-(void)timersRemoved:(id)arg1 ;
-(id)initWithTimerManager:(id)arg1 ;
-(void)_didReceiveTimerServerReadyNotification:(id)arg1 ;
-(MTTimerManager *)timerManager;
-(void)timerDismissed:(id)arg1 ;
-(void)nextTimerChanged:(id)arg1 ;
@end

