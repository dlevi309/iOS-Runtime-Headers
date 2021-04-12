/*
* Generated on Monday, March 1, 2021 at 2:33:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoverSheet.framework/CoverSheet
*/

#import <CoverSheet/CoverSheet-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/SBSystemCursorInteractionDelegate.h>
#import <libobjc.A.dylib/SBUIOptionalLegibility.h>

@protocol CSCoverSheetContextProviding;
@class _UILegibilitySettings, SBFHomeGrabberSettings, UIColor, MTStaticColorPillView, MTLumaDodgePillView, NSString;

@interface CSHomeAffordanceView : UIView <SBSystemCursorInteractionDelegate, SBUIOptionalLegibility> {

	SBFHomeGrabberSettings* _settings;
	BOOL _systemCursorInteractionEnabled;
	_UILegibilitySettings* _legibilitySettings;
	unsigned long long _style;
	UIColor* _overrideColor;
	id<CSCoverSheetContextProviding> _coverSheetContext;
	MTStaticColorPillView* _staticHomeAffordance;
	MTLumaDodgePillView* _dynamicHomeAffordance;

}

@property (assign,nonatomic,__weak) MTStaticColorPillView * staticHomeAffordance;                                      //@synthesize staticHomeAffordance=_staticHomeAffordance - In the implementation block
@property (assign,nonatomic,__weak) MTLumaDodgePillView * dynamicHomeAffordance;                                       //@synthesize dynamicHomeAffordance=_dynamicHomeAffordance - In the implementation block
@property (assign,nonatomic) unsigned long long style;                                                                 //@synthesize style=_style - In the implementation block
@property (nonatomic,retain) UIColor * overrideColor;                                                                  //@synthesize overrideColor=_overrideColor - In the implementation block
@property (nonatomic,retain) id<CSCoverSheetContextProviding> coverSheetContext;                                       //@synthesize coverSheetContext=_coverSheetContext - In the implementation block
@property (assign,getter=isSystemCursorInteractionEnabled,nonatomic) BOOL systemCursorInteractionEnabled;              //@synthesize systemCursorInteractionEnabled=_systemCursorInteractionEnabled - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) _UILegibilitySettings * legibilitySettings;                                               //@synthesize legibilitySettings=_legibilitySettings - In the implementation block
-(id)init;
-(unsigned long long)style;
-(void)setStyle:(unsigned long long)arg1 ;
-(void)layoutSubviews;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(_UILegibilitySettings *)legibilitySettings;
-(void)setLegibilitySettings:(_UILegibilitySettings *)arg1 ;
-(UIColor *)overrideColor;
-(void)setOverrideColor:(UIColor *)arg1 ;
-(double)suggestedEdgeSpacing;
-(CGSize)suggestedSizeForContentWidth:(double)arg1 ;
-(void)_createStaticHomeAffordance;
-(void)_createDynamicHomeAffordance;
-(void)setStaticHomeAffordance:(MTStaticColorPillView *)arg1 ;
-(void)setDynamicHomeAffordance:(MTLumaDodgePillView *)arg1 ;
-(void)_transitionToStyle:(unsigned long long)arg1 animated:(BOOL)arg2 ;
-(MTStaticColorPillView *)staticHomeAffordance;
-(void)_updateForLegibility;
-(id)_viewForStyle:(unsigned long long)arg1 ;
-(BOOL)shouldBeginCursorInteractionAtLocation:(CGPoint)arg1 forView:(id)arg2 ;
-(UIEdgeInsets)cursorInteractionHitTestInsetsForView:(id)arg1 ;
-(id)styleForRegion:(id)arg1 forView:(id)arg2 ;
-(void)setSystemCursorInteractionEnabled:(BOOL)arg1 ;
-(id<CSCoverSheetContextProviding>)coverSheetContext;
-(void)setCoverSheetContext:(id<CSCoverSheetContextProviding>)arg1 ;
-(BOOL)isSystemCursorInteractionEnabled;
-(MTLumaDodgePillView *)dynamicHomeAffordance;
@end

