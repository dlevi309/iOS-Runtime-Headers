/*
* Generated on Thursday, January 14, 2021 at 2:26:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TrustedPeers.framework/TrustedPeers
*/

#import <TrustedPeers/TrustedPeers-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface TPPBDictionaryMatchingRuleFieldRegexMatch : PBCodable <NSCopying> {

	NSString* _fieldName;
	NSString* _regex;

}

@property (nonatomic,readonly) BOOL hasFieldName; 
@property (nonatomic,retain) NSString * fieldName;              //@synthesize fieldName=_fieldName - In the implementation block
@property (nonatomic,readonly) BOOL hasRegex; 
@property (nonatomic,retain) NSString * regex;                  //@synthesize regex=_regex - In the implementation block
-(id)dictionaryRepresentation;
-(NSString *)regex;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(NSString *)fieldName;
-(unsigned long long)hash;
-(BOOL)hasFieldName;
-(BOOL)readFrom:(id)arg1 ;
-(void)setRegex:(NSString *)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setFieldName:(NSString *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)hasRegex;
-(BOOL)matches:(id)arg1 error:(id*)arg2 ;
@end

