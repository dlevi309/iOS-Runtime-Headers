/*
* Generated on Monday, March 1, 2021 at 2:30:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
*/

#import <Vision/ShotflowDetector.h>

@interface ShotflowDetectorANFDv2 : ShotflowDetector
+(id)filterThresholds;
+(Class)shotflowNetworkClass;
-(id)initWithNetwork:(id)arg1 filterThreshold:(id)arg2 ;
-(id)initWithNetwork:(id)arg1 ;
-(id)nmsBoxes:(id)arg1 ;
-(id)processBoxes:(id)arg1 withHeight:(float)arg2 andWidth:(float)arg3 ;
-(id)mergeHeadsBoxes:(id)arg1 ;
@end

