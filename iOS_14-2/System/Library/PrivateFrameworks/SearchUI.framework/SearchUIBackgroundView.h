/*
* Generated on Thursday, January 14, 2021 at 2:24:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
*/

#import <UIKitCore/UIView.h>

@class UIView;

@interface SearchUIBackgroundView : UIView {

	BOOL _shouldUseInsetRoundedSections;
	BOOL _inPreviewPlatter;
	UIView* _platterView;

}

@property (retain) UIView * platterView;                                                   //@synthesize platterView=_platterView - In the implementation block
@property (assign,nonatomic) BOOL shouldUseInsetRoundedSections;                           //@synthesize shouldUseInsetRoundedSections=_shouldUseInsetRoundedSections - In the implementation block
@property (assign,getter=isInPreviewPlatter,nonatomic) BOOL inPreviewPlatter;              //@synthesize inPreviewPlatter=_inPreviewPlatter - In the implementation block
-(UIView *)platterView;
-(void)setPlatterView:(UIView *)arg1 ;
-(id)init;
-(void)_dynamicUserInterfaceTraitDidChange;
-(BOOL)isInPreviewPlatter;
-(void)tlk_updateForAppearance:(id)arg1 ;
-(void)didMoveToWindow;
-(void)setShouldUseInsetRoundedSections:(BOOL)arg1 ;
-(BOOL)shouldUseInsetRoundedSections;
-(void)setInPreviewPlatter:(BOOL)arg1 ;
@end

