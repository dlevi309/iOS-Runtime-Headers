/*
* Generated on Monday, March 1, 2021 at 2:30:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)clearDirtyProperties;
-(NSString *)credentialType;
-(void)setCredentialType:(NSString *)arg1 ;
-(NSMutableArray *)dirtyProperties;
-(void)setDirtyProperties:(NSMutableArray *)arg1 ;
-(NSMutableArray *)credentialItems;
-(BOOL)requiresTouchID;
-(void)setRequiresTouchID:(BOOL)arg1 ;
-(void)setCredentialItems:(NSMutableArray *)arg1 ;
-(void)addDirtyProperties:(id)arg1 ;
-(unsigned long long)dirtyPropertiesCount;
-(id)dirtyPropertiesAtIndex:(unsigned long long)arg1 ;
-(void)clearCredentialItems;
-(void)addCredentialItems:(id)arg1 ;
-(unsigned long long)credentialItemsCount;
-(void)setCredentialItemsDictionary:(NSDictionary *)arg1 ;
-(NSDictionary *)credentialItemsDictionary;
-(id)credentialItemsAtIndex:(unsigned long long)arg1 ;
@end

