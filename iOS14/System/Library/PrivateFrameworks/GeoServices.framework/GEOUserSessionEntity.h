/*
* Generated on Thursday, January 14, 2021 at 2:21:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSNumber;

@interface GEOUserSessionEntity : NSObject <NSCopying> {

	GEOSessionID _sessionID;
	unsigned _sequenceNumber;
	double _sessionCreationTime;
	double _sessionRelativeTimestamp;

}

@property (nonatomic,readonly) GEOSessionID sessionID;                       //@synthesize sessionID=_sessionID - In the implementation block
@property (nonatomic,readonly) unsigned sequenceNumber;                      //@synthesize sequenceNumber=_sequenceNumber - In the implementation block
@property (assign,nonatomic) double sessionCreationTime;                     //@synthesize sessionCreationTime=_sessionCreationTime - In the implementation block
@property (nonatomic,readonly) double sessionRelativeTimestamp;              //@synthesize sessionRelativeTimestamp=_sessionRelativeTimestamp - In the implementation block
@property (nonatomic,readonly) NSString * sessionEntityString; 
@property (nonatomic,readonly) NSString * sessionIDString; 
@property (nonatomic,readonly) NSString * sessionUUIDString; 
@property (nonatomic,readonly) NSNumber * sessionIDLow; 
@property (nonatomic,readonly) NSNumber * sessionIDHigh; 
@property (nonatomic,readonly) NSString * sessionIDLowString; 
@property (nonatomic,readonly) NSString * sessionIDHighString; 
-(GEOSessionID)sessionID;
-(id)initWithSessionID:(GEOSessionID)arg1 sessionCreationTime:(double)arg2 sequenceNumber:(unsigned)arg3 ;
-(NSString *)sessionIDHighString;
-(void)updateSessionIDFromUUIDString:(id)arg1 ;
-(id)initWithSessionEntityString:(id)arg1 ;
-(NSString *)sessionIDString;
-(unsigned)sequenceNumber;
-(NSString *)sessionUUIDString;
-(BOOL)_isValidSessionIDHighOrLowString:(id)arg1 ;
-(double)sessionRelativeTimestamp;
-(NSString *)sessionIDLowString;
-(id)description;
-(double)sessionRelativeTimestampForEventTime:(double)arg1 ;
-(double)sessionCreationTime;
-(void)updateWithSessionEntityString:(id)arg1 ;
-(NSString *)sessionEntityString;
-(NSNumber *)sessionIDLow;
-(void)setSessionCreationTime:(double)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSNumber *)sessionIDHigh;
@end

