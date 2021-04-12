/*
* Generated on Thursday, January 14, 2021 at 2:27:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(float)score;
-(HMICameraVideoFrame *)frame;
-(id)description;
-(id)initWithFrame:(id)arg1 score:(float)arg2 ;
@end

