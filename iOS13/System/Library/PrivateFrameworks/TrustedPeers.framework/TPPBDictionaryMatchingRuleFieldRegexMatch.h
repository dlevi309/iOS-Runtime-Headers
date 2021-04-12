/*
* Generated on Monday, March 1, 2021 at 2:33:22 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(NSString *)fieldName;
-(void)setFieldName:(NSString *)arg1 ;
-(BOOL)hasFieldName;
-(NSString *)regex;
-(BOOL)hasRegex;
-(void)setRegex:(NSString *)arg1 ;
-(BOOL)matches:(id)arg1 error:(id*)arg2 ;
@end

