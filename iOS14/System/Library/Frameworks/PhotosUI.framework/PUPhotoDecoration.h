/*
* Generated on Thursday, January 14, 2021 at 2:22:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

#import <PhotosUI/PhotosUI-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class UIColor;

@interface PUPhotoDecoration : NSObject <NSCopying> {

	UIColor* _borderColor;
	double _borderWidth;
	UIColor* _foregroundColor;

}

@property (nonatomic,copy) UIColor * borderColor;                  //@synthesize borderColor=_borderColor - In the implementation block
@property (assign,nonatomic) double borderWidth;                   //@synthesize borderWidth=_borderWidth - In the implementation block
@property (nonatomic,copy) UIColor * foregroundColor;              //@synthesize foregroundColor=_foregroundColor - In the implementation block
+(id)defaultDecoration;
-(id)photoDecorationVariantsWithIncreasingAlpha:(long long)arg1 ;
-(void)setForegroundColor:(UIColor *)arg1 ;
-(UIColor *)foregroundColor;
-(UIColor *)borderColor;
-(id)photoDecorationVariantsWithIncreasingBorderBrightness:(long long)arg1 ;
-(double)borderWidth;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setBorderColor:(UIColor *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setBorderWidth:(double)arg1 ;
@end

