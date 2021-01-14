/*
* Generated on Thursday, January 14, 2021 at 2:25:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
*/


@interface VCMediaNegotiatorBandwidthConfiguration : NSObject {

	int _mode;
	int _connectionType;
	unsigned _maxBandwidth;
	BOOL _isDefaultMode;

}

@property (assign,nonatomic) int mode;                           //@synthesize mode=_mode - In the implementation block
@property (assign,nonatomic) int connectionType;                 //@synthesize connectionType=_connectionType - In the implementation block
@property (assign,nonatomic) unsigned maxBandwidth;              //@synthesize maxBandwidth=_maxBandwidth - In the implementation block
@property (assign,nonatomic) BOOL isDefaultMode;                 //@synthesize isDefaultMode=_isDefaultMode - In the implementation block
-(int)mode;
-(int)connectionType;
-(void)setConnectionType:(int)arg1 ;
-(void)setMode:(int)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned)maxBandwidth;
-(BOOL)isDefaultMode;
-(id)initWithConnectionType:(int)arg1 maxBandwidth:(unsigned)arg2 ;
-(id)initWithMode:(int)arg1 connectionType:(int)arg2 maxBandwidth:(unsigned)arg3 ;
-(void)setMaxBandwidth:(unsigned)arg1 ;
-(void)setIsDefaultMode:(BOOL)arg1 ;
@end

