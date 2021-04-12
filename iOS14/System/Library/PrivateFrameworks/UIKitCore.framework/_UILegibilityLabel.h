/*
* Generated on Thursday, January 14, 2021 at 2:20:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UILegibilityView.h>

@class NSString, UIFont;

@interface _UILegibilityLabel : _UILegibilityView {

	BOOL _usesSecondaryColor;
	NSString* _string;
	UIFont* _font;

}

@property (nonatomic,copy) NSString * string;                        //@synthesize string=_string - In the implementation block
@property (nonatomic,retain) UIFont * font;                          //@synthesize font=_font - In the implementation block
@property (nonatomic,readonly) BOOL usesSecondaryColor;              //@synthesize usesSecondaryColor=_usesSecondaryColor - In the implementation block
@property (nonatomic,readonly) double baselineOffset; 
-(BOOL)usesSecondaryColor;
-(void)updateImage;
-(void)setFont:(UIFont *)arg1 ;
-(id)initWithSettings:(id)arg1 strength:(double)arg2 string:(id)arg3 font:(id)arg4 options:(long long)arg5 ;
-(double)baselineOffset;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(NSString *)string;
-(id)initWithSettings:(id)arg1 strength:(double)arg2 string:(id)arg3 font:(id)arg4 ;
-(void)setString:(NSString *)arg1 ;
-(void)dealloc;
-(UIFont *)font;
@end

