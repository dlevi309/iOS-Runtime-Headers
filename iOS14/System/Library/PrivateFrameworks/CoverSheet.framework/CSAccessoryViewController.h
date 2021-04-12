/*
* Generated on Thursday, January 14, 2021 at 2:26:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoverSheet.framework/CoverSheet
*/

#import <CoverSheet/CSCoverSheetViewControllerBase.h>

@class CSAccessory, CSAccessoryView;

@interface CSAccessoryViewController : CSCoverSheetViewControllerBase {

	CSAccessory* _accessory;

}

@property (nonatomic,retain) CSAccessory * accessory;                                //@synthesize accessory=_accessory - In the implementation block
@property (nonatomic,readonly) CSAccessoryView * accessoryView; 
@property (nonatomic,readonly) BOOL isStatic; 
@property (nonatomic,readonly) BOOL hasChargingAnimation; 
@property (nonatomic,readonly) BOOL showingChargingAnimation; 
@property (nonatomic,readonly) double chargingAnimationDuration; 
@property (nonatomic,readonly) double animationDurationBeforeDismissal; 
-(long long)presentationStyle;
-(long long)presentationPriority;
-(CSAccessoryView *)accessoryView;
-(void)aggregateBehavior:(id)arg1 ;
-(CSAccessory *)accessory;
-(void)aggregateAppearance:(id)arg1 ;
-(long long)presentationType;
-(void)setAccessory:(CSAccessory *)arg1 ;
-(id)initWithAccessory:(id)arg1 ;
-(double)animationDurationBeforeDismissal;
-(void)performDismissalAnimationWithCompletionHandler:(/*^block*/id)arg1 ;
-(BOOL)hasChargingAnimation;
-(BOOL)showingChargingAnimation;
-(BOOL)isStatic;
-(void)transitionChargingViewVisible:(BOOL)arg1 chargingInfo:(id)arg2 ;
-(double)chargingAnimationDuration;
@end

