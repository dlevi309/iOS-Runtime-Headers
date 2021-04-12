/*
* Generated on Monday, March 1, 2021 at 2:33:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
*/

#import <AVConference/VCObject.h>

@interface VCVideoQualityInfo : VCObject {

	BOOL _videoIsExpected;
	BOOL _isVideoQualityDegraded;
	double _lastGoodVideoQualityTime;
	double _lastBadVideoQualityTime;
	double _lastVideoQualityDegradedSwitchTime;
	double _firstDegradedMeasure;
	double _videoDegradedThreshold;

}

@property (nonatomic,readonly) BOOL isVideoQualityDegraded;              //@synthesize isVideoQualityDegraded=_isVideoQualityDegraded - In the implementation block
@property (assign,nonatomic) BOOL videoIsExpected;                       //@synthesize videoIsExpected=_videoIsExpected - In the implementation block
-(id)init;
-(void)dealloc;
-(void)setVideoIsExpected:(BOOL)arg1 ;
-(BOOL)videoIsExpected;
-(BOOL)updateWithCurrentFramerate:(double)arg1 bitrate:(double)arg2 time:(double)arg3 ;
-(BOOL)isVideoQualityDegraded;
-(void)resetLastGoodVideoQualityTime:(double)arg1 ;
@end

