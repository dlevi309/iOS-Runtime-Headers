/*
* Generated on Thursday, January 14, 2021 at 2:23:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/FileProvider.framework/FileProvider
*/

#import <FileProvider/FileProvider-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface FPSearchableItemError : PBCodable <NSCopying> {

	long long _code;
	NSString* _customDomain;
	int _domain;

}

@property (assign,nonatomic) int domain;                           //@synthesize domain=_domain - In the implementation block
@property (assign,nonatomic) long long code;                       //@synthesize code=_code - In the implementation block
@property (nonatomic,readonly) BOOL hasCustomDomain; 
@property (nonatomic,retain) NSString * customDomain;              //@synthesize customDomain=_customDomain - In the implementation block
+(id)stringFromError:(id)arg1 ;
+(id)errorFromString:(id)arg1 ;
-(id)dictionaryRepresentation;
-(id)domainAsString:(int)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setDomain:(int)arg1 ;
-(int)domain;
-(void)setCode:(long long)arg1 ;
-(id)description;
-(void)setCustomDomain:(NSString *)arg1 ;
-(NSString *)customDomain;
-(unsigned long long)hash;
-(long long)code;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)hasCustomDomain;
-(int)StringAsDomain:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

