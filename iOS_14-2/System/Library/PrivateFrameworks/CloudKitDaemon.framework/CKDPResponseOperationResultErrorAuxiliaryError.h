/*
* Generated on Thursday, January 14, 2021 at 2:26:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
*/

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSMutableArray;

@interface CKDPResponseOperationResultErrorAuxiliaryError : PBCodable <NSCopying> {

	int _code;
	NSString* _domain;
	NSMutableArray* _userInfos;
	SCD_Struct_CK1 _has;

}

@property (nonatomic,readonly) BOOL hasDomain; 
@property (nonatomic,retain) NSString * domain;                       //@synthesize domain=_domain - In the implementation block
@property (assign,nonatomic) BOOL hasCode; 
@property (assign,nonatomic) int code;                                //@synthesize code=_code - In the implementation block
@property (nonatomic,retain) NSMutableArray * userInfos;              //@synthesize userInfos=_userInfos - In the implementation block
+(Class)userInfoType;
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(void)setDomain:(NSString *)arg1 ;
-(NSString *)domain;
-(void)setCode:(int)arg1 ;
-(void)addUserInfo:(id)arg1 ;
-(NSMutableArray *)userInfos;
-(id)userInfoAtIndex:(unsigned long long)arg1 ;
-(void)setUserInfos:(NSMutableArray *)arg1 ;
-(id)description;
-(BOOL)hasDomain;
-(BOOL)hasCode;
-(void)setHasCode:(BOOL)arg1 ;
-(unsigned long long)hash;
-(int)code;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)userInfosCount;
-(void)clearUserInfos;
@end

