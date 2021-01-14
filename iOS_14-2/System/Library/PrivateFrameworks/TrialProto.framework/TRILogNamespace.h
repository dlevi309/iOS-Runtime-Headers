/*
* Generated on Thursday, January 14, 2021 at 2:25:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TrialProto.framework/TrialProto
*/

#import <TrialProto/TrialProto-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData, NSString;

@interface TRILogNamespace : PBCodable <NSCopying> {

	NSData* _hashData;
	NSString* _latestRolloutId;
	NSString* _name;
	unsigned _rolloutCount;
	BOOL _hashIncludesDefaults;
	SCD_Struct_TR1 _has;

}

@property (nonatomic,readonly) BOOL hasName; 
@property (nonatomic,retain) NSString * name;                           //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) BOOL hasHashData; 
@property (nonatomic,retain) NSData * hashData;                         //@synthesize hashData=_hashData - In the implementation block
@property (assign,nonatomic) BOOL hasHashIncludesDefaults; 
@property (assign,nonatomic) BOOL hashIncludesDefaults;                 //@synthesize hashIncludesDefaults=_hashIncludesDefaults - In the implementation block
@property (nonatomic,readonly) BOOL hasLatestRolloutId; 
@property (nonatomic,retain) NSString * latestRolloutId;                //@synthesize latestRolloutId=_latestRolloutId - In the implementation block
@property (assign,nonatomic) BOOL hasRolloutCount; 
@property (assign,nonatomic) unsigned rolloutCount;                     //@synthesize rolloutCount=_rolloutCount - In the implementation block
-(id)dictionaryRepresentation;
-(BOOL)hasName;
-(void)mergeFrom:(id)arg1 ;
-(NSString *)name;
-(id)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSData *)hashData;
-(BOOL)isEqual:(id)arg1 ;
-(void)setHashData:(NSData *)arg1 ;
-(void)setLatestRolloutId:(NSString *)arg1 ;
-(BOOL)hasHashData;
-(void)setHashIncludesDefaults:(BOOL)arg1 ;
-(void)setHasHashIncludesDefaults:(BOOL)arg1 ;
-(BOOL)hasHashIncludesDefaults;
-(BOOL)hasLatestRolloutId;
-(void)setRolloutCount:(unsigned)arg1 ;
-(void)setHasRolloutCount:(BOOL)arg1 ;
-(BOOL)hasRolloutCount;
-(BOOL)hashIncludesDefaults;
-(NSString *)latestRolloutId;
-(unsigned)rolloutCount;
@end

