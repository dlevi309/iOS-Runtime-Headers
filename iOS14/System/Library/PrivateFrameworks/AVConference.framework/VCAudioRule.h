/*
* Generated on Thursday, January 14, 2021 at 2:25:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
*/


@interface VCAudioRule : NSObject {

	int _payload;
	BOOL _isSecondary;
	BOOL _sbr;
	unsigned _samplesPerBlock;
	unsigned long long _hash;

}

@property (nonatomic,readonly) int payload;                           //@synthesize payload=_payload - In the implementation block
@property (nonatomic,readonly) BOOL isSecondary;                      //@synthesize isSecondary=_isSecondary - In the implementation block
@property (nonatomic,readonly) BOOL sbr;                              //@synthesize sbr=_sbr - In the implementation block
@property (nonatomic,readonly) unsigned samplesPerBlock;              //@synthesize samplesPerBlock=_samplesPerBlock - In the implementation block
-(BOOL)sbr;
-(id)init;
-(int)payload;
-(id)description;
-(unsigned long long)hash;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithPayload:(int)arg1 isSecondary:(BOOL)arg2 sbr:(BOOL)arg3 samplesPerBlock:(unsigned)arg4 ;
-(BOOL)isSecondary;
-(unsigned)samplesPerBlock;
@end

