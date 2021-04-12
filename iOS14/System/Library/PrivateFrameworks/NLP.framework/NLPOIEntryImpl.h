/*
* Generated on Thursday, January 14, 2021 at 2:23:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NLP.framework/NLP
*/

#import <NLP/NLP-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface NLPOIEntryImpl : PBCodable <NSCopying> {

	NSString* _category;
	NSString* _domain;
	NSString* _name;
	float _score;
	SCD_Struct_NL1 _has;

}

@property (nonatomic,readonly) BOOL hasName; 
@property (nonatomic,retain) NSString * name;                  //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) BOOL hasDomain; 
@property (nonatomic,retain) NSString * domain;                //@synthesize domain=_domain - In the implementation block
@property (nonatomic,readonly) BOOL hasCategory; 
@property (nonatomic,retain) NSString * category;              //@synthesize category=_category - In the implementation block
@property (assign,nonatomic) BOOL hasScore; 
@property (assign,nonatomic) float score;                      //@synthesize score=_score - In the implementation block
-(id)dictionaryRepresentation;
-(BOOL)hasScore;
-(void)setHasScore:(BOOL)arg1 ;
-(void)setCategory:(NSString *)arg1 ;
-(BOOL)hasName;
-(float)score;
-(void)setScore:(float)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(NSString *)category;
-(void)setDomain:(NSString *)arg1 ;
-(NSString *)domain;
-(NSString *)name;
-(id)description;
-(BOOL)hasDomain;
-(BOOL)hasCategory;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
@end

