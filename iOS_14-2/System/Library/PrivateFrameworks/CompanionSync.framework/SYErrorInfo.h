/*
* Generated on Thursday, January 14, 2021 at 2:24:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
*/

#import <CompanionSync/CompanionSync-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSData;

@interface SYErrorInfo : PBCodable <NSCopying> {

	int _code;
	NSString* _domain;
	NSData* _userInfo;

}

@property (nonatomic,retain) NSString * domain;               //@synthesize domain=_domain - In the implementation block
@property (assign,nonatomic) int code;                        //@synthesize code=_code - In the implementation block
@property (nonatomic,readonly) BOOL hasUserInfo; 
@property (nonatomic,retain) NSData * userInfo;               //@synthesize userInfo=_userInfo - In the implementation block
+(void)initialize;
-(id)dictionaryRepresentation;
-(void)setUserInfo:(NSData *)arg1 ;
-(id)initWithError:(id)arg1 ;
-(NSData *)userInfo;
-(void)mergeFrom:(id)arg1 ;
-(void)setDomain:(NSString *)arg1 ;
-(BOOL)hasUserInfo;
-(NSString *)domain;
-(void)setCode:(int)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(int)code;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)_usefulDescription;
@end

