/*
* Generated on Thursday, January 14, 2021 at 2:20:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Accounts.framework/Accounts
*/

#import <Accounts/Accounts-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSMutableArray, ACProtobufDate, ACProtobufURL;

@interface ACProtobufCredentialItem : PBCodable <NSCopying> {

	NSString* _accountIdentifier;
	NSMutableArray* _dirtyProperties;
	ACProtobufDate* _expirationDate;
	ACProtobufURL* _objectID;
	NSString* _serviceName;
	BOOL _isPersistent;
	SCD_Struct_AC4 _has;

}

@property (nonatomic,retain) NSString * accountIdentifier;                  //@synthesize accountIdentifier=_accountIdentifier - In the implementation block
@property (nonatomic,readonly) BOOL hasExpirationDate; 
@property (nonatomic,retain) ACProtobufDate * expirationDate;               //@synthesize expirationDate=_expirationDate - In the implementation block
@property (nonatomic,retain) NSString * serviceName;                        //@synthesize serviceName=_serviceName - In the implementation block
@property (assign,nonatomic) BOOL hasIsPersistent; 
@property (assign,nonatomic) BOOL isPersistent;                             //@synthesize isPersistent=_isPersistent - In the implementation block
@property (nonatomic,readonly) BOOL hasObjectID; 
@property (nonatomic,retain) ACProtobufURL * objectID;                      //@synthesize objectID=_objectID - In the implementation block
@property (nonatomic,retain) NSMutableArray * dirtyProperties;              //@synthesize dirtyProperties=_dirtyProperties - In the implementation block
+(Class)dirtyPropertiesType;
-(id)dictionaryRepresentation;
-(BOOL)isPersistent;
-(void)setExpirationDate:(ACProtobufDate *)arg1 ;
-(void)clearDirtyProperties;
-(BOOL)hasExpirationDate;
-(BOOL)hasObjectID;
-(NSMutableArray *)dirtyProperties;
-(NSString *)accountIdentifier;
-(void)mergeFrom:(id)arg1 ;
-(unsigned long long)dirtyPropertiesCount;
-(BOOL)hasIsPersistent;
-(ACProtobufURL *)objectID;
-(void)setObjectID:(ACProtobufURL *)arg1 ;
-(void)setIsPersistent:(BOOL)arg1 ;
-(void)setDirtyProperties:(NSMutableArray *)arg1 ;
-(id)description;
-(void)addDirtyProperties:(id)arg1 ;
-(void)setHasIsPersistent:(BOOL)arg1 ;
-(void)setAccountIdentifier:(NSString *)arg1 ;
-(id)dirtyPropertiesAtIndex:(unsigned long long)arg1 ;
-(ACProtobufDate *)expirationDate;
-(NSString *)serviceName;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setServiceName:(NSString *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

