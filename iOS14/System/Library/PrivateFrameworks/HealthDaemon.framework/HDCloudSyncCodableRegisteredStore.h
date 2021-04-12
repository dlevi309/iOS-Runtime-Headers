/*
* Generated on Thursday, January 14, 2021 at 2:25:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface HDCloudSyncCodableRegisteredStore : PBCodable <NSCopying> {

	NSString* _ownerIdentifier;
	NSString* _storeIdentifier;

}

@property (nonatomic,readonly) BOOL hasOwnerIdentifier; 
@property (nonatomic,retain) NSString * ownerIdentifier;              //@synthesize ownerIdentifier=_ownerIdentifier - In the implementation block
@property (nonatomic,readonly) BOOL hasStoreIdentifier; 
@property (nonatomic,retain) NSString * storeIdentifier;              //@synthesize storeIdentifier=_storeIdentifier - In the implementation block
-(id)dictionaryRepresentation;
-(void)setOwnerIdentifier:(NSString *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(void)setStoreIdentifier:(NSString *)arg1 ;
-(NSString *)ownerIdentifier;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)hasOwnerIdentifier;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)storeIdentifier;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)hasStoreIdentifier;
@end

