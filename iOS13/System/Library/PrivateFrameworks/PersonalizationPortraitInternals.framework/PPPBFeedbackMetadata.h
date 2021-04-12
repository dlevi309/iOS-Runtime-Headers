/*
* Generated on Monday, March 1, 2021 at 2:33:48 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setClientIdentifier:(NSString *)arg1 ;
-(NSString *)clientIdentifier;
-(BOOL)hasClientIdentifier;
-(BOOL)isMapped;
-(NSString *)clientBundleId;
-(NSString *)mappingId;
-(void)setClientBundleId:(NSString *)arg1 ;
-(BOOL)hasClientBundleId;
-(BOOL)hasMappingId;
-(void)setMappingId:(NSString *)arg1 ;
-(void)setUnixTimestampSec:(unsigned long long)arg1 ;
-(void)setHasUnixTimestampSec:(BOOL)arg1 ;
-(BOOL)hasUnixTimestampSec;
-(unsigned long long)unixTimestampSec;
-(void)setIsMapped:(BOOL)arg1 ;
-(void)setHasIsMapped:(BOOL)arg1 ;
-(BOOL)hasIsMapped;
@end

