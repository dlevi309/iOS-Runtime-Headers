/*
* Generated on Monday, March 1, 2021 at 2:33:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
*/


@class NSUserDefaults;

@interface _SiriUICachedPreferences : NSObject {

	NSUserDefaults* _textInputDefaults;
	BOOL _textInputEnabled;
	BOOL _HTTForTextInputEnabled;
	BOOL _siriMiniIsEnabled;
	BOOL _streamingDictationIsEnabled;
	BOOL _siriSafeForLockScreen;

}
+(id)sharedInstance;
-(id)init;
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)_updatePreferences;
-(BOOL)isTextInputEnabled;
-(BOOL)isHTTForTextInputEnabled;
-(BOOL)isSiriMiniEnabled;
-(BOOL)isStreamingDictationEnabled;
-(BOOL)isSiriSafeForLockScreen;
-(void)_setSiriSafeForLockScreen:(BOOL)arg1 ;
@end

