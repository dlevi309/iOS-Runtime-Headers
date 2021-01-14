/*
* Generated on Thursday, January 14, 2021 at 2:23:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
*/


#import <Vision/Vision-Structs.h>
@interface SaliencyExtrema : NSObject {

	CGPoint _extrema[4];
	float _extremeValues[4];

}
-(id)init;
-(void)updateExtrema:(float)arg1 x:(int)arg2 y:(int)arg3 ;
-(CGRect)computeRectFromExtremaUsingThreshold:(float)arg1 vImage:(vImage_Buffer*)arg2 ;
@end

