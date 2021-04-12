/*
* Generated on Thursday, January 14, 2021 at 2:27:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/NanoTimeKit/ComplicationBundles/NanoCompassComplications.bundle/NanoCompassComplications
*/


@class NSDate, NSError, NSNumber;

@interface NCAltitude : NSObject {

	double _rawAltitude;
	double _rawAccuracy;
	double _rawPrecision;
	BOOL _displayTildeForApp;
	BOOL _displayTildeForComplication;
	BOOL _hasAltitudeReading;
	double _altitude;
	long long _type;
	double _accuracy;
	NSDate* _timestamp;
	NSDate* _reportedTimestamp;
	NSError* _error;
	NSNumber* _absoluteAltitudeAccuracy;
	NSNumber* _absoluteAltitudePrecision;
	long long _statusInfo;

}

@property (assign,nonatomic) double altitude;                                   //@synthesize altitude=_altitude - In the implementation block
@property (assign,nonatomic) long long type;                                    //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) double accuracy;                                   //@synthesize accuracy=_accuracy - In the implementation block
@property (nonatomic,retain) NSDate * timestamp;                                //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,retain) NSDate * reportedTimestamp;                        //@synthesize reportedTimestamp=_reportedTimestamp - In the implementation block
@property (nonatomic,retain) NSError * error;                                   //@synthesize error=_error - In the implementation block
@property (assign,nonatomic) BOOL hasAltitudeReading;                           //@synthesize hasAltitudeReading=_hasAltitudeReading - In the implementation block
@property (nonatomic,retain) NSNumber * absoluteAltitudeAccuracy;               //@synthesize absoluteAltitudeAccuracy=_absoluteAltitudeAccuracy - In the implementation block
@property (nonatomic,retain) NSNumber * absoluteAltitudePrecision;              //@synthesize absoluteAltitudePrecision=_absoluteAltitudePrecision - In the implementation block
@property (assign,nonatomic) BOOL displayTildeForApp;                           //@synthesize displayTildeForApp=_displayTildeForApp - In the implementation block
@property (assign,nonatomic) BOOL displayTildeForComplication;                  //@synthesize displayTildeForComplication=_displayTildeForComplication - In the implementation block
@property (assign,nonatomic) long long statusInfo;                              //@synthesize statusInfo=_statusInfo - In the implementation block
@property (nonatomic,readonly) BOOL hasReading; 
+(id)altitudeWithLocation:(id)arg1 error:(id)arg2 ;
+(id)initAltitude:(id)arg1 ;
+(id)idealizedAltitude;
+(id)randomizedAltitude;
-(void)setAltitude:(double)arg1 ;
-(double)altitude;
-(NSDate *)timestamp;
-(void)setAccuracy:(double)arg1 ;
-(void)setType:(long long)arg1 ;
-(void)setError:(NSError *)arg1 ;
-(NSError *)error;
-(NSNumber *)absoluteAltitudeAccuracy;
-(NSNumber *)absoluteAltitudePrecision;
-(id)description;
-(long long)type;
-(double)accuracy;
-(void)setTimestamp:(NSDate *)arg1 ;
-(id)initWithAbsoluteAltitude:(id)arg1 ;
-(void)setReportedTimestamp:(NSDate *)arg1 ;
-(void)setStatusInfo:(long long)arg1 ;
-(void)_populateRoundedValue;
-(void)setHasAltitudeReading:(BOOL)arg1 ;
-(id)initWithLocation:(id)arg1 error:(id)arg2 ;
-(BOOL)hasAcceptibleAccuracy;
-(void)setDisplayTildeForApp:(BOOL)arg1 ;
-(void)setDisplayTildeForComplication:(BOOL)arg1 ;
-(double)_convertMeterInFeet:(double)arg1 ;
-(double)_getRoundedPrecisionWithValue:(double)arg1 multiplier:(double)arg2 ;
-(void)setAbsoluteAltitudePrecision:(NSNumber *)arg1 ;
-(double)_getRoundedValue:(double)arg1 byRoundedPrecision:(double)arg2 ;
-(double)_getRoundedAccuracy:(double)arg1 byUnit:(BOOL)arg2 ;
-(void)setAbsoluteAltitudeAccuracy:(NSNumber *)arg1 ;
-(long long)statusInfo;
-(double)_getCloserValue:(double)arg1 low:(double)arg2 high:(double)arg3 ;
-(BOOL)hasReading;
-(BOOL)isBetterThan:(id)arg1 ;
-(NSDate *)reportedTimestamp;
-(BOOL)displayTildeForApp;
-(BOOL)displayTildeForComplication;
-(BOOL)hasAltitudeReading;
@end

