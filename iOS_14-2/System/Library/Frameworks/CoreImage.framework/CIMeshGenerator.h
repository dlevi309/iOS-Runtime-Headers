/*
* Generated on Thursday, January 14, 2021 at 2:21:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(CIColor *)inputColor;
-(NSNumber *)inputWidth;
-(void)setInputWidth:(NSNumber *)arg1 ;
-(void)setInputColor:(CIColor *)arg1 ;
-(id)_CIMesh8;
-(id)_CIMesh4;
-(id)_CIMesh2;
-(id)_CIMesh1;
-(id)outputImage;
-(id)_CIMesh32;
-(id)_CIMesh16;
-(NSArray *)inputMesh;
-(CGRect)extentOfMeshStart:(int)arg1 count:(int)arg2 halfWidth:(double)arg3 ;
-(void)setInputMesh:(NSArray *)arg1 ;
@end

