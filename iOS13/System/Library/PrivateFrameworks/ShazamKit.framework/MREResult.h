/*
* Generated on Monday, March 1, 2021 at 2:35:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ShazamKit.framework/ShazamKit
*/


@class NSNumber;

@interface MREResult : NSObject {

	unsigned long long _trackID;
	double _offset;
	NSNumber* _timeSkew;
	NSNumber* _freqSkew;

}

@property (nonatomic,readonly) unsigned long long trackID;              //@synthesize trackID=_trackID - In the implementation block
@property (nonatomic,readonly) double offset;                           //@synthesize offset=_offset - In the implementation block
@property (nonatomic,retain,readonly) NSNumber * timeSkew;              //@synthesize timeSkew=_timeSkew - In the implementation block
@property (nonatomic,retain,readonly) NSNumber * freqSkew;              //@synthesize freqSkew=_freqSkew - In the implementation block
-(void)dealloc;
-(unsigned long long)trackID;
-(double)offset;
-(NSNumber *)timeSkew;
-(NSNumber *)freqSkew;
-(id)initWithTrackId:(unsigned long long)arg1 offset:(double)arg2 timeSkew:(id)arg3 freqSkew:(id)arg4 ;
@end

