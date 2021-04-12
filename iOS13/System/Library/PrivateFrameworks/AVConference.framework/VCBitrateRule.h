/*
* Generated on Monday, March 1, 2021 at 2:33:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
*/


@class VCVideoRule;

@interface VCBitrateRule : NSObject {

	unsigned _bitrate;
	int _connectionType;
	VCVideoRule* limitingRule;

}

@property (assign) unsigned bitrate;                                    //@synthesize bitrate=_bitrate - In the implementation block
@property (assign) int connectionType;                                  //@synthesize connectionType=_connectionType - In the implementation block
@property (nonatomic,readonly) VCVideoRule * limitingRule; 
-(void)dealloc;
-(id)description;
-(long long)compare:(id)arg1 ;
-(int)connectionType;
-(void)setConnectionType:(int)arg1 ;
-(unsigned)bitrate;
-(void)setBitrate:(unsigned)arg1 ;
-(VCVideoRule *)limitingRule;
-(id)initWithBitrate:(unsigned)arg1 connectionType:(int)arg2 limitingRule:(id)arg3 ;
@end

