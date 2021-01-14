/*
* Generated on Thursday, January 14, 2021 at 2:20:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(const char*)_cStringFromData:(SCD_Struct_UI120*)arg1 ;
-(BOOL)useCustomFadeAnimation;
-(NSString *)dateTimeString;
-(void)setUseCustomFadeAnimation:(BOOL)arg1 ;
-(void)setDateTimeString:(NSString *)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(long long)textStyle;
-(BOOL)updateForNewData:(id)arg1 actions:(int)arg2 ;
-(void)setVisible:(BOOL)arg1 frame:(CGRect)arg2 duration:(double)arg3 ;
-(id)contentsImage;
-(double)extraRightPadding;
-(id)accessibilityHUDRepresentation;
-(BOOL)shouldTintContentImage;
@end

