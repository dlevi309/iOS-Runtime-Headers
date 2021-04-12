/*
* Generated on Monday, March 1, 2021 at 2:30:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
	SCD_Struct_AC6 _has;

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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(ACProtobufDate *)expirationDate;
-(void)setExpirationDate:(ACProtobufDate *)arg1 ;
-(NSString *)serviceName;
-(ACProtobufURL *)objectID;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(NSString *)accountIdentifier;
-(void)setServiceName:(NSString *)arg1 ;
-(void)setObjectID:(ACProtobufURL *)arg1 ;
-(void)clearDirtyProperties;
-(BOOL)hasObjectID;
-(NSMutableArray *)dirtyProperties;
-(void)setDirtyProperties:(NSMutableArray *)arg1 ;
-(void)addDirtyProperties:(id)arg1 ;
-(unsigned long long)dirtyPropertiesCount;
-(id)dirtyPropertiesAtIndex:(unsigned long long)arg1 ;
-(void)setAccountIdentifier:(NSString *)arg1 ;
-(BOOL)hasExpirationDate;
-(void)setIsPersistent:(BOOL)arg1 ;
-(void)setHasIsPersistent:(BOOL)arg1 ;
-(BOOL)hasIsPersistent;
-(BOOL)isPersistent;
@end

