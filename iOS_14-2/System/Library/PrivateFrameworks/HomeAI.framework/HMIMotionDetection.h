/*
* Generated on Thursday, January 14, 2021 at 2:27:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

