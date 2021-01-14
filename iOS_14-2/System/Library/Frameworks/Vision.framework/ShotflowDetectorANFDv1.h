/*
* Generated on Thursday, January 14, 2021 at 2:23:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
*/

#import <Vision/ShotflowDetector.h>

@interface ShotflowDetectorANFDv1 : ShotflowDetector
+(id)supportedLabelKeys;
+(id)filterThresholds;
+(Class)shotflowNetworkClass;
-(id)initWithNetwork:(id)arg1 ;
-(id)nmsBoxes:(id)arg1 ;
-(id)initWithNetwork:(id)arg1 filterThreshold:(id)arg2 ;
-(id)processBoxes:(id)arg1 withHeight:(float)arg2 andWidth:(float)arg3 ;
@end

