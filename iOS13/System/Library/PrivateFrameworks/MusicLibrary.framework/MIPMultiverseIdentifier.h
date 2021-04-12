/*
* Generated on Monday, March 1, 2021 at 2:32:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
*/

#import <MusicLibrary/MusicLibrary-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSMutableArray;

@interface MIPMultiverseIdentifier : PBCodable <NSCopying> {

	long long _accountId;
	long long _purchaseHistoryId;
	long long _sagaId;
	long long _storeId;
	NSString* _cloudUniversalLibraryId;
	NSMutableArray* _libraryIdentifiers;
	int _mediaObjectType;
	int _mediaType;
	NSString* _name;
	SCD_Struct_MI15 _has;

}

@property (assign,nonatomic) BOOL hasMediaObjectType; 
@property (assign,nonatomic) int mediaObjectType;                              //@synthesize mediaObjectType=_mediaObjectType - In the implementation block
@property (assign,nonatomic) BOOL hasMediaType; 
@property (assign,nonatomic) int mediaType;                                    //@synthesize mediaType=_mediaType - In the implementation block
@property (nonatomic,readonly) BOOL hasName; 
@property (nonatomic,retain) NSString * name;                                  //@synthesize name=_name - In the implementation block
@property (assign,nonatomic) BOOL hasAccountId; 
@property (assign,nonatomic) long long accountId;                              //@synthesize accountId=_accountId - In the implementation block
@property (assign,nonatomic) BOOL hasStoreId; 
@property (assign,nonatomic) long long storeId;                                //@synthesize storeId=_storeId - In the implementation block
@property (assign,nonatomic) BOOL hasSagaId; 
@property (assign,nonatomic) long long sagaId;                                 //@synthesize sagaId=_sagaId - In the implementation block
@property (assign,nonatomic) BOOL hasPurchaseHistoryId; 
@property (assign,nonatomic) long long purchaseHistoryId;                      //@synthesize purchaseHistoryId=_purchaseHistoryId - In the implementation block
@property (nonatomic,readonly) BOOL hasCloudUniversalLibraryId; 
@property (nonatomic,retain) NSString * cloudUniversalLibraryId;               //@synthesize cloudUniversalLibraryId=_cloudUniversalLibraryId - In the implementation block
@property (nonatomic,retain) NSMutableArray * libraryIdentifiers;              //@synthesize libraryIdentifiers=_libraryIdentifiers - In the implementation block
+(Class)libraryIdentifiersType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSString *)name;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(int)mediaType;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)hasName;
-(void)setMediaType:(int)arg1 ;
-(void)setStoreId:(long long)arg1 ;
-(long long)storeId;
-(id)mediaTypeAsString:(int)arg1 ;
-(int)StringAsMediaType:(id)arg1 ;
-(BOOL)hasMediaType;
-(void)setHasMediaType:(BOOL)arg1 ;
-(BOOL)hasStoreId;
-(NSString *)cloudUniversalLibraryId;
-(BOOL)hasCloudUniversalLibraryId;
-(long long)sagaId;
-(BOOL)hasSagaId;
-(unsigned long long)libraryIdentifiersCount;
-(NSMutableArray *)libraryIdentifiers;
-(int)mediaObjectType;
-(long long)accountId;
-(void)setAccountId:(long long)arg1 ;
-(void)setLibraryIdentifiers:(NSMutableArray *)arg1 ;
-(long long)purchaseHistoryId;
-(BOOL)hasPurchaseHistoryId;
-(BOOL)hasAccountId;
-(void)setHasStoreId:(BOOL)arg1 ;
-(void)setCloudUniversalLibraryId:(NSString *)arg1 ;
-(void)addLibraryIdentifiers:(id)arg1 ;
-(void)clearLibraryIdentifiers;
-(id)libraryIdentifiersAtIndex:(unsigned long long)arg1 ;
-(void)setMediaObjectType:(int)arg1 ;
-(void)setHasMediaObjectType:(BOOL)arg1 ;
-(BOOL)hasMediaObjectType;
-(id)mediaObjectTypeAsString:(int)arg1 ;
-(int)StringAsMediaObjectType:(id)arg1 ;
-(void)setHasAccountId:(BOOL)arg1 ;
-(void)setSagaId:(long long)arg1 ;
-(void)setHasSagaId:(BOOL)arg1 ;
-(void)setPurchaseHistoryId:(long long)arg1 ;
-(void)setHasPurchaseHistoryId:(BOOL)arg1 ;
@end

