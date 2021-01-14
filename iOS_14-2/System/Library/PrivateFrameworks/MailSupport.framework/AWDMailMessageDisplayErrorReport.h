/*
* Generated on Thursday, January 14, 2021 at 2:26:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MailSupport.framework/MailSupport
*/

#import <MailSupport/MailSupport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class AWDMailMessage;

@interface AWDMailMessageDisplayErrorReport : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	int _loadingError;
	AWDMailMessage* _message;
	int _mimeError;
	SCD_Struct_AW2 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;              //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasMimeError; 
@property (assign,nonatomic) int mimeError;                             //@synthesize mimeError=_mimeError - In the implementation block
@property (assign,nonatomic) BOOL hasLoadingError; 
@property (assign,nonatomic) int loadingError;                          //@synthesize loadingError=_loadingError - In the implementation block
@property (nonatomic,readonly) BOOL hasMessage; 
@property (nonatomic,retain) AWDMailMessage * message;                  //@synthesize message=_message - In the implementation block
-(void)setMessage:(AWDMailMessage *)arg1 ;
-(id)dictionaryRepresentation;
-(AWDMailMessage *)message;
-(unsigned long long)timestamp;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(BOOL)hasMessage;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(unsigned long long)hash;
-(BOOL)hasTimestamp;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(int)mimeError;
-(void)setMimeError:(int)arg1 ;
-(void)setHasMimeError:(BOOL)arg1 ;
-(BOOL)hasMimeError;
-(id)mimeErrorAsString:(int)arg1 ;
-(int)StringAsMimeError:(id)arg1 ;
-(int)loadingError;
-(void)setLoadingError:(int)arg1 ;
-(void)setHasLoadingError:(BOOL)arg1 ;
-(BOOL)hasLoadingError;
-(id)loadingErrorAsString:(int)arg1 ;
-(int)StringAsLoadingError:(id)arg1 ;
@end

