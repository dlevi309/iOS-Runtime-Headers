/*
* Generated on Monday, March 1, 2021 at 2:34:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)domain;
-(long long)category;
-(void)setCategory:(long long)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setDomain:(NSString *)arg1 ;
-(BOOL)hasDomain;
-(BOOL)hasCategory;
-(void)setHasCategory:(BOOL)arg1 ;
-(NSMutableArray *)keyValuePairs;
-(void)setKeyValuePairs:(NSMutableArray *)arg1 ;
-(void)addKeyValuePairs:(id)arg1 ;
-(unsigned long long)keyValuePairsCount;
-(void)clearKeyValuePairs;
-(id)keyValuePairsAtIndex:(unsigned long long)arg1 ;
-(id)initWithCategory:(long long)arg1 domain:(id)arg2 ;
-(long long)decodedCategory;
-(BOOL)_validateForInsertionWithError:(id*)arg1 ;
@end

