/*
* Generated on Thursday, January 14, 2021 at 2:26:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MessageLegacy.framework/MessageLegacy
*/


@interface MFDeliveryResult : NSObject {

	BOOL _isWifi;
	long long _status;
	double _duration;
	unsigned long long _bytesSent;
	long long _attributes;

}

@property (assign,nonatomic) long long status;                          //@synthesize status=_status - In the implementation block
@property (assign,nonatomic) double duration;                           //@synthesize duration=_duration - In the implementation block
@property (assign,nonatomic) unsigned long long bytesSent;              //@synthesize bytesSent=_bytesSent - In the implementation block
@property (assign,nonatomic) BOOL isWifi;                               //@synthesize isWifi=_isWifi - In the implementation block
@property (assign,nonatomic) long long attributes;                      //@synthesize attributes=_attributes - In the implementation block
-(void)setDuration:(double)arg1 ;
-(id)initWithStatus:(long long)arg1 ;
-(void)setAttributes:(long long)arg1 ;
-(BOOL)isWifi;
-(void)setBytesSent:(unsigned long long)arg1 ;
-(long long)attributes;
-(id)description;
-(void)setIsWifi:(BOOL)arg1 ;
-(void)setStatus:(long long)arg1 ;
-(unsigned long long)bytesSent;
-(double)duration;
-(long long)status;
@end

