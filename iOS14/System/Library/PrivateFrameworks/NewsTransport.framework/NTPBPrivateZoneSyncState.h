/*
* Generated on Thursday, January 14, 2021 at 2:23:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
*/

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData, NTPBDate, NSString;

@interface NTPBPrivateZoneSyncState : PBCodable <NSCopying> {

	NSData* _changeToken;
	NTPBDate* _lastCleanDate;
	NTPBDate* _lastDirtyDate;
	NSString* _zoneName;

}

@property (nonatomic,readonly) BOOL hasZoneName; 
@property (nonatomic,retain) NSString * zoneName;                   //@synthesize zoneName=_zoneName - In the implementation block
@property (nonatomic,readonly) BOOL hasChangeToken; 
@property (nonatomic,retain) NSData * changeToken;                  //@synthesize changeToken=_changeToken - In the implementation block
@property (nonatomic,readonly) BOOL hasLastCleanDate; 
@property (nonatomic,retain) NTPBDate * lastCleanDate;              //@synthesize lastCleanDate=_lastCleanDate - In the implementation block
@property (nonatomic,readonly) BOOL hasLastDirtyDate; 
@property (nonatomic,retain) NTPBDate * lastDirtyDate;              //@synthesize lastDirtyDate=_lastDirtyDate - In the implementation block
-(id)dictionaryRepresentation;
-(NTPBDate *)lastDirtyDate;
-(BOOL)hasChangeToken;
-(NSString *)zoneName;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)hasLastCleanDate;
-(BOOL)hasLastDirtyDate;
-(id)description;
-(BOOL)hasZoneName;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(NSData *)changeToken;
-(void)setChangeToken:(NSData *)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setLastDirtyDate:(NTPBDate *)arg1 ;
-(NTPBDate *)lastCleanDate;
-(void)setZoneName:(NSString *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setLastCleanDate:(NTPBDate *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
@end

