/*
* Generated on Monday, March 1, 2021 at 2:34:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
*/


@class CSAudioRecordContext;

@interface CSAudioStreamRequest : NSObject {

	BOOL _requiresHistoricalBuffer;
	BOOL _useCustomizedRecordSettings;
	BOOL _lpcmIsFloat;
	BOOL _isSiri;
	unsigned _lpcmBitDepth;
	unsigned _numberOfChannels;
	unsigned _encoderBitRate;
	CSAudioRecordContext* _recordContext;
	long long _audioFormat;
	double _sampleRate;

}

@property (nonatomic,readonly) NSObject*<OS_xpc_object> xpcObject; 
@property (nonatomic,retain) CSAudioRecordContext * recordContext;              //@synthesize recordContext=_recordContext - In the implementation block
@property (assign,nonatomic) BOOL requiresHistoricalBuffer;                     //@synthesize requiresHistoricalBuffer=_requiresHistoricalBuffer - In the implementation block
@property (assign,nonatomic) BOOL useCustomizedRecordSettings;                  //@synthesize useCustomizedRecordSettings=_useCustomizedRecordSettings - In the implementation block
@property (assign,nonatomic) long long audioFormat;                             //@synthesize audioFormat=_audioFormat - In the implementation block
@property (assign,nonatomic) double sampleRate;                                 //@synthesize sampleRate=_sampleRate - In the implementation block
@property (assign,nonatomic) unsigned lpcmBitDepth;                             //@synthesize lpcmBitDepth=_lpcmBitDepth - In the implementation block
@property (assign,nonatomic) BOOL lpcmIsFloat;                                  //@synthesize lpcmIsFloat=_lpcmIsFloat - In the implementation block
@property (assign,nonatomic) unsigned numberOfChannels;                         //@synthesize numberOfChannels=_numberOfChannels - In the implementation block
@property (assign,nonatomic) unsigned encoderBitRate;                           //@synthesize encoderBitRate=_encoderBitRate - In the implementation block
@property (assign,nonatomic) BOOL isSiri;                                       //@synthesize isSiri=_isSiri - In the implementation block
+(id)defaultRequestWithContext:(id)arg1 ;
+(id)requestForLpcmRecordSettingsWithContext:(id)arg1 ;
+(id)requestForOpusRecordSettingsWithContext:(id)arg1 ;
+(id)requestForSpeexRecordSettingsWithContext:(id)arg1 ;
-(void)setSampleRate:(double)arg1 ;
-(double)sampleRate;
-(id)initWithXPCObject:(id)arg1 ;
-(unsigned)numberOfChannels;
-(long long)audioFormat;
-(NSObject*<OS_xpc_object>)xpcObject;
-(void)setAudioFormat:(long long)arg1 ;
-(void)setRequiresHistoricalBuffer:(BOOL)arg1 ;
-(void)setIsSiri:(BOOL)arg1 ;
-(void)setEncoderBitRate:(unsigned)arg1 ;
-(void)setNumberOfChannels:(unsigned)arg1 ;
-(void)setLpcmBitDepth:(unsigned)arg1 ;
-(void)setLpcmIsFloat:(BOOL)arg1 ;
-(void)setRecordContext:(CSAudioRecordContext *)arg1 ;
-(void)setUseCustomizedRecordSettings:(BOOL)arg1 ;
-(CSAudioRecordContext *)recordContext;
-(BOOL)requiresHistoricalBuffer;
-(BOOL)useCustomizedRecordSettings;
-(unsigned)lpcmBitDepth;
-(BOOL)lpcmIsFloat;
-(unsigned)encoderBitRate;
-(BOOL)isSiri;
@end

