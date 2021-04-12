/*
* Generated on Monday, March 1, 2021 at 2:35:48 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/CoreAccessories/PlugIns/Features/NowPlaying-iOS.feature/NowPlaying-iOS
*/


@class NSString, NSDate;

@interface ACCStatInfoAccumulator : NSObject {

	NSString* _name;
	NSDate* _startTime;
	NSDate* _lastUpdateTime;
	unsigned long long _start;
	unsigned long long _max;
	unsigned long long _last;
	unsigned long long _accum;
	unsigned long long _count;
	unsigned long long _average;

}

@property (nonatomic,readonly) NSString * name;                         //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) NSDate * startTime;                      //@synthesize startTime=_startTime - In the implementation block
@property (nonatomic,readonly) NSDate * lastUpdateTime;                 //@synthesize lastUpdateTime=_lastUpdateTime - In the implementation block
@property (nonatomic,readonly) unsigned long long start;                //@synthesize start=_start - In the implementation block
@property (nonatomic,readonly) unsigned long long max;                  //@synthesize max=_max - In the implementation block
@property (nonatomic,readonly) unsigned long long last;                 //@synthesize last=_last - In the implementation block
@property (nonatomic,readonly) unsigned long long accum;                //@synthesize accum=_accum - In the implementation block
@property (nonatomic,readonly) unsigned long long count;                //@synthesize count=_count - In the implementation block
@property (nonatomic,readonly) unsigned long long average;              //@synthesize average=_average - In the implementation block
-(id)init;
-(id)description;
-(NSString *)name;
-(unsigned long long)count;
-(id)initWithName:(id)arg1 ;
-(unsigned long long)start;
-(void)reset;
-(unsigned long long)max;
-(NSDate *)startTime;
-(NSDate *)lastUpdateTime;
-(unsigned long long)last;
-(void)add:(unsigned long long)arg1 ;
-(unsigned long long)average;
-(void)set:(id)arg1 ;
-(double)timeIntervalSinceLastUpdate;
-(unsigned long long)accum;
-(id)initWithName:(id)arg1 initValue:(unsigned long long)arg2 ;
-(double)timeIntervalSinceStart;
@end

