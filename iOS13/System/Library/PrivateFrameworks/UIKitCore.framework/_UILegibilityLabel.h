/*
* Generated on Monday, March 1, 2021 at 2:30:15 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSString *)string;
-(void)dealloc;
-(void)setString:(NSString *)arg1 ;
-(double)baselineOffset;
-(void)setFont:(UIFont *)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(UIFont *)font;
-(void)updateImage;
-(BOOL)usesSecondaryColor;
-(id)initWithSettings:(id)arg1 strength:(double)arg2 string:(id)arg3 font:(id)arg4 options:(long long)arg5 ;
-(id)initWithSettings:(id)arg1 strength:(double)arg2 string:(id)arg3 font:(id)arg4 ;
@end

