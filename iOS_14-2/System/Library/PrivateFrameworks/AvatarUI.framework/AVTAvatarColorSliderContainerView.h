/*
* Generated on Thursday, January 14, 2021 at 2:23:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
*/

#import <AvatarUI/AvatarUI-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/AVTColorSliderDelegate.h>

@protocol AVTAvatarColorSliderContainerViewDelegate;
@class AVTAvatarAttributeEditorSectionColorItem, AVTColorSlider, NSArray;

@interface AVTAvatarColorSliderContainerView : UIView <AVTColorSliderDelegate> {

	AVTAvatarAttributeEditorSectionColorItem* _sectionItem;
	id<AVTAvatarColorSliderContainerViewDelegate> _delegate;
	AVTColorSlider* _slider;
	NSArray* _layoutConstraints;

}

@property (nonatomic,retain) AVTColorSlider * slider;                                                    //@synthesize slider=_slider - In the implementation block
@property (nonatomic,retain) NSArray * layoutConstraints;                                                //@synthesize layoutConstraints=_layoutConstraints - In the implementation block
@property (nonatomic,retain) AVTAvatarAttributeEditorSectionColorItem * sectionItem;                     //@synthesize sectionItem=_sectionItem - In the implementation block
@property (assign,nonatomic,__weak) id<AVTAvatarColorSliderContainerViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(AVTColorSlider *)slider;
-(AVTAvatarAttributeEditorSectionColorItem *)sectionItem;
-(id<AVTAvatarColorSliderContainerViewDelegate>)delegate;
-(NSArray *)layoutConstraints;
-(void)setLayoutConstraints:(NSArray *)arg1 ;
-(void)colorSlider:(id)arg1 valueChanged:(double)arg2 ;
-(void)colorSlider:(id)arg1 didFinishSelectingValue:(double)arg2 ;
-(void)setDelegate:(id<AVTAvatarColorSliderContainerViewDelegate>)arg1 ;
-(void)layoutSubviews;
-(void)setSlider:(AVTColorSlider *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 userInterfaceLayoutDirection:(long long)arg2 ;
-(void)setSectionItem:(id)arg1 animated:(BOOL)arg2 ;
-(void)updateSliderWithColorPreset:(id)arg1 animated:(BOOL)arg2 ;
-(void)updateSliderTrackLayerAnimated:(BOOL)arg1 ;
-(void)setSectionItem:(AVTAvatarAttributeEditorSectionColorItem *)arg1 ;
@end

