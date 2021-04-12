/*
* Generated on Monday, March 1, 2021 at 2:33:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(NSString *)mimeType;
-(void)setMimeType:(NSString *)arg1 ;
-(unsigned long long)totalTextSize;
-(NSString *)mimeSubtype;
-(BOOL)hasMimeType;
-(id)initWithMIMEBody:(id)arg1 ;
-(void)setMimeSubtype:(NSString *)arg1 ;
-(void)setTotalTextSize:(unsigned long long)arg1 ;
-(BOOL)hasMimeSubtype;
-(void)setHasTotalTextSize:(BOOL)arg1 ;
-(BOOL)hasTotalTextSize;
@end

