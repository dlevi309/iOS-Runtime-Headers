/*
* Generated on Thursday, January 14, 2021 at 2:24:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionClient.framework/AppPredictionClient
*/

#import <AppPredictionClient/AppPredictionClient-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface ATXMPBFeedbackUserInteractionsTracker : PBCodable <NSCopying> {

	NSString* _consumerSubType;
	int _engagementType;
	SCD_Struct_AT1 _has;

}

@property (assign,nonatomic) BOOL hasEngagementType; 
@property (assign,nonatomic) int engagementType;                      //@synthesize engagementType=_engagementType - In the implementation block
@property (nonatomic,readonly) BOOL hasConsumerSubType; 
@property (nonatomic,retain) NSString * consumerSubType;              //@synthesize consumerSubType=_consumerSubType - In the implementation block
-(id)dictionaryRepresentation;
-(NSString *)consumerSubType;
-(BOOL)hasEngagementType;
-(int)engagementType;
-(BOOL)hasConsumerSubType;
-(void)setConsumerSubType:(NSString *)arg1 ;
-(int)StringAsEngagementType:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setHasEngagementType:(BOOL)arg1 ;
-(id)engagementTypeAsString:(int)arg1 ;
-(void)setEngagementType:(int)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

