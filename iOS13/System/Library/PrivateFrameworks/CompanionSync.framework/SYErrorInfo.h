/*
* Generated on Monday, March 1, 2021 at 2:32:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)domain;
-(int)code;
-(NSData *)userInfo;
-(id)dictionaryRepresentation;
-(void)setUserInfo:(NSData *)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setDomain:(NSString *)arg1 ;
-(id)initWithError:(id)arg1 ;
-(BOOL)hasUserInfo;
-(void)setCode:(int)arg1 ;
-(id)_usefulDescription;
@end

