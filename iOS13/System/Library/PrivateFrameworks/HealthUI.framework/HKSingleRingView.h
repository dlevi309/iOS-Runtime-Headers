/*
* Generated on Monday, March 1, 2021 at 2:34:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/

#import <UIKitCore/UIView.h>

@class ARUIRingsView, UIImageView, HKActivitySummary;

@interface HKSingleRingView : UIView {

	ARUIRingsView* _ringView;
	UIImageView* _imageView;
	unsigned long long _type;
	HKActivitySummary* _activitySummary;

}

@property (nonatomic,readonly) unsigned long long type;                        //@synthesize type=_type - In the implementation block
@property (nonatomic,retain) HKActivitySummary * activitySummary;              //@synthesize activitySummary=_activitySummary - In the implementation block
-(unsigned long long)type;
-(id)initWithType:(unsigned long long)arg1 ;
-(void)layoutSubviews;
-(HKActivitySummary *)activitySummary;
-(void)setActivitySummary:(HKActivitySummary *)arg1 ;
-(void)setActivitySummary:(id)arg1 animated:(BOOL)arg2 ;
@end

