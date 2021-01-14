/*
* Generated on Thursday, January 14, 2021 at 2:27:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/NanoTimeKit/ComplicationBundles/NanoCompassComplications.bundle/NanoCompassComplications
*/


@interface NCHeading : NSObject {

	BOOL _hasReading;
	double _heading;
	double _accuracy;
	double _timestamp;

}

@property (assign,nonatomic) double heading;                 //@synthesize heading=_heading - In the implementation block
@property (assign,nonatomic) double accuracy;                //@synthesize accuracy=_accuracy - In the implementation block
@property (assign,nonatomic) double timestamp;               //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasReading;                //@synthesize hasReading=_hasReading - In the implementation block
@property (nonatomic,readonly) BOOL isAccurate; 
+(id)idealizedHeading;
+(id)randomizedHeading;
+(id)newHeading:(id)arg1 ;
-(double)heading;
-(double)timestamp;
-(BOOL)isAccurate;
-(void)setAccuracy:(double)arg1 ;
-(double)accuracy;
-(void)setHeading:(double)arg1 ;
-(void)setTimestamp:(double)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)hasReading;
-(void)setHasReading:(BOOL)arg1 ;
-(BOOL)updateHasSignificantChange:(id)arg1 ;
@end

