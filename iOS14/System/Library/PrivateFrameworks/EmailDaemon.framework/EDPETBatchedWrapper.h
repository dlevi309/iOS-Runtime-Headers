/*
* Generated on Thursday, January 14, 2021 at 2:25:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/EmailDaemon.framework/EmailDaemon
*/

#import <EmailDaemon/EmailDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class EDPETQuotaReachedEvent, NSData, EDPETSubmittedEvent;

@interface EDPETBatchedWrapper : PBCodable <NSCopying> {

	EDPETQuotaReachedEvent* _quotaEvent;
	NSData* _rawData;
	EDPETSubmittedEvent* _submittedEvent;

}

@property (nonatomic,readonly) BOOL hasQuotaEvent; 
@property (nonatomic,retain) EDPETQuotaReachedEvent * quotaEvent;               //@synthesize quotaEvent=_quotaEvent - In the implementation block
@property (nonatomic,readonly) BOOL hasSubmittedEvent; 
@property (nonatomic,retain) EDPETSubmittedEvent * submittedEvent;              //@synthesize submittedEvent=_submittedEvent - In the implementation block
@property (nonatomic,readonly) BOOL hasRawData; 
@property (nonatomic,retain) NSData * rawData;                                  //@synthesize rawData=_rawData - In the implementation block
-(id)dictionaryRepresentation;
-(NSData *)rawData;
-(void)mergeFrom:(id)arg1 ;
-(void)setRawData:(NSData *)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setQuotaEvent:(EDPETQuotaReachedEvent *)arg1 ;
-(void)setSubmittedEvent:(EDPETSubmittedEvent *)arg1 ;
-(BOOL)hasQuotaEvent;
-(BOOL)hasSubmittedEvent;
-(BOOL)hasRawData;
-(EDPETQuotaReachedEvent *)quotaEvent;
-(EDPETSubmittedEvent *)submittedEvent;
@end

