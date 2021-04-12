/*
* Generated on Thursday, January 14, 2021 at 2:26:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MailSupport.framework/MailSupport
*/

#import <MailSupport/MailSupport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface AWDMailMessageBody : PBCodable <NSCopying> {

	unsigned long long _totalTextSize;
	NSString* _mimeSubtype;
	NSString* _mimeType;
	SCD_Struct_AW6 _has;

}

@property (nonatomic,readonly) BOOL hasMimeType; 
@property (nonatomic,retain) NSString * mimeType;                           //@synthesize mimeType=_mimeType - In the implementation block
@property (nonatomic,readonly) BOOL hasMimeSubtype; 
@property (nonatomic,retain) NSString * mimeSubtype;                        //@synthesize mimeSubtype=_mimeSubtype - In the implementation block
@property (assign,nonatomic) BOOL hasTotalTextSize; 
@property (assign,nonatomic) unsigned long long totalTextSize;              //@synthesize totalTextSize=_totalTextSize - In the implementation block
-(id)dictionaryRepresentation;
-(NSString *)mimeType;
-(unsigned long long)totalTextSize;
-(void)mergeFrom:(id)arg1 ;
-(void)setMimeType:(NSString *)arg1 ;
-(id)description;
-(BOOL)hasMimeType;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)mimeSubtype;
-(id)initWithMIMEBody:(id)arg1 ;
-(void)setMimeSubtype:(NSString *)arg1 ;
-(void)setTotalTextSize:(unsigned long long)arg1 ;
-(BOOL)hasMimeSubtype;
-(void)setHasTotalTextSize:(BOOL)arg1 ;
-(BOOL)hasTotalTextSize;
@end

