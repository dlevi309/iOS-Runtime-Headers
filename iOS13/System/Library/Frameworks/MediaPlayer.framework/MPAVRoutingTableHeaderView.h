/*
* Generated on Monday, March 1, 2021 at 2:31:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <UIKitCore/UIView.h>

@class UILabel, CAShapeLayer;

@interface MPAVRoutingTableHeaderView : UIView {

	UIEdgeInsets _edgeInsets;
	UILabel* _titleLabel;
	UILabel* _detailLabel;
	CAShapeLayer* _borderLayer;

}
-(id)initWithCoder:(id)arg1 ;
-(void)_init;
-(id)initWithFrame:(CGRect)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(id)_mirroringTitleTextAttributes;
-(id)_mirroringCompactDescription;
-(id)_mirroringCompactDescriptionTextAttributes;
@end

