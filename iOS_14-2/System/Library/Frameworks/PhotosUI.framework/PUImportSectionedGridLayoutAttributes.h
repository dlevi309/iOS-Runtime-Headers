/*
* Generated on Thursday, January 14, 2021 at 2:22:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

#import <PhotosUI/PhotosUI-Structs.h>
#import <PhotosUI/PUSectionedGridLayoutAttributes.h>

@class UIColor;

@interface PUImportSectionedGridLayoutAttributes : PUSectionedGridLayoutAttributes {

	UIColor* _backgroundColor;
	double _strokeWidth;
	UIColor* _bottomStrokeColor;

}

@property (nonatomic,retain) UIColor * backgroundColor;                //@synthesize backgroundColor=_backgroundColor - In the implementation block
@property (assign,nonatomic) double strokeWidth;                       //@synthesize strokeWidth=_strokeWidth - In the implementation block
@property (nonatomic,retain) UIColor * bottomStrokeColor;              //@synthesize bottomStrokeColor=_bottomStrokeColor - In the implementation block
-(void)setBackgroundColor:(UIColor *)arg1 ;
-(UIColor *)backgroundColor;
-(double)strokeWidth;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setStrokeWidth:(double)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setBottomStrokeColor:(UIColor *)arg1 ;
-(UIColor *)bottomStrokeColor;
@end

