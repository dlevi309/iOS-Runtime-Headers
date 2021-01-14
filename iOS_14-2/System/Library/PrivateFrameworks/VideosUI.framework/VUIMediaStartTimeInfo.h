/*
* Generated on Thursday, January 14, 2021 at 2:24:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/


@class NSNumber, NSDate, NSString;

@interface VUIMediaStartTimeInfo : NSObject {

	NSNumber* _startTime;
	NSDate* _timestamp;
	long long _type;
	NSString* _source;

}

@property (nonatomic,retain) NSNumber * startTime;              //@synthesize startTime=_startTime - In the implementation block
@property (nonatomic,retain) NSDate * timestamp;                //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) long long type;                    //@synthesize type=_type - In the implementation block
@property (nonatomic,retain) NSString * source;                 //@synthesize source=_source - In the implementation block
-(NSDate *)timestamp;
-(void)setStartTime:(NSNumber *)arg1 ;
-(void)setType:(long long)arg1 ;
-(void)setSource:(NSString *)arg1 ;
-(id)description;
-(long long)type;
-(void)setTimestamp:(NSDate *)arg1 ;
-(NSNumber *)startTime;
-(NSString *)source;
-(id)initWithStartTime:(id)arg1 timestamp:(id)arg2 type:(long long)arg3 source:(id)arg4 ;
@end

