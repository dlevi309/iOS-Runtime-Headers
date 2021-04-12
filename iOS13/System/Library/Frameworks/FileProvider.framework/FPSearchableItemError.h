/*
* Generated on Monday, March 1, 2021 at 2:32:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(int)domain;
-(long long)code;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setDomain:(int)arg1 ;
-(void)setCode:(long long)arg1 ;
-(void)setCustomDomain:(NSString *)arg1 ;
-(id)domainAsString:(int)arg1 ;
-(int)StringAsDomain:(id)arg1 ;
-(BOOL)hasCustomDomain;
-(NSString *)customDomain;
@end

