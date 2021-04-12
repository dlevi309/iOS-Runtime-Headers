/*
* Generated on Thursday, January 14, 2021 at 2:26:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setTimeLoadingSpinnerIsVisibleInSeconds:(long long)arg1 ;
-(id)initWithMailMessage:(id)arg1 loadingSpinnerIsVisibleTimeInSeconds:(long long)arg2 ;
-(void)setHasTimeLoadingSpinnerIsVisibleInSeconds:(BOOL)arg1 ;
-(BOOL)hasTimeLoadingSpinnerIsVisibleInSeconds;
-(long long)timeLoadingSpinnerIsVisibleInSeconds;
@end

