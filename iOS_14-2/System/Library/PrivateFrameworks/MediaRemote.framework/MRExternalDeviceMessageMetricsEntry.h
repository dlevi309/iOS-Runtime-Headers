/*
* Generated on Thursday, January 14, 2021 at 2:21:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
*/


@class NSMutableArray;

@interface MRExternalDeviceMessageMetricsEntry : NSObject {

	unsigned long long _avg;
	unsigned long long _min;
	unsigned long long _max;
	unsigned long long _total;
	NSMutableArray* _values;

}

@property (assign,nonatomic) unsigned long long avg;                //@synthesize avg=_avg - In the implementation block
@property (assign,nonatomic) unsigned long long min;                //@synthesize min=_min - In the implementation block
@property (assign,nonatomic) unsigned long long max;                //@synthesize max=_max - In the implementation block
@property (assign,nonatomic) unsigned long long total;              //@synthesize total=_total - In the implementation block
@property (nonatomic,retain) NSMutableArray * values;               //@synthesize values=_values - In the implementation block
-(unsigned long long)avg;
-(void)setTotal:(unsigned long long)arg1 ;
-(id)init;
-(void)setMin:(unsigned long long)arg1 ;
-(NSMutableArray *)values;
-(void)updateWithValue:(unsigned long long)arg1 ;
-(void)setAvg:(unsigned long long)arg1 ;
-(unsigned long long)total;
-(unsigned long long)min;
-(void)setValues:(NSMutableArray *)arg1 ;
-(id)description;
-(unsigned long long)max;
-(void)setMax:(unsigned long long)arg1 ;
@end

