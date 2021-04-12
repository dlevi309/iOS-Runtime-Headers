/*
* Generated on Thursday, January 14, 2021 at 2:20:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(double)candidateDefaultFontSize;
-(id)candidateFontWithSize:(double)arg1 ;
-(BOOL)usesReducedFontSize;
-(id)candidateFontWithSize:(double)arg1 language:(id)arg2 ;
-(UIColor *)highlightedBackgroundColor;
-(BOOL)darkKeyboard;
-(id)extendedState;
-(unsigned long long)rowsToExtend;
-(id)extendedScrolledState;
-(BOOL)shouldAlwaysShowSortControl;
-(CGSize)preferredInlineFloatingViewSize;
-(int)inlineFloatingViewAdjustMode;
-(BOOL)shouldResizeKeyboardBackdrop;
-(BOOL)willCoverKeyboardLayout;
-(BOOL)allowsPullDownGesture;
-(void)setDarkKeyboard:(BOOL)arg1 ;
-(unsigned long long)maxNumberOfProactiveCandidates;
-(BOOL)shouldUsePredictionViewSecureRenderTraits;
@end

