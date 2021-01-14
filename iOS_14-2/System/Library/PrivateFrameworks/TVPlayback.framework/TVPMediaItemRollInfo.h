/*
* Generated on Thursday, January 14, 2021 at 2:28:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TVPlayback.framework/TVPlayback
*/


@class NSNumber;

@interface TVPMediaItemRollInfo : NSObject {

	BOOL _skippable;
	unsigned long long _type;
	double _start;
	double _duration;
	NSNumber* _adamID;

}

@property (nonatomic,readonly) unsigned long long type;                      //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) double start;                                 //@synthesize start=_start - In the implementation block
@property (nonatomic,readonly) double duration;                              //@synthesize duration=_duration - In the implementation block
@property (nonatomic,retain) NSNumber * adamID;                              //@synthesize adamID=_adamID - In the implementation block
@property (assign,getter=isSkippable,nonatomic) BOOL skippable;              //@synthesize skippable=_skippable - In the implementation block
-(id)_typeDescription;
-(double)start;
-(id)description;
-(void)setAdamID:(NSNumber *)arg1 ;
-(BOOL)isSkippable;
-(NSNumber *)adamID;
-(unsigned long long)type;
-(double)duration;
-(void)setSkippable:(BOOL)arg1 ;
-(id)initWithType:(unsigned long long)arg1 start:(double)arg2 duration:(double)arg3 ;
@end

