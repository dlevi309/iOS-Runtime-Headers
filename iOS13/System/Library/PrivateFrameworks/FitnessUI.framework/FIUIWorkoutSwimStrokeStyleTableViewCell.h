/*
* Generated on Monday, March 1, 2021 at 2:34:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/FitnessUI.framework/FitnessUI
*/

#import <UIKitCore/UITableViewCell.h>

@class FIUIDividerView;

@interface FIUIWorkoutSwimStrokeStyleTableViewCell : UITableViewCell {

	FIUIDividerView* _dividerView;

}

@property (nonatomic,retain) FIUIDividerView * dividerView;              //@synthesize dividerView=_dividerView - In the implementation block
+(id)_sizingLabel;
+(id)_overrideLabelAttributes;
+(double)preferredHeightWithSwimDistanceByStrokeStyle:(id)arg1 isPoolSwim:(BOOL)arg2 width:(double)arg3 formattingManager:(id)arg4 ;
-(void)layoutSubviews;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(FIUIDividerView *)dividerView;
-(void)setDividerView:(FIUIDividerView *)arg1 ;
-(void)configureWithSwimDistanceByStrokeStyle:(id)arg1 isPoolSwim:(BOOL)arg2 formattingManager:(id)arg3 ;
@end

