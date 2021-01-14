/*
* Generated on Thursday, January 14, 2021 at 2:20:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/_UIFeedbackData.h>
@class _UIFeedbackParameters, NSURL;


@protocol _UIFeedbackData <NSObject>
@property (nonatomic,readonly) unsigned long long effectiveEventType; 
@property (nonatomic,readonly) double effectiveDuration; 
@property (nonatomic,readonly) double effectiveDelay; 
@property (nonatomic,readonly) _UIFeedbackParameters * hapticParameters; 
@property (nonatomic,readonly) _UIFeedbackParameters * audioParameters; 
@property (nonatomic,readonly) unsigned long long effectiveEnabledFeedbackTypes; 
@property (nonatomic,readonly) unsigned effectiveSystemSoundID; 
@property (nonatomic,readonly) NSURL * fileURL; 
@property (nonatomic,readonly) unsigned long long fileFeedbackType; 
@required
-(unsigned)effectiveSystemSoundID;
-(unsigned long long)effectiveEnabledFeedbackTypes;
-(_UIFeedbackParameters *)audioParameters;
-(NSURL *)fileURL;
-(_UIFeedbackParameters *)hapticParameters;
-(double)effectiveDuration;
-(unsigned long long)effectiveEventType;
-(unsigned long long)fileFeedbackType;
-(double)effectiveDelay;

@end


@class _UIFeedbackParameters, NSURL, NSString;

@interface _UIFeedbackData : NSObject <_UIFeedbackData> {

	unsigned _effectiveSystemSoundID;
	unsigned long long _effectiveEventType;
	double _effectiveDuration;
	double _effectiveDelay;
	_UIFeedbackParameters* _hapticParameters;
	_UIFeedbackParameters* _audioParameters;
	unsigned long long _effectiveEnabledFeedbackTypes;
	NSURL* _fileURL;
	unsigned long long _fileFeedbackType;

}

@property (assign,setter=_setEffectiveEventType:,nonatomic) unsigned long long effectiveEventType;                                    //@synthesize effectiveEventType=_effectiveEventType - In the implementation block
@property (assign,setter=_setEffectiveDuration:,nonatomic) double effectiveDuration;                                                  //@synthesize effectiveDuration=_effectiveDuration - In the implementation block
@property (assign,setter=_setEffectiveDelay:,nonatomic) double effectiveDelay;                                                        //@synthesize effectiveDelay=_effectiveDelay - In the implementation block
@property (setter=_setHapticParameters:,nonatomic,retain) _UIFeedbackParameters * hapticParameters;                                   //@synthesize hapticParameters=_hapticParameters - In the implementation block
@property (setter=_setAudioParameters:,nonatomic,retain) _UIFeedbackParameters * audioParameters;                                     //@synthesize audioParameters=_audioParameters - In the implementation block
@property (assign,setter=_setEffectiveEnabledFeedbackTypes:,nonatomic) unsigned long long effectiveEnabledFeedbackTypes;              //@synthesize effectiveEnabledFeedbackTypes=_effectiveEnabledFeedbackTypes - In the implementation block
@property (assign,setter=_setEffectiveSystemSoundID:,nonatomic) unsigned effectiveSystemSoundID;                                      //@synthesize effectiveSystemSoundID=_effectiveSystemSoundID - In the implementation block
@property (setter=_setFileURL:,nonatomic,retain) NSURL * fileURL;                                                                     //@synthesize fileURL=_fileURL - In the implementation block
@property (assign,setter=_setFileFeedbackType:,nonatomic) unsigned long long fileFeedbackType;                                        //@synthesize fileFeedbackType=_fileFeedbackType - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(unsigned)effectiveSystemSoundID;
-(unsigned long long)effectiveEnabledFeedbackTypes;
-(void)_setEffectiveDelay:(double)arg1 ;
-(void)_setEffectiveDuration:(double)arg1 ;
-(void)_setEffectiveSystemSoundID:(unsigned)arg1 ;
-(_UIFeedbackParameters *)audioParameters;
-(void)_setHapticParameters:(id)arg1 ;
-(void)_setFileFeedbackType:(unsigned long long)arg1 ;
-(void)_setEffectiveEnabledFeedbackTypes:(unsigned long long)arg1 ;
-(NSURL *)fileURL;
-(_UIFeedbackParameters *)hapticParameters;
-(double)effectiveDuration;
-(unsigned long long)effectiveEventType;
-(void)_setEffectiveEventType:(unsigned long long)arg1 ;
-(unsigned long long)fileFeedbackType;
-(void)_setAudioParameters:(id)arg1 ;
-(void)_setFileURL:(id)arg1 ;
-(double)effectiveDelay;
@end

