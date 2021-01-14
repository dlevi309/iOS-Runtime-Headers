/*
* Generated on Thursday, January 14, 2021 at 2:24:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionClient.framework/AppPredictionClient
*/

#import <AppPredictionClient/AppPredictionClient-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSData;

@interface ATXPBUIEvent : PBCodable <NSCopying> {

	NSString* _consumerSubType;
	NSData* _event;

}

@property (nonatomic,readonly) BOOL hasConsumerSubType; 
@property (nonatomic,retain) NSString * consumerSubType;              //@synthesize consumerSubType=_consumerSubType - In the implementation block
@property (nonatomic,readonly) BOOL hasEvent; 
@property (nonatomic,retain) NSData * event;                          //@synthesize event=_event - In the implementation block
-(id)dictionaryRepresentation;
-(NSString *)consumerSubType;
-(BOOL)hasConsumerSubType;
-(void)setConsumerSubType:(NSString *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(BOOL)hasEvent;
-(NSData *)event;
-(void)setEvent:(NSData *)arg1 ;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

