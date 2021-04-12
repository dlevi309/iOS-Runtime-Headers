/*
* Generated on Monday, March 1, 2021 at 2:34:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreThemeDefinition.framework/CoreThemeDefinition
*/


#import <CoreThemeDefinition/CoreThemeDefinition-Structs.h>
@interface TDImageColorHistogram : NSObject {

	histogram_ARGB_t _histogram;
	vImage_Buffer* _imageBuffer;
	vImage_CGImageFormat* _imageFormat;
	BOOL _isMonochrome;

}

@property (readonly) BOOL isMonochrome; 
-(id)initWithCGImage:(CGImageRef)arg1 ;
-(BOOL)isMonochrome;
-(double)intersection:(id)arg1 ;
@end

