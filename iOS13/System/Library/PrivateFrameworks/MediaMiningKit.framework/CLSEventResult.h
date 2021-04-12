/*
* Generated on Monday, March 1, 2021 at 2:34:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MediaMiningKit.framework/MediaMiningKit
*/


@class CLSEvent;

@interface CLSEventResult : NSObject {

	float _confidence;
	CLSEvent* _event;

}

@property (nonatomic,retain) CLSEvent * event;              //@synthesize event=_event - In the implementation block
@property (assign,nonatomic) float confidence;              //@synthesize confidence=_confidence - In the implementation block
+(id)eventResultWithEvent:(id)arg1 andConfidence:(float)arg2 ;
-(id)description;
-(float)confidence;
-(CLSEvent *)event;
-(void)setEvent:(CLSEvent *)arg1 ;
-(void)setConfidence:(float)arg1 ;
-(BOOL)isSameEventAsResult:(id)arg1 ;
-(void)mergeWithResult:(id)arg1 ;
@end

