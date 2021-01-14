/*
* Generated on Thursday, January 14, 2021 at 2:21:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
*/

#import <CoreImage/CoreImage-Structs.h>
#import <CoreImage/CIDetector.h>

@class CIContext, NSMutableDictionary, FKTextDetector;

@interface CITextDetector : CIDetector {

	CIContext* context;
	double _width;
	double _height;
	NSMutableDictionary* featureOptions;
	FKTextDetector* textDetector;

}

@property (nonatomic,retain) CIContext * context; 
-(void)finalize;
-(id)adjustedImageFromImage:(id)arg1 orientation:(int)arg2 inverseCTM:(CGAffineTransform*)arg3 ;
-(CGAffineTransform)ctmForImageWithBounds:(CGRect)arg1 orientation:(int)arg2 ;
-(CIContext *)context;
-(id)featuresInImage:(id)arg1 options:(id)arg2 ;
-(id)initWithContext:(id)arg1 options:(id)arg2 ;
-(id)featuresInImage:(id)arg1 ;
-(void)dealloc;
-(void)setContext:(CIContext *)arg1 ;
@end

