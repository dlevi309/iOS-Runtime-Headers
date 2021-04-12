/*
* Generated on Thursday, January 14, 2021 at 2:26:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MailSupport.framework/MailSupport
*/

#import <MailSupport/MailSupport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class AWDMailMessageBody, NSString;

@interface AWDMailMessage : PBCodable <NSCopying> {

	AWDMailMessageBody* _body;
	NSString* _messageId;

}

@property (nonatomic,readonly) BOOL hasMessageId; 
@property (nonatomic,retain) NSString * messageId;                   //@synthesize messageId=_messageId - In the implementation block
@property (nonatomic,readonly) BOOL hasBody; 
@property (nonatomic,retain) AWDMailMessageBody * body;              //@synthesize body=_body - In the implementation block
-(void)setBody:(AWDMailMessageBody *)arg1 ;
-(id)dictionaryRepresentation;
-(void)setMessageId:(NSString *)arg1 ;
-(AWDMailMessageBody *)body;
-(BOOL)hasBody;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)hasMessageId;
-(id)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)messageId;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithMailMessage:(id)arg1 ;
@end

