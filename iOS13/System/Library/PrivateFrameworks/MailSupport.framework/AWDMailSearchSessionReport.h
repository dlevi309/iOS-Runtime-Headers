/*
* Generated on Monday, March 1, 2021 at 2:33:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MailSupport.framework/MailSupport
*/

#import <MailSupport/MailSupport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface AWDMailSearchSessionReport : PBCodable <NSCopying> {

	unsigned long long _messagesLeftToIndex;
	unsigned long long _percentOfMessagesIndexed;
	unsigned long long _timestamp;
	int _emailProvider;
	NSMutableArray* _engagements;
	SCD_Struct_AW3 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                             //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,retain) NSMutableArray * engagements;                             //@synthesize engagements=_engagements - In the implementation block
@property (assign,nonatomic) BOOL hasMessagesLeftToIndex; 
@property (assign,nonatomic) unsigned long long messagesLeftToIndex;                   //@synthesize messagesLeftToIndex=_messagesLeftToIndex - In the implementation block
@property (assign,nonatomic) BOOL hasPercentOfMessagesIndexed; 
@property (assign,nonatomic) unsigned long long percentOfMessagesIndexed;              //@synthesize percentOfMessagesIndexed=_percentOfMessagesIndexed - In the implementation block
@property (assign,nonatomic) BOOL hasEmailProvider; 
@property (assign,nonatomic) int emailProvider;                                        //@synthesize emailProvider=_emailProvider - In the implementation block
+(Class)engagementsType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(unsigned long long)timestamp;
-(BOOL)hasTimestamp;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(int)emailProvider;
-(void)setEmailProvider:(int)arg1 ;
-(void)setHasEmailProvider:(BOOL)arg1 ;
-(BOOL)hasEmailProvider;
-(id)emailProviderAsString:(int)arg1 ;
-(int)StringAsEmailProvider:(id)arg1 ;
-(void)addEngagements:(id)arg1 ;
-(unsigned long long)engagementsCount;
-(void)clearEngagements;
-(id)engagementsAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)engagements;
-(void)setEngagements:(NSMutableArray *)arg1 ;
-(void)setMessagesLeftToIndex:(unsigned long long)arg1 ;
-(void)setHasMessagesLeftToIndex:(BOOL)arg1 ;
-(BOOL)hasMessagesLeftToIndex;
-(void)setPercentOfMessagesIndexed:(unsigned long long)arg1 ;
-(void)setHasPercentOfMessagesIndexed:(BOOL)arg1 ;
-(BOOL)hasPercentOfMessagesIndexed;
-(unsigned long long)messagesLeftToIndex;
-(unsigned long long)percentOfMessagesIndexed;
@end

