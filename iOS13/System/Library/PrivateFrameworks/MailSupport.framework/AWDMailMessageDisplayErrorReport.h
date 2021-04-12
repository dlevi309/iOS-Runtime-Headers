/*
* Generated on Monday, March 1, 2021 at 2:33:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(unsigned long long)timestamp;
-(BOOL)hasTimestamp;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(void)writeTo:(id)arg1 ;
-(AWDMailMessage *)message;
-(void)setMessage:(AWDMailMessage *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)hasMessage;
-(void)setHasTimestamp:(BOOL)arg1 ;
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

