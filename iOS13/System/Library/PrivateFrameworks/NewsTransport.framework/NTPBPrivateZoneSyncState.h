/*
* Generated on Monday, March 1, 2021 at 2:32:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(NSString *)zoneName;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)setZoneName:(NSString *)arg1 ;
-(BOOL)hasZoneName;
-(NSData *)changeToken;
-(void)setChangeToken:(NSData *)arg1 ;
-(NTPBDate *)lastDirtyDate;
-(void)setLastDirtyDate:(NTPBDate *)arg1 ;
-(NTPBDate *)lastCleanDate;
-(void)setLastCleanDate:(NTPBDate *)arg1 ;
-(BOOL)hasLastCleanDate;
-(BOOL)hasLastDirtyDate;
-(BOOL)hasChangeToken;
@end

