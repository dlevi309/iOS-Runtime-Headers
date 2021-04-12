/*
* Generated on Thursday, January 14, 2021 at 2:25:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
*/

#import <PersonalizationPortraitInternals/PersonalizationPortraitInternals-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface PPPBFeedbackMetadata : PBCodable <NSCopying> {

	unsigned long long _unixTimestampSec;
	NSString* _clientBundleId;
	NSString* _clientIdentifier;
	NSString* _mappingId;
	BOOL _isMapped;
	SCD_Struct_PP2 _has;

}

@property (nonatomic,readonly) BOOL hasClientBundleId; 
@property (nonatomic,retain) NSString * clientBundleId;                        //@synthesize clientBundleId=_clientBundleId - In the implementation block
@property (nonatomic,readonly) BOOL hasClientIdentifier; 
@property (nonatomic,retain) NSString * clientIdentifier;                      //@synthesize clientIdentifier=_clientIdentifier - In the implementation block
@property (nonatomic,readonly) BOOL hasMappingId; 
@property (nonatomic,retain) NSString * mappingId;                             //@synthesize mappingId=_mappingId - In the implementation block
@property (assign,nonatomic) BOOL hasUnixTimestampSec; 
@property (assign,nonatomic) unsigned long long unixTimestampSec;              //@synthesize unixTimestampSec=_unixTimestampSec - In the implementation block
@property (assign,nonatomic) BOOL hasIsMapped; 
@property (assign,nonatomic) BOOL isMapped;                                    //@synthesize isMapped=_isMapped - In the implementation block
-(id)dictionaryRepresentation;
-(void)setClientIdentifier:(NSString *)arg1 ;
-(BOOL)hasClientIdentifier;
-(void)mergeFrom:(id)arg1 ;
-(NSString *)mappingId;
-(BOOL)isMapped;
-(id)description;
-(void)setMappingId:(NSString *)arg1 ;
-(unsigned long long)hash;
-(NSString *)clientBundleId;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)hasMappingId;
-(void)writeTo:(id)arg1 ;
-(NSString *)clientIdentifier;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setClientBundleId:(NSString *)arg1 ;
-(BOOL)hasClientBundleId;
-(void)setUnixTimestampSec:(unsigned long long)arg1 ;
-(void)setHasUnixTimestampSec:(BOOL)arg1 ;
-(BOOL)hasUnixTimestampSec;
-(unsigned long long)unixTimestampSec;
-(void)setIsMapped:(BOOL)arg1 ;
-(void)setHasIsMapped:(BOOL)arg1 ;
-(BOOL)hasIsMapped;
@end

