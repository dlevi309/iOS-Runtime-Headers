/*
* Generated on Monday, March 1, 2021 at 2:33:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MailSupport.framework/MailSupport
*/

#import <MailSupport/MailSupport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class AWDMailMessage;

@interface AWDMailMessageLoadingReport : PBCodable <NSCopying> {

	long long _timeLoadingSpinnerIsVisibleInSeconds;
	unsigned long long _timestamp;
	AWDMailMessage* _message;
	SCD_Struct_AW4 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                                //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasTimeLoadingSpinnerIsVisibleInSeconds; 
@property (assign,nonatomic) long long timeLoadingSpinnerIsVisibleInSeconds;              //@synthesize timeLoadingSpinnerIsVisibleInSeconds=_timeLoadingSpinnerIsVisibleInSeconds - In the implementation block
@property (nonatomic,readonly) BOOL hasMessage; 
@property (nonatomic,retain) AWDMailMessage * message;                                    //@synthesize message=_message - In the implementation block
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
-(void)setTimeLoadingSpinnerIsVisibleInSeconds:(long long)arg1 ;
-(id)initWithMailMessage:(id)arg1 loadingSpinnerIsVisibleTimeInSeconds:(long long)arg2 ;
-(void)setHasTimeLoadingSpinnerIsVisibleInSeconds:(BOOL)arg1 ;
-(BOOL)hasTimeLoadingSpinnerIsVisibleInSeconds;
-(long long)timeLoadingSpinnerIsVisibleInSeconds;
@end

