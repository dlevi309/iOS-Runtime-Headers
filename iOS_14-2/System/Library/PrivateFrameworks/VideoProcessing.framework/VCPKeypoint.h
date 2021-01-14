/*
* Generated on Thursday, January 14, 2021 at 2:23:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
*/


#import <VideoProcessing/VideoProcessing-Structs.h>
@interface VCPKeypoint : NSObject {

	float _confidence;
	CGPoint _location;

}

@property (assign,nonatomic) CGPoint location;              //@synthesize location=_location - In the implementation block
@property (assign,nonatomic) float confidence;              //@synthesize confidence=_confidence - In the implementation block
-(float)confidence;
-(CGPoint)location;
-(void)setLocation:(CGPoint)arg1 ;
-(void)setConfidence:(float)arg1 ;
@end

