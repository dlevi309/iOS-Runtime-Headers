/*
* Generated on Monday, March 1, 2021 at 2:33:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(NSData *)rawData;
-(void)setRawData:(NSData *)arg1 ;
-(void)setQuotaEvent:(EDPETQuotaReachedEvent *)arg1 ;
-(void)setSubmittedEvent:(EDPETSubmittedEvent *)arg1 ;
-(BOOL)hasQuotaEvent;
-(BOOL)hasSubmittedEvent;
-(BOOL)hasRawData;
-(EDPETQuotaReachedEvent *)quotaEvent;
-(EDPETSubmittedEvent *)submittedEvent;
@end

