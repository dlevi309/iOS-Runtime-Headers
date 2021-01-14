/*
* Generated on Thursday, January 14, 2021 at 2:28:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
*/

#import <NanoPassKit/NanoPassKit-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSMutableArray;

@interface NPKProtoStandaloneError : PBCodable <NSCopying> {

	long long _code;
	NSString* _domain;
	NSMutableArray* _userInfos;

}

@property (nonatomic,readonly) BOOL hasDomain; 
@property (nonatomic,retain) NSString * domain;                       //@synthesize domain=_domain - In the implementation block
@property (assign,nonatomic) long long code;                          //@synthesize code=_code - In the implementation block
@property (nonatomic,retain) NSMutableArray * userInfos;              //@synthesize userInfos=_userInfos - In the implementation block
+(Class)userInfosType;
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(void)setDomain:(NSString *)arg1 ;
-(NSString *)domain;
-(void)setCode:(long long)arg1 ;
-(NSMutableArray *)userInfos;
-(void)setUserInfos:(NSMutableArray *)arg1 ;
-(id)description;
-(BOOL)hasDomain;
-(unsigned long long)hash;
-(long long)code;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)userInfosCount;
-(void)clearUserInfos;
-(void)addUserInfos:(id)arg1 ;
-(id)userInfosAtIndex:(unsigned long long)arg1 ;
@end

