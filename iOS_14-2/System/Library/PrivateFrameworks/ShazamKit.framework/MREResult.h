/*
* Generated on Thursday, January 14, 2021 at 2:24:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ShazamKit.framework/ShazamKit
*/


@class NSNumber;

@interface MREResult : NSObject {

	unsigned long long _trackID;
	double _offset;
	NSNumber* _timeSkew;
	NSNumber* _freqSkew;
	NSNumber* _score;

}

@property (nonatomic,readonly) unsigned long long trackID;              //@synthesize trackID=_trackID - In the implementation block
@property (nonatomic,readonly) double offset;                           //@synthesize offset=_offset - In the implementation block
@property (nonatomic,retain,readonly) NSNumber * timeSkew;              //@synthesize timeSkew=_timeSkew - In the implementation block
@property (nonatomic,retain,readonly) NSNumber * freqSkew;              //@synthesize freqSkew=_freqSkew - In the implementation block
@property (nonatomic,retain,readonly) NSNumber * score;                 //@synthesize score=_score - In the implementation block
-(NSNumber *)score;
-(unsigned long long)trackID;
-(double)offset;
-(NSNumber *)timeSkew;
-(NSNumber *)freqSkew;
-(void)dealloc;
-(id)initWithTrackId:(unsigned long long)arg1 offset:(double)arg2 timeSkew:(id)arg3 freqSkew:(id)arg4 score:(id)arg5 ;
@end

