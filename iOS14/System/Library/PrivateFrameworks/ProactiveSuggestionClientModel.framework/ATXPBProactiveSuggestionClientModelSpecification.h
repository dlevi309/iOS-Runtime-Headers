/*
* Generated on Thursday, January 14, 2021 at 2:22:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ProactiveSuggestionClientModel.framework/ProactiveSuggestionClientModel
*/

#import <ProactiveSuggestionClientModel/ProactiveSuggestionClientModel-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface ATXPBProactiveSuggestionClientModelSpecification : PBCodable <NSCopying> {

	NSString* _clientModelId;
	NSString* _clientModelVersion;
	int _engagementResetPolicy;
	SCD_Struct_AT1 _has;

}

@property (nonatomic,readonly) BOOL hasClientModelId; 
@property (nonatomic,retain) NSString * clientModelId;                   //@synthesize clientModelId=_clientModelId - In the implementation block
@property (nonatomic,readonly) BOOL hasClientModelVersion; 
@property (nonatomic,retain) NSString * clientModelVersion;              //@synthesize clientModelVersion=_clientModelVersion - In the implementation block
@property (assign,nonatomic) BOOL hasEngagementResetPolicy; 
@property (assign,nonatomic) int engagementResetPolicy;                  //@synthesize engagementResetPolicy=_engagementResetPolicy - In the implementation block
-(id)dictionaryRepresentation;
-(NSString *)clientModelId;
-(NSString *)clientModelVersion;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(int)engagementResetPolicy;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)setClientModelId:(NSString *)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setClientModelVersion:(NSString *)arg1 ;
-(BOOL)hasClientModelId;
-(BOOL)hasClientModelVersion;
-(void)setEngagementResetPolicy:(int)arg1 ;
-(void)setHasEngagementResetPolicy:(BOOL)arg1 ;
-(BOOL)hasEngagementResetPolicy;
-(id)engagementResetPolicyAsString:(int)arg1 ;
-(int)StringAsEngagementResetPolicy:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

