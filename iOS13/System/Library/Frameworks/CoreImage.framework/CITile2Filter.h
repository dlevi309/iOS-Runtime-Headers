/*
* Generated on Monday, March 1, 2021 at 2:30:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
*/

#import <CoreImage/CoreImage-Structs.h>
#import <CoreImage/CITileFilter.h>

@class NSNumber;

@interface CITile2Filter : CITileFilter {

	NSNumber* inputAcuteAngle;

}

@property (nonatomic,retain) NSNumber * inputAcuteAngle; 
+(id)customAttributes;
-(id)outputImage;
-(NSNumber *)inputAcuteAngle;
-(double)_roiArea;
-(vec2)_roiCenter;
-(id)_singlePixelImage;
-(CGRect)_roiRect;
-(void)setInputAcuteAngle:(NSNumber *)arg1 ;
@end

