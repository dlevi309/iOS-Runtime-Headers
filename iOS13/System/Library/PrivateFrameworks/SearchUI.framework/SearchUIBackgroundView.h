/*
* Generated on Monday, March 1, 2021 at 2:33:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(void)didMoveToWindow;
-(void)_dynamicUserInterfaceTraitDidChange;
-(void)setPlatterView:(UIView *)arg1 ;
-(UIView *)platterView;
-(void)tlk_updateForAppearance:(id)arg1 ;
-(void)setShouldUseInsetRoundedSections:(BOOL)arg1 ;
-(BOOL)shouldUseInsetRoundedSections;
-(void)setInPreviewPlatter:(BOOL)arg1 ;
-(BOOL)isInPreviewPlatter;
@end

