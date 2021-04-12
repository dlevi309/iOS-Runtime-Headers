/*
* Generated on Monday, March 1, 2021 at 2:32:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
*/

#import <iTunesCloud/iTunesCloud-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface ICCloudContentTastePBFuseItemPreference : PBCodable <NSCopying> {

	long long _adamId;
	long long _createdOffsetMillis;
	NSString* _externalId;
	int _preference;
	int _preferenceType;
	SCD_Struct_IC15 _has;

}

@property (assign,nonatomic) int preference;                             //@synthesize preference=_preference - In the implementation block
@property (assign,nonatomic) BOOL hasAdamId; 
@property (assign,nonatomic) long long adamId;                           //@synthesize adamId=_adamId - In the implementation block
@property (nonatomic,readonly) BOOL hasExternalId; 
@property (nonatomic,retain) NSString * externalId;                      //@synthesize externalId=_externalId - In the implementation block
@property (assign,nonatomic) BOOL hasCreatedOffsetMillis; 
@property (assign,nonatomic) long long createdOffsetMillis;              //@synthesize createdOffsetMillis=_createdOffsetMillis - In the implementation block
@property (assign,nonatomic) BOOL hasPreferenceType; 
@property (assign,nonatomic) int preferenceType;                         //@synthesize preferenceType=_preferenceType - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(long long)adamId;
-(void)setAdamId:(long long)arg1 ;
-(BOOL)hasAdamId;
-(int)preference;
-(NSString *)externalId;
-(void)setExternalId:(NSString *)arg1 ;
-(void)setHasAdamId:(BOOL)arg1 ;
-(BOOL)hasExternalId;
-(void)setCreatedOffsetMillis:(long long)arg1 ;
-(void)setHasCreatedOffsetMillis:(BOOL)arg1 ;
-(BOOL)hasCreatedOffsetMillis;
-(int)preferenceType;
-(void)setPreferenceType:(int)arg1 ;
-(void)setHasPreferenceType:(BOOL)arg1 ;
-(BOOL)hasPreferenceType;
-(void)setPreference:(int)arg1 ;
-(long long)createdOffsetMillis;
@end

