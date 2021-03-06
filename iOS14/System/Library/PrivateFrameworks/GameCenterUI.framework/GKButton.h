/*
* Generated on Thursday, January 14, 2021 at 2:23:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
*/

#import <GameCenterUI/GameCenterUI-Structs.h>
#import <UIKitCore/UIButton.h>
#import <libobjc.A.dylib/GKTextStyleReplay.h>

@class GKTextStyle, GKButtonStyle, NSString;

@interface GKButton : UIButton <GKTextStyleReplay> {

	GKTextStyle* _baseStyle;
	GKTextStyle* _appliedStyle;
	GKButtonStyle* _appliedButtonStyle;

}

@property (nonatomic,retain) GKTextStyle * baseStyle; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) GKTextStyle * appliedStyle;              //@synthesize appliedStyle=_appliedStyle - In the implementation block
+(void)initialize;
-(void)_UIAppearance_setBaseStyle:(id)arg1 ;
-(void)applyButtonStyle:(id)arg1 ;
-(CGSize)intrinsicContentSize;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)replayAndApplyStyleWithSystemContentChange:(BOOL)arg1 ;
-(void)setBaseStyle:(GKTextStyle *)arg1 ;
-(GKTextStyle *)baseStyle;
-(GKTextStyle *)appliedStyle;
-(void)setAppliedStyle:(GKTextStyle *)arg1 ;
-(void)applyTextStyle:(id)arg1 ;
-(void)setAttributedTitle:(id)arg1 forState:(unsigned long long)arg2 ;
@end

