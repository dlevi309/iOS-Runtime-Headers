/*
* Generated on Monday, March 1, 2021 at 2:33:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeAI.framework/HomeAI
*/

#import <HomeAI/HomeAI-Structs.h>
#import <HMFoundation/HMFObject.h>

@interface HMIMotionDetection : HMFObject {

	CGRect _boundingBox;

}

@property (readonly) CGRect boundingBox;              //@synthesize boundingBox=_boundingBox - In the implementation block
-(CGRect)boundingBox;
-(id)initWithBoundingBox:(CGRect)arg1 ;
-(BOOL)applyEventTypeAndCheckIfSubBoundingIsStatic:(CGRect)arg1 forMetric:(long long)arg2 eventType:(long long)arg3 confidence:(float)arg4 ;
@end

