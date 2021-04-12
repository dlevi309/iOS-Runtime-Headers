/*
* Generated on Thursday, January 14, 2021 at 2:24:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(id)init;
-(void)dealloc;
-(void)_updatePreferences;
-(BOOL)isTextInputEnabled;
-(BOOL)isHTTForTextInputEnabled;
-(BOOL)isSiriMiniEnabled;
-(BOOL)isStreamingDictationEnabled;
-(BOOL)isSiriSafeForLockScreen;
-(void)_setSiriSafeForLockScreen:(BOOL)arg1 ;
@end

