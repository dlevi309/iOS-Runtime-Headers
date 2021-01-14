/*
* Generated on Thursday, January 14, 2021 at 2:26:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ARKitCore.framework/ARKitCore
*/

#import <ARKitCore/ARResultData.h>

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

