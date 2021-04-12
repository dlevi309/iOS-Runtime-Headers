/*
* Generated on Monday, March 1, 2021 at 2:32:49 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(NSString *)recordName;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)setRecordName:(NSString *)arg1 ;
-(NSString *)recordZoneName;
-(NTPBDate *)lastDirtyDate;
-(void)setLastDirtyDate:(NTPBDate *)arg1 ;
-(void)setRecordZoneName:(NSString *)arg1 ;
-(NTPBDate *)lastCleanDate;
-(void)setLastCleanDate:(NTPBDate *)arg1 ;
-(BOOL)hasRecordName;
-(BOOL)hasRecordZoneName;
-(BOOL)hasLastCleanDate;
-(BOOL)hasLastDirtyDate;
@end

