/*
* Generated on Thursday, January 14, 2021 at 2:27:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/NanoTimeKit/ComplicationBundles/NanoCompassComplications.bundle/NanoCompassComplications
*/


#import <NanoCompassComplications/NanoCompassComplications-Structs.h>
@class NSDate, NSError;

@interface NCLocation : NSObject {

	double _accuracy;
	NSDate* _timestamp;
	NSDate* _reportedTimestamp;
	NSError* _error;
	CLLocationCoordinate2D _coordinate;

}

@property (assign,nonatomic) CLLocationCoordinate2D coordinate;              //@synthesize coordinate=_coordinate - In the implementation block
@property (assign,nonatomic) double accuracy;                                //@synthesize accuracy=_accuracy - In the implementation block
@property (nonatomic,retain) NSDate * timestamp;                             //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,retain) NSDate * reportedTimestamp;                     //@synthesize reportedTimestamp=_reportedTimestamp - In the implementation block
@property (nonatomic,retain) NSError * error;                                //@synthesize error=_error - In the implementation block
@property (nonatomic,readonly) BOOL hasReading; 
+(id)idealizedLocation;
+(id)locationWithLocation:(id)arg1 error:(id)arg2 ;
+(id)randomizedLocation;
-(CLLocationCoordinate2D)coordinate;
-(NSDate *)timestamp;
-(void)setAccuracy:(double)arg1 ;
-(void)setError:(NSError *)arg1 ;
-(NSError *)error;
-(id)description;
-(void)setCoordinate:(CLLocationCoordinate2D)arg1 ;
-(double)accuracy;
-(void)setTimestamp:(NSDate *)arg1 ;
-(void)setReportedTimestamp:(NSDate *)arg1 ;
-(id)initWithLocation:(id)arg1 error:(id)arg2 ;
-(BOOL)hasAcceptibleAccuracy;
-(BOOL)hasReading;
-(BOOL)isBetterThan:(id)arg1 ;
-(NSDate *)reportedTimestamp;
@end

