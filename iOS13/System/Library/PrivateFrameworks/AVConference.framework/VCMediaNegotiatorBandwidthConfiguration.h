/*
* Generated on Monday, March 1, 2021 at 2:33:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(void)setMode:(int)arg1 ;
-(int)mode;
-(int)connectionType;
-(void)setConnectionType:(int)arg1 ;
-(void)setMaxBandwidth:(unsigned)arg1 ;
-(unsigned)maxBandwidth;
-(BOOL)isDefaultMode;
-(id)initWithConnectionType:(int)arg1 maxBandwidth:(unsigned)arg2 ;
-(id)initWithMode:(int)arg1 connectionType:(int)arg2 maxBandwidth:(unsigned)arg3 ;
-(void)setIsDefaultMode:(BOOL)arg1 ;
@end

