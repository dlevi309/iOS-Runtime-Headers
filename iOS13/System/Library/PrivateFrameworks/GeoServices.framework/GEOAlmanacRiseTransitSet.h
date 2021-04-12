/*
* Generated on Monday, March 1, 2021 at 2:30:38 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/


#import <GeoServices/GeoServices-Structs.h>
@class GEOCelestialRiseTransitSet, NSDate;

@interface GEOAlmanacRiseTransitSet : NSObject {

	GEOCelestialRiseTransitSet* _celestialRiseTransitSet;
	unsigned long long _firstEventType;
	unsigned long long _lastEventType;

}

@property (nonatomic,readonly) NSDate * rise; 
@property (nonatomic,readonly) NSDate * transit; 
@property (nonatomic,readonly) NSDate * set; 
@property (nonatomic,readonly) CAARiseTransitSetDetails riseTransitSet; 
@property (nonatomic,readonly) unsigned long long firstEventType; 
@property (nonatomic,readonly) unsigned long long lastEventType; 
@property (nonatomic,readonly) NSDate * firstEventDate; 
@property (nonatomic,readonly) NSDate * lastEventDate; 
-(id)description;
-(NSDate *)set;
-(NSDate *)rise;
-(NSDate *)transit;
-(CAARiseTransitSetDetails)riseTransitSet;
-(void)_calculateFirstAndLastEvents;
-(unsigned long long)firstEventType;
-(unsigned long long)lastEventType;
-(NSDate *)firstEventDate;
-(NSDate *)lastEventDate;
-(id)initWith:(id)arg1 ;
-(long long)compareToDate:(id)arg1 ;
-(BOOL)isCompatibleWith:(id)arg1 ;
@end

