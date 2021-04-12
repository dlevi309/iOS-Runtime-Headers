/*
* Generated on Thursday, January 14, 2021 at 2:28:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpeechRecognitionCommandAndControl.framework/SpeechRecognitionCommandAndControl
*/


@interface CACSystemStatusManager : NSObject {

	BOOL _isDictationRunning;

}

@property (assign,nonatomic) BOOL isDictationRunning;              //@synthesize isDictationRunning=_isDictationRunning - In the implementation block
+(id)sharedManager;
-(id)init;
-(BOOL)isSystemDictationRunning;
-(void)_systemDictationStatusDidChange:(BOOL)arg1 ;
-(void)setIsDictationRunning:(BOOL)arg1 ;
-(BOOL)isDictationRunning;
@end

