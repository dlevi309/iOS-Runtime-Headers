/*
* Generated on Monday, March 1, 2021 at 2:32:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(id)description;
-(void)setValues:(NSMutableArray *)arg1 ;
-(NSMutableArray *)values;
-(void)setMax:(unsigned long long)arg1 ;
-(unsigned long long)max;
-(void)setMin:(unsigned long long)arg1 ;
-(unsigned long long)min;
-(unsigned long long)total;
-(void)updateWithValue:(unsigned long long)arg1 ;
-(unsigned long long)avg;
-(void)setAvg:(unsigned long long)arg1 ;
-(void)setTotal:(unsigned long long)arg1 ;
@end

