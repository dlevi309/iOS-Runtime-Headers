/*
* Generated on Thursday, January 14, 2021 at 2:26:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MailSupport.framework/MailSupport
*/

#import <MailSupport/MailSupport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface AWDMailComposeAttachmentReport : PBCodable <NSCopying> {

	long long _drawingInsertCount;
	long long _drawingSentCount;
	unsigned long long _timestamp;
	BOOL _messageSent;
	SCD_Struct_AW3 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;              //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasDrawingInsertCount; 
@property (assign,nonatomic) long long drawingInsertCount;              //@synthesize drawingInsertCount=_drawingInsertCount - In the implementation block
@property (assign,nonatomic) BOOL hasDrawingSentCount; 
@property (assign,nonatomic) long long drawingSentCount;                //@synthesize drawingSentCount=_drawingSentCount - In the implementation block
@property (assign,nonatomic) BOOL hasMessageSent; 
@property (assign,nonatomic) BOOL messageSent;                          //@synthesize messageSent=_messageSent - In the implementation block
-(id)dictionaryRepresentation;
-(unsigned long long)timestamp;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(unsigned long long)hash;
-(long long)drawingInsertCount;
-(void)setDrawingInsertCount:(long long)arg1 ;
-(BOOL)hasTimestamp;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)messageSent;
-(void)setMessageSent:(BOOL)arg1 ;
-(BOOL)hasMessageSent;
-(void)setHasDrawingInsertCount:(BOOL)arg1 ;
-(BOOL)hasDrawingInsertCount;
-(void)setDrawingSentCount:(long long)arg1 ;
-(void)setHasDrawingSentCount:(BOOL)arg1 ;
-(BOOL)hasDrawingSentCount;
-(void)setHasMessageSent:(BOOL)arg1 ;
-(long long)drawingSentCount;
@end

