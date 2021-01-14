/*
* Generated on Thursday, January 14, 2021 at 2:22:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

#import <UIKitCore/UITableViewCell.h>

@protocol PUSlideshowSpeedCellDelegate;
@class UIImageView, UISlider, NSArray;

@interface PUSlideshowSpeedCell : UITableViewCell {

	UIImageView* _slowerGlyphImageView;
	UIImageView* _fasterGlyphImageView;
	UISlider* _slider;
	NSArray* _speedConstraints;
	BOOL _enabled;
	id<PUSlideshowSpeedCellDelegate> _delegate;

}

@property (assign,nonatomic) double stepDuration; 
@property (assign,nonatomic,__weak) id<PUSlideshowSpeedCellDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,getter=isEnabled,nonatomic) BOOL enabled;                                 //@synthesize enabled=_enabled - In the implementation block
-(double)stepDuration;
-(id<PUSlideshowSpeedCellDelegate>)delegate;
-(void)_updateView;
-(void)setStepDuration:(double)arg1 ;
-(void)_stepDurationValueChanged:(id)arg1 ;
-(void)setEnabled:(BOOL)arg1 ;
-(void)setDelegate:(id<PUSlideshowSpeedCellDelegate>)arg1 ;
-(void)updateConstraints;
-(BOOL)isEnabled;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
@end

