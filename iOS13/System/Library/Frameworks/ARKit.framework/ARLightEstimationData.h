/*
* Generated on Monday, March 1, 2021 at 2:32:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/ARKit.framework/ARKit
*/

#import <ARKit/ARResultData.h>

@class ARLightEstimate, NSString;

@interface ARLightEstimationData : NSObject <ARResultData> {

	ARLightEstimate* _lightEstimate;

}

@property (nonatomic,retain) ARLightEstimate * lightEstimate;              //@synthesize lightEstimate=_lightEstimate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(double)timestamp;
-(ARLightEstimate *)lightEstimate;
-(void)setLightEstimate:(ARLightEstimate *)arg1 ;
@end

