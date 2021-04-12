/*
* Generated on Thursday, January 14, 2021 at 2:22:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <UIKitCore/UIView.h>

@class UIFont, NSMutableArray, UILabel;

@interface PXAnimatedCounter : UIView {

	UIFont* _font;
	unsigned long long _number;
	NSMutableArray* _digitLabels;
	UILabel* _backingLabel;
	unsigned long long _animationsInProgress;
	CGSize _maxDigitSize;
	CGSize _previousSize;

}

@property (readonly) NSMutableArray * digitLabels;                       //@synthesize digitLabels=_digitLabels - In the implementation block
@property (readonly) UILabel * backingLabel;                             //@synthesize backingLabel=_backingLabel - In the implementation block
@property (assign) CGSize maxDigitSize;                                  //@synthesize maxDigitSize=_maxDigitSize - In the implementation block
@property (assign) unsigned long long animationsInProgress;              //@synthesize animationsInProgress=_animationsInProgress - In the implementation block
@property (assign) CGSize previousSize;                                  //@synthesize previousSize=_previousSize - In the implementation block
@property (nonatomic,retain) UIFont * font;                              //@synthesize font=_font - In the implementation block
@property (assign,nonatomic) unsigned long long number;                  //@synthesize number=_number - In the implementation block
-(void)setNumber:(unsigned long long)arg1 ;
-(unsigned long long)number;
-(id)initWithFrame:(CGRect)arg1 ;
-(CGSize)previousSize;
-(void)setFont:(UIFont *)arg1 ;
-(void)setPreviousSize:(CGSize)arg1 ;
-(void)commonInit;
-(void)layoutSubviews;
-(void)setFrame:(CGRect)arg1 ;
-(NSMutableArray *)digitLabels;
-(void)setNumber:(unsigned long long)arg1 animated:(BOOL)arg2 ;
-(void)setNumber:(unsigned long long)arg1 animated:(BOOL)arg2 completionBlock:(/*^block*/id)arg3 ;
-(CGSize)requiredSizeForNumber:(unsigned long long)arg1 ;
-(void)setNumber:(unsigned long long)arg1 withAnimationStyle:(long long)arg2 completionBlock:(/*^block*/id)arg3 ;
-(long long)preferredAnimationStyleForNumber:(unsigned long long)arg1 ;
-(double)_xOffsetForBackingLabel:(id)arg1 ;
-(unsigned long long)_numDigitsForNumber:(long long)arg1 ;
-(id)_numberStringForNumber:(long long)arg1 ;
-(void)_setCounterToNumber:(unsigned long long)arg1 ;
-(void)_calculateLargestDigitSize;
-(id)_labelForDigit:(unsigned long long)arg1 ;
-(void)_updateFramesForShownDigits;
-(UILabel *)backingLabel;
-(CGSize)maxDigitSize;
-(void)setMaxDigitSize:(CGSize)arg1 ;
-(unsigned long long)animationsInProgress;
-(void)setAnimationsInProgress:(unsigned long long)arg1 ;
-(void)_updateSizeIfNeeded;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithNumber:(unsigned long long)arg1 ;
-(UIFont *)font;
@end

