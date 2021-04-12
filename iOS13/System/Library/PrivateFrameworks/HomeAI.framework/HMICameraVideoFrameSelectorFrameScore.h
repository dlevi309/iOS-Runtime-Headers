/*
* Generated on Monday, March 1, 2021 at 2:33:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeAI.framework/HomeAI
*/

#import <HMFoundation/HMFObject.h>

@class HMICameraVideoFrame;

@interface HMICameraVideoFrameSelectorFrameScore : HMFObject {

	float _score;
	HMICameraVideoFrame* _frame;

}

@property (readonly) HMICameraVideoFrame * frame;              //@synthesize frame=_frame - In the implementation block
@property (readonly) float score;                              //@synthesize score=_score - In the implementation block
-(id)description;
-(float)score;
-(HMICameraVideoFrame *)frame;
-(id)initWithFrame:(id)arg1 score:(float)arg2 ;
@end

