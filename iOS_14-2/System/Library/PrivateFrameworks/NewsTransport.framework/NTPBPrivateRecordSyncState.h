/*
* Generated on Thursday, January 14, 2021 at 2:23:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
*/

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NTPBDate, NSString;

@interface NTPBPrivateRecordSyncState : PBCodable <NSCopying> {

	NTPBDate* _lastCleanDate;
	NTPBDate* _lastDirtyDate;
	NSString* _recordName;
	NSString* _recordZoneName;

}

@property (nonatomic,readonly) BOOL hasRecordName; 
@property (nonatomic,retain) NSString * recordName;                  //@synthesize recordName=_recordName - In the implementation block
@property (nonatomic,readonly) BOOL hasRecordZoneName; 
@property (nonatomic,retain) NSString * recordZoneName;              //@synthesize recordZoneName=_recordZoneName - In the implementation block
@property (nonatomic,readonly) BOOL hasLastCleanDate; 
@property (nonatomic,retain) NTPBDate * lastCleanDate;               //@synthesize lastCleanDate=_lastCleanDate - In the implementation block
@property (nonatomic,readonly) BOOL hasLastDirtyDate; 
@property (nonatomic,retain) NTPBDate * lastDirtyDate;               //@synthesize lastDirtyDate=_lastDirtyDate - In the implementation block
-(id)dictionaryRepresentation;
-(NTPBDate *)lastDirtyDate;
-(NSString *)recordZoneName;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)hasRecordName;
-(BOOL)hasRecordZoneName;
-(BOOL)hasLastCleanDate;
-(BOOL)hasLastDirtyDate;
-(id)description;
-(void)setRecordName:(NSString *)arg1 ;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setLastDirtyDate:(NTPBDate *)arg1 ;
-(NTPBDate *)lastCleanDate;
-(NSString *)recordName;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setRecordZoneName:(NSString *)arg1 ;
-(void)setLastCleanDate:(NTPBDate *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
@end

