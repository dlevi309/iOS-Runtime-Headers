/*
* Generated on Monday, March 1, 2021 at 2:30:38 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned)sequenceNumber;
-(GEOSessionID)sessionID;
-(double)sessionRelativeTimestamp;
-(void)updateWithSessionEntityString:(id)arg1 ;
-(double)sessionCreationTime;
-(id)initWithSessionID:(GEOSessionID)arg1 sessionCreationTime:(double)arg2 sequenceNumber:(unsigned)arg3 ;
-(void)setSessionCreationTime:(double)arg1 ;
-(id)initWithSessionEntityString:(id)arg1 ;
-(double)sessionRelativeTimestampForEventTime:(double)arg1 ;
-(NSString *)sessionIDString;
-(NSString *)sessionIDHighString;
-(NSString *)sessionIDLowString;
-(BOOL)_isValidSessionIDHighOrLowString:(id)arg1 ;
-(NSString *)sessionEntityString;
-(NSString *)sessionUUIDString;
-(NSNumber *)sessionIDLow;
-(NSNumber *)sessionIDHigh;
-(void)updateSessionIDFromUUIDString:(id)arg1 ;
@end

