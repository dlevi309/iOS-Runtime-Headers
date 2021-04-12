/*
* Generated on Thursday, January 14, 2021 at 2:23:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)timerFired:(id)arg1 ;
-(MTTimerManager *)timerManager;
-(void)nextTimerChanged:(id)arg1 ;
-(void)timersRemoved:(id)arg1 ;
-(void)_didReceiveTimerServerReadyNotification:(id)arg1 ;
-(id)initWithTimerManager:(id)arg1 ;
-(void)timersAdded:(id)arg1 ;
-(void)timersUpdated:(id)arg1 ;
-(void)timerDismissed:(id)arg1 ;
-(void)dealloc;
@end

