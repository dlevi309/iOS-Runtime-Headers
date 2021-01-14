/*
* Generated on Thursday, January 14, 2021 at 2:21:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSNumber *)inputAcuteAngle;
-(vec2)_roiCenter;
-(id)_singlePixelImage;
-(void)setInputAcuteAngle:(NSNumber *)arg1 ;
-(double)_roiArea;
-(CGRect)_roiRect;
-(id)outputImage;
@end

