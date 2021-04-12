/*
* Generated on Thursday, January 14, 2021 at 2:27:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

