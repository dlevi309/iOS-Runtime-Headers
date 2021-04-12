/*
* Generated on Monday, March 1, 2021 at 2:33:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
*/


#import <AVConference/AVConference-Structs.h>
@interface VCAudioSessionMediaProperties : NSObject {

	double _preferredSampleRate;
	double _preferredBlockSize;
	int _operatingMode;
	unsigned _vpOperatingMode;
	AudioStreamBasicDescription _inputFormat;
	AudioStreamBasicDescription _outputFormat;
	int _processId;
	BOOL _sessionActive;

}

@property (assign,nonatomic) double preferredSampleRate;                             //@synthesize preferredSampleRate=_preferredSampleRate - In the implementation block
@property (assign,nonatomic) double preferredBlockSize;                              //@synthesize preferredBlockSize=_preferredBlockSize - In the implementation block
@property (assign,nonatomic) int operatingMode;                                      //@synthesize operatingMode=_operatingMode - In the implementation block
@property (assign,nonatomic) unsigned vpOperatingMode;                               //@synthesize vpOperatingMode=_vpOperatingMode - In the implementation block
@property (assign,nonatomic) AudioStreamBasicDescription inputFormat;                //@synthesize inputFormat=_inputFormat - In the implementation block
@property (assign,nonatomic) AudioStreamBasicDescription outputFormat;               //@synthesize outputFormat=_outputFormat - In the implementation block
@property (assign,nonatomic) int processId;                                          //@synthesize processId=_processId - In the implementation block
@property (assign,getter=isSessionActive,nonatomic) BOOL sessionActive;              //@synthesize sessionActive=_sessionActive - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(AudioStreamBasicDescription)outputFormat;
-(void)setOutputFormat:(AudioStreamBasicDescription)arg1 ;
-(int)processId;
-(void)setProcessId:(int)arg1 ;
-(AudioStreamBasicDescription)inputFormat;
-(double)preferredSampleRate;
-(void)setInputFormat:(AudioStreamBasicDescription)arg1 ;
-(void)setOperatingMode:(int)arg1 ;
-(int)operatingMode;
-(double)preferredBlockSize;
-(void)setPreferredSampleRate:(double)arg1 ;
-(void)setPreferredBlockSize:(double)arg1 ;
-(void)setVpOperatingMode:(unsigned)arg1 ;
-(unsigned)vpOperatingMode;
-(void)setSessionActive:(BOOL)arg1 ;
-(BOOL)isSessionActive;
@end

