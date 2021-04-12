/*
* Generated on Monday, March 1, 2021 at 2:33:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(long long)drawingInsertCount;
-(void)setDrawingInsertCount:(long long)arg1 ;
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

