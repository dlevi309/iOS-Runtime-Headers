/*
* Generated on Monday, March 1, 2021 at 2:31:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(CGImageRef)image;
-(void)setImage:(CGImageRef)arg1 ;
-(id)initWithCGImage:(CGImageRef)arg1 andBoundsOnPage:(CGRect)arg2 ;
-(void)setBoundsOnPage:(CGRect)arg1 ;
-(CGRect)boundsOnPage;
@end

