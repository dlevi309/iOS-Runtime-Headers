/*
* Generated on Monday, March 1, 2021 at 2:30:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIStatusBarItemView.h>

@class NSString;

@interface UIStatusBarDateTimeItemView : UIStatusBarItemView {

	BOOL _useCustomFadeAnimation;
	NSString* _dateTimeString;

}

@property (nonatomic,copy) NSString * dateTimeString;                  //@synthesize dateTimeString=_dateTimeString - In the implementation block
@property (assign,nonatomic) BOOL useCustomFadeAnimation;              //@synthesize useCustomFadeAnimation=_useCustomFadeAnimation - In the implementation block
+(const char*)_cStringFromData:(SCD_Struct_UI109*)arg1 ;
-(long long)textStyle;
-(void)setFrame:(CGRect)arg1 ;
-(id)accessibilityHUDRepresentation;
-(BOOL)updateForNewData:(id)arg1 actions:(int)arg2 ;
-(void)setVisible:(BOOL)arg1 frame:(CGRect)arg2 duration:(double)arg3 ;
-(id)contentsImage;
-(double)extraRightPadding;
-(BOOL)shouldTintContentImage;
-(BOOL)useCustomFadeAnimation;
-(void)setUseCustomFadeAnimation:(BOOL)arg1 ;
-(NSString *)dateTimeString;
-(void)setDateTimeString:(NSString *)arg1 ;
@end

