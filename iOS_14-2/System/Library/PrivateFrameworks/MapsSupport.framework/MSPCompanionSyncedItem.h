/*
* Generated on Thursday, January 14, 2021 at 2:24:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)dictionaryRepresentation;
-(MSPPinStorage *)pin;
-(void)setBookmark:(MSPBookmarkStorage *)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)setChangeType:(long long)arg1 ;
-(MSPBookmarkStorage *)bookmark;
-(long long)changeType;
-(BOOL)hasChangeType;
-(BOOL)hasPin;
-(NSString *)syncId;
-(void)mergeFrom:(id)arg1 ;
-(void)setPin:(MSPPinStorage *)arg1 ;
-(id)changeTypeAsString:(int)arg1 ;
-(NSString *)description;
-(int)StringAsChangeType:(id)arg1 ;
-(BOOL)hasBookmark;
-(NSString *)sequencer;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(NSString *)objectIdentifier;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setHasChangeType:(BOOL)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setSyChangeType:(long long)arg1 ;
-(void)setSyncId:(NSString *)arg1 ;
-(void)setSearchRequest:(MSPHistoryEntryStorage *)arg1 ;
-(BOOL)hasSyncId;
-(BOOL)hasSearchRequest;
-(MSPHistoryEntryStorage *)searchRequest;
-(long long)syChangeType;
@end

