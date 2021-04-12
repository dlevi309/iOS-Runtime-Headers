/*
* Generated on Monday, March 1, 2021 at 2:32:31 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
*/

#import <MapsSupport/MapsSupport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/SYObject.h>
#import <libobjc.A.dylib/SYChange.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, PBUnknownFields, MSPBookmarkStorage, MSPPinStorage, MSPHistoryEntryStorage;

@interface MSPCompanionSyncedItem : PBCodable <SYObject, SYChange, NSCopying> {

	PBUnknownFields* _unknownFields;
	MSPBookmarkStorage* _bookmark;
	int _changeType;
	MSPPinStorage* _pin;
	MSPHistoryEntryStorage* _searchRequest;
	NSString* _syncId;
	SCD_Struct_MS3 _has;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) long long syChangeType; 
@property (nonatomic,readonly) NSString * objectIdentifier; 
@property (nonatomic,readonly) NSString * sequencer; 
@property (nonatomic,readonly) long long changeType; 
@property (nonatomic,readonly) BOOL hasSyncId; 
@property (nonatomic,retain) NSString * syncId;                                   //@synthesize syncId=_syncId - In the implementation block
@property (assign,nonatomic) BOOL hasChangeType; 
@property (assign,nonatomic) int changeType;                                      //@synthesize changeType=_changeType - In the implementation block
@property (nonatomic,readonly) BOOL hasBookmark; 
@property (nonatomic,retain) MSPBookmarkStorage * bookmark;                       //@synthesize bookmark=_bookmark - In the implementation block
@property (nonatomic,readonly) BOOL hasPin; 
@property (nonatomic,retain) MSPPinStorage * pin;                                 //@synthesize pin=_pin - In the implementation block
@property (nonatomic,readonly) BOOL hasSearchRequest; 
@property (nonatomic,retain) MSPHistoryEntryStorage * searchRequest;              //@synthesize searchRequest=_searchRequest - In the implementation block
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(id)syncIdWithPrefix:(id)arg1 identifier:(id)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)changeType;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(MSPBookmarkStorage *)bookmark;
-(void)setBookmark:(MSPBookmarkStorage *)arg1 ;
-(void)setChangeType:(long long)arg1 ;
-(PBUnknownFields *)unknownFields;
-(NSString *)objectIdentifier;
-(void)setPin:(MSPPinStorage *)arg1 ;
-(MSPPinStorage *)pin;
-(void)setHasChangeType:(BOOL)arg1 ;
-(BOOL)hasChangeType;
-(id)changeTypeAsString:(int)arg1 ;
-(int)StringAsChangeType:(id)arg1 ;
-(void)setSyChangeType:(long long)arg1 ;
-(void)setSyncId:(NSString *)arg1 ;
-(void)setSearchRequest:(MSPHistoryEntryStorage *)arg1 ;
-(BOOL)hasSyncId;
-(BOOL)hasBookmark;
-(BOOL)hasPin;
-(BOOL)hasSearchRequest;
-(NSString *)syncId;
-(MSPHistoryEntryStorage *)searchRequest;
-(NSString *)sequencer;
-(long long)syChangeType;
@end

