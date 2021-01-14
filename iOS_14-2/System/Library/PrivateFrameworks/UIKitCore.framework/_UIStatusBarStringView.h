/*
* Generated on Thursday, January 14, 2021 at 2:20:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UILabel.h>
#import <UIKitCore/_UIStatusBarDisplayable.h>

@class NSString, NSTimer, UIAccessibilityHUDItem;

@interface _UIStatusBarStringView : UILabel <_UIStatusBarDisplayable> {

	BOOL _showsAlternateText;
	long long _fontStyle;
	NSString* _alternateText;
	NSString* _originalText;
	NSTimer* _alternateTextTimer;
	UIEdgeInsets _alignmentRectInsets;

}

@property (assign,nonatomic) BOOL showsAlternateText;                                                //@synthesize showsAlternateText=_showsAlternateText - In the implementation block
@property (nonatomic,copy) NSString * originalText;                                                  //@synthesize originalText=_originalText - In the implementation block
@property (nonatomic,readonly) NSTimer * alternateTextTimer;                                         //@synthesize alternateTextTimer=_alternateTextTimer - In the implementation block
@property (assign,nonatomic) long long fontStyle;                                                    //@synthesize fontStyle=_fontStyle - In the implementation block
@property (assign,nonatomic) UIEdgeInsets alignmentRectInsets;                                       //@synthesize alignmentRectInsets=_alignmentRectInsets - In the implementation block
@property (nonatomic,copy) NSString * alternateText;                                                 //@synthesize alternateText=_alternateText - In the implementation block
@property (nonatomic,readonly) BOOL wantsCrossfade; 
@property (nonatomic,readonly) BOOL prefersBaselineAlignment; 
@property (nonatomic,readonly) long long overriddenVerticalAlignment; 
@property (nonatomic,readonly) UIAccessibilityHUDItem * accessibilityHUDRepresentation; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)alternateText;
-(void)applyStyleAttributes:(id)arg1 ;
-(void)setFontStyle:(long long)arg1 ;
-(void)setAlternateText:(NSString *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(NSTimer *)alternateTextTimer;
-(UIEdgeInsets)alignmentRectInsets;
-(void)setAlignmentRectInsets:(UIEdgeInsets)arg1 ;
-(void)setText:(id)arg1 ;
-(BOOL)prefersBaselineAlignment;
-(BOOL)wantsCrossfade;
-(long long)fontStyle;
-(NSString *)originalText;
-(BOOL)showsAlternateText;
-(void)didMoveToWindow;
-(void)setShowsAlternateText:(BOOL)arg1 ;
-(void)setOriginalText:(NSString *)arg1 ;
-(UIAccessibilityHUDItem *)accessibilityHUDRepresentation;
-(void)_updateAlternateTextTimer;
@end

