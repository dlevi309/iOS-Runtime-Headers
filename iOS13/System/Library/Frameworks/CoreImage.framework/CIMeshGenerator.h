/*
* Generated on Monday, March 1, 2021 at 2:30:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
*/

#import <CoreImage/CoreImage-Structs.h>
#import <CoreImage/CIFilter.h>

@class NSNumber, CIColor, NSArray;

@interface CIMeshGenerator : CIFilter {

	NSNumber* inputWidth;
	CIColor* inputColor;
	NSArray* inputMesh;

}

@property (nonatomic,retain) NSNumber * inputWidth; 
@property (nonatomic,retain) CIColor * inputColor; 
@property (nonatomic,retain) NSArray * inputMesh; 
+(id)customAttributes;
-(id)outputImage;
-(NSNumber *)inputWidth;
-(void)setInputWidth:(NSNumber *)arg1 ;
-(CIColor *)inputColor;
-(void)setInputColor:(CIColor *)arg1 ;
-(CGRect)extentOfMeshStart:(int)arg1 count:(int)arg2 halfWidth:(double)arg3 ;
-(id)_CIMesh32;
-(id)_CIMesh16;
-(id)_CIMesh8;
-(id)_CIMesh4;
-(id)_CIMesh2;
-(id)_CIMesh1;
-(NSArray *)inputMesh;
-(void)setInputMesh:(NSArray *)arg1 ;
@end

