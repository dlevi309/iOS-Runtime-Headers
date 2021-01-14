/*
* Generated on Thursday, January 14, 2021 at 2:21:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id)_mirroringTitleTextAttributes;
-(id)_mirroringCompactDescription;
-(id)_mirroringCompactDescriptionTextAttributes;
-(id)initWithCoder:(id)arg1 ;
-(void)_init;
@end

