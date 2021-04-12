/*
* Generated on Thursday, January 14, 2021 at 2:23:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
*/

#import <libobjc.A.dylib/GKChallengeEventHandlerUIDelegate.h>

@protocol GKChallengeEventHandlerUIDelegate <NSObject>
@optional
-(void)showReceivedBannerForIssuingPlayer:(id)arg1 challenge:(id)arg2 handler:(/*^block*/id)arg3;
-(void)showRemotelyCompletedBannerForReceivingPlayer:(id)arg1 challenge:(id)arg2 handler:(/*^block*/id)arg3;
-(void)showLocallyCompletedBannerForIssuingPlayer:(id)arg1 challenge:(id)arg2 handler:(/*^block*/id)arg3;

@end


@class NSString;

@interface GKChallengeEventHandlerUIDelegate : NSObject <GKChallengeEventHandlerUIDelegate>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)showReceivedBannerForIssuingPlayer:(id)arg1 challenge:(id)arg2 handler:(/*^block*/id)arg3 ;
-(void)showRemotelyCompletedBannerForReceivingPlayer:(id)arg1 challenge:(id)arg2 handler:(/*^block*/id)arg3 ;
-(void)showLocallyCompletedBannerForIssuingPlayer:(id)arg1 challenge:(id)arg2 handler:(/*^block*/id)arg3 ;
@end

