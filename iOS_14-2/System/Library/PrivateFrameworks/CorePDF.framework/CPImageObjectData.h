/*
* Generated on Thursday, January 14, 2021 at 2:27:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
*/


#import <CorePDF/CorePDF-Structs.h>
@interface CPImageObjectData : NSObject {

	CGImageRef _image;
	CGRect _boundsOnPage;

}

@property (retain) CGImageRef image;                 //@synthesize image=_image - In the implementation block
@property (assign) CGRect boundsOnPage;              //@synthesize boundsOnPage=_boundsOnPage - In the implementation block
+(id)imageObjectDataWithCGImage:(CGImageRef)arg1 andBounds:(CGRect)arg2 ;
-(void)setImage:(CGImageRef)arg1 ;
-(CGImageRef)image;
-(void)dealloc;
-(id)initWithCGImage:(CGImageRef)arg1 andBoundsOnPage:(CGRect)arg2 ;
-(void)setBoundsOnPage:(CGRect)arg1 ;
-(CGRect)boundsOnPage;
@end

