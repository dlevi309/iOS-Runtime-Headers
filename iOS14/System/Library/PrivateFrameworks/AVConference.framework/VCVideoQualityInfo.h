/*
* Generated on Thursday, January 14, 2021 at 2:25:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
*/

#import <AVConference/VCObject.h>

@interface VCVideoQualityInfo : VCObject {

	BOOL _videoIsExpected;
	BOOL _isVideoQualityDegraded;
	double _firstDegradedMeasure;
	double _videoDegradedThreshold;
	unsigned long long _idsParticipantID;

}

@property (nonatomic,readonly) BOOL isVideoQualityDegraded;              //@synthesize isVideoQualityDegraded=_isVideoQualityDegraded - In the implementation block
@property (assign,nonatomic) BOOL videoIsExpected;                       //@synthesize videoIsExpected=_videoIsExpected - In the implementation block
-(void)dealloc;
-(id)initWithParticipantID:(unsigned long long)arg1 ;
-(void)setVideoIsExpected:(BOOL)arg1 ;
-(BOOL)videoIsExpected;
-(BOOL)updateWithLastDecodedFrameTime:(double)arg1 time:(double)arg2 ;
-(BOOL)isVideoQualityDegraded;
@end

