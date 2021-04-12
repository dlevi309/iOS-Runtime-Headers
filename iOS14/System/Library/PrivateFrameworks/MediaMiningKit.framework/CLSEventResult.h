/*
* Generated on Thursday, January 14, 2021 at 2:26:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(float)confidence;
-(id)description;
-(void)setConfidence:(float)arg1 ;
-(CLSEvent *)event;
-(void)setEvent:(CLSEvent *)arg1 ;
-(BOOL)isSameEventAsResult:(id)arg1 ;
-(void)mergeWithResult:(id)arg1 ;
@end

