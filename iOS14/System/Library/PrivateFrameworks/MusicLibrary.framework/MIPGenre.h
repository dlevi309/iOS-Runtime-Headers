/*
* Generated on Thursday, January 14, 2021 at 2:24:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
*/

#import <MusicLibrary/MusicLibrary-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface MIPGenre : PBCodable <NSCopying> {

	long long _persistentId;
	long long _storeId;
	NSString* _name;
	SCD_Struct_MI1 _has;

}

@property (assign,nonatomic) BOOL hasStoreId; 
@property (assign,nonatomic) long long storeId;                   //@synthesize storeId=_storeId - In the implementation block
@property (nonatomic,readonly) BOOL hasName; 
@property (nonatomic,retain) NSString * name;                     //@synthesize name=_name - In the implementation block
@property (assign,nonatomic) BOOL hasPersistentId; 
@property (assign,nonatomic) long long persistentId;              //@synthesize persistentId=_persistentId - In the implementation block
-(id)dictionaryRepresentation;
-(BOOL)hasName;
-(long long)storeId;
-(BOOL)hasStoreId;
-(void)mergeFrom:(id)arg1 ;
-(void)setStoreId:(long long)arg1 ;
-(NSString *)name;
-(id)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(long long)persistentId;
-(BOOL)hasPersistentId;
-(void)setHasStoreId:(BOOL)arg1 ;
-(void)setPersistentId:(long long)arg1 ;
-(void)setHasPersistentId:(BOOL)arg1 ;
@end

