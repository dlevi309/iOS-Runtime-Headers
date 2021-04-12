/*
* Generated on Monday, March 1, 2021 at 2:33:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
*/


@interface VCAudioRule : NSObject {

	int _payload;
	BOOL _isSecondary;
	BOOL _sbr;
	unsigned _samplesPerBlock;

}

@property (nonatomic,readonly) int payload;                           //@synthesize payload=_payload - In the implementation block
@property (nonatomic,readonly) BOOL isSecondary;                      //@synthesize isSecondary=_isSecondary - In the implementation block
@property (nonatomic,readonly) BOOL sbr;                              //@synthesize sbr=_sbr - In the implementation block
@property (nonatomic,readonly) unsigned samplesPerBlock;              //@synthesize samplesPerBlock=_samplesPerBlock - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(int)payload;
-(BOOL)isSecondary;
-(id)initWithPayload:(int)arg1 isSecondary:(BOOL)arg2 sbr:(BOOL)arg3 samplesPerBlock:(unsigned)arg4 ;
-(BOOL)sbr;
-(unsigned)samplesPerBlock;
@end

