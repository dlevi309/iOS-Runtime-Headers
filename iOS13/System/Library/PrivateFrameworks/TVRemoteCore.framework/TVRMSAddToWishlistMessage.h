/*
* Generated on Monday, March 1, 2021 at 2:35:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TVRemoteCore.framework/TVRemoteCore
*/

#import <TVRemoteCore/TVRemoteCore-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface TVRMSAddToWishlistMessage : PBCodable <NSCopying> {

	unsigned long long _databaseID;
	unsigned long long _itemID;
	int _sessionIdentifier;
	SCD_Struct_TV1 _has;

}

@property (assign,nonatomic) BOOL hasItemID; 
@property (assign,nonatomic) unsigned long long itemID;                  //@synthesize itemID=_itemID - In the implementation block
@property (assign,nonatomic) BOOL hasDatabaseID; 
@property (assign,nonatomic) unsigned long long databaseID;              //@synthesize databaseID=_databaseID - In the implementation block
@property (assign,nonatomic) BOOL hasSessionIdentifier; 
@property (assign,nonatomic) int sessionIdentifier;                      //@synthesize sessionIdentifier=_sessionIdentifier - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(unsigned long long)itemID;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setItemID:(unsigned long long)arg1 ;
-(BOOL)hasItemID;
-(int)sessionIdentifier;
-(void)setSessionIdentifier:(int)arg1 ;
-(unsigned long long)databaseID;
-(void)setDatabaseID:(unsigned long long)arg1 ;
-(BOOL)hasSessionIdentifier;
-(void)setHasSessionIdentifier:(BOOL)arg1 ;
-(void)setHasItemID:(BOOL)arg1 ;
-(void)setHasDatabaseID:(BOOL)arg1 ;
-(BOOL)hasDatabaseID;
@end

