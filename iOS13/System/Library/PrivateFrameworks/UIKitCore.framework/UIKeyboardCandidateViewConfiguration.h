/*
* Generated on Monday, March 1, 2021 at 2:30:15 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


#import <UIKitCore/UIKitCore-Structs.h>
@class UIColor;

@interface UIKeyboardCandidateViewConfiguration : NSObject {

	BOOL _darkKeyboard;
	BOOL _shouldAlwaysShowSortControl;
	BOOL _shouldUsePredictionViewSecureRenderTraits;

}

@property (nonatomic,readonly) UIColor * highlightedBackgroundColor; 
@property (assign,nonatomic) BOOL darkKeyboard;                                                //@synthesize darkKeyboard=_darkKeyboard - In the implementation block
@property (nonatomic,readonly) unsigned long long rowsToExtend; 
@property (nonatomic,readonly) unsigned long long maxNumberOfProactiveCandidates; 
@property (nonatomic,readonly) BOOL shouldResizeKeyboardBackdrop; 
@property (nonatomic,readonly) BOOL shouldAlwaysShowSortControl;                               //@synthesize shouldAlwaysShowSortControl=_shouldAlwaysShowSortControl - In the implementation block
@property (nonatomic,readonly) BOOL shouldUsePredictionViewSecureRenderTraits;                 //@synthesize shouldUsePredictionViewSecureRenderTraits=_shouldUsePredictionViewSecureRenderTraits - In the implementation block
@property (nonatomic,readonly) BOOL willCoverKeyboardLayout; 
@property (nonatomic,readonly) BOOL allowsPullDownGesture; 
@property (nonatomic,readonly) CGSize preferredInlineFloatingViewSize; 
@property (nonatomic,readonly) int inlineFloatingViewAdjustMode; 
+(id)configuration;
-(id)initialState;
-(id)extendedState;
-(id)extendedScrolledState;
-(BOOL)darkKeyboard;
-(void)setDarkKeyboard:(BOOL)arg1 ;
-(BOOL)shouldAlwaysShowSortControl;
-(unsigned long long)rowsToExtend;
-(CGSize)preferredInlineFloatingViewSize;
-(int)inlineFloatingViewAdjustMode;
-(BOOL)shouldResizeKeyboardBackdrop;
-(BOOL)willCoverKeyboardLayout;
-(BOOL)allowsPullDownGesture;
-(unsigned long long)maxNumberOfProactiveCandidates;
-(BOOL)shouldUsePredictionViewSecureRenderTraits;
-(double)candidateDefaultFontSize;
-(id)candidateFontWithSize:(double)arg1 ;
-(BOOL)usesReducedFontSize;
-(UIColor *)highlightedBackgroundColor;
@end

