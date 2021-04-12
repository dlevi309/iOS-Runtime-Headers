/*
* Generated on Thursday, January 14, 2021 at 2:25:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(long long)compare:(id)arg1 ;
-(int)connectionType;
-(void)setConnectionType:(int)arg1 ;
-(unsigned)bitrate;
-(id)description;
-(void)dealloc;
-(void)setBitrate:(unsigned)arg1 ;
-(VCVideoRule *)limitingRule;
-(id)initWithBitrate:(unsigned)arg1 connectionType:(int)arg2 limitingRule:(id)arg3 ;
@end

