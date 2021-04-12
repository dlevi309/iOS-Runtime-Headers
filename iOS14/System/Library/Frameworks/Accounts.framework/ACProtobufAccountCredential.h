/*
* Generated on Thursday, January 14, 2021 at 2:20:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Accounts.framework/Accounts
*/

#import <Accounts/Accounts-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, NSString, NSDictionary;

@interface ACProtobufAccountCredential : PBCodable <NSCopying> {

	NSMutableArray* _credentialItems;
	NSString* _credentialType;
	NSMutableArray* _dirtyProperties;
	BOOL _requiresTouchID;

}

@property (nonatomic,copy) NSDictionary * credentialItemsDictionary; 
@property (nonatomic,retain) NSMutableArray * credentialItems;                    //@synthesize credentialItems=_credentialItems - In the implementation block
@property (nonatomic,retain) NSString * credentialType;                           //@synthesize credentialType=_credentialType - In the implementation block
@property (nonatomic,retain) NSMutableArray * dirtyProperties;                    //@synthesize dirtyProperties=_dirtyProperties - In the implementation block
@property (assign,nonatomic) BOOL requiresTouchID;                                //@synthesize requiresTouchID=_requiresTouchID - In the implementation block
+(Class)dirtyPropertiesType;
+(Class)credentialItemsType;
-(id)dictionaryRepresentation;
-(void)clearDirtyProperties;
-(BOOL)requiresTouchID;
-(NSMutableArray *)dirtyProperties;
-(void)mergeFrom:(id)arg1 ;
-(void)setCredentialType:(NSString *)arg1 ;
-(void)setCredentialItemsDictionary:(NSDictionary *)arg1 ;
-(NSDictionary *)credentialItemsDictionary;
-(unsigned long long)dirtyPropertiesCount;
-(void)clearCredentialItems;
-(unsigned long long)credentialItemsCount;
-(NSMutableArray *)credentialItems;
-(void)setDirtyProperties:(NSMutableArray *)arg1 ;
-(void)setCredentialItems:(NSMutableArray *)arg1 ;
-(id)description;
-(void)addDirtyProperties:(id)arg1 ;
-(void)addCredentialItems:(id)arg1 ;
-(id)dirtyPropertiesAtIndex:(unsigned long long)arg1 ;
-(id)credentialItemsAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(NSString *)credentialType;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setRequiresTouchID:(BOOL)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

