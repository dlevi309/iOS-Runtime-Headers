/*
* Generated on Thursday, January 14, 2021 at 2:25:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/HDSyncCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSMutableArray;

@interface HDCodableCategoryDomainDictionary : PBCodable <HDSyncCodable, NSCopying> {

	long long _category;
	NSString* _domain;
	NSMutableArray* _keyValuePairs;
	SCD_Struct_HD7 _has;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) BOOL hasCategory; 
@property (assign,nonatomic) long long category;                          //@synthesize category=_category - In the implementation block
@property (nonatomic,readonly) BOOL hasDomain; 
@property (nonatomic,retain) NSString * domain;                           //@synthesize domain=_domain - In the implementation block
@property (nonatomic,retain) NSMutableArray * keyValuePairs;              //@synthesize keyValuePairs=_keyValuePairs - In the implementation block
+(Class)keyValuePairsType;
-(id)dictionaryRepresentation;
-(void)setCategory:(long long)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(id)keyValuePairsAtIndex:(unsigned long long)arg1 ;
-(long long)category;
-(void)setDomain:(NSString *)arg1 ;
-(void)addKeyValuePairs:(id)arg1 ;
-(void)setHasCategory:(BOOL)arg1 ;
-(NSString *)domain;
-(NSString *)description;
-(BOOL)hasDomain;
-(BOOL)hasCategory;
-(void)clearKeyValuePairs;
-(NSMutableArray *)keyValuePairs;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(unsigned long long)keyValuePairsCount;
-(void)setKeyValuePairs:(NSMutableArray *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithCategory:(long long)arg1 domain:(id)arg2 ;
-(long long)decodedCategory;
-(BOOL)_validateForInsertionWithError:(id*)arg1 ;
@end

