/*
* Generated on Thursday, January 14, 2021 at 2:28:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)dictionaryRepresentation;
-(void)setItemID:(unsigned long long)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setSessionIdentifier:(int)arg1 ;
-(int)sessionIdentifier;
-(id)description;
-(unsigned long long)itemID;
-(unsigned long long)hash;
-(BOOL)hasSessionIdentifier;
-(BOOL)readFrom:(id)arg1 ;
-(void)setDatabaseID:(unsigned long long)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(unsigned long long)databaseID;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setHasSessionIdentifier:(BOOL)arg1 ;
-(void)setHasItemID:(BOOL)arg1 ;
-(BOOL)hasItemID;
-(void)setHasDatabaseID:(BOOL)arg1 ;
-(BOOL)hasDatabaseID;
@end

