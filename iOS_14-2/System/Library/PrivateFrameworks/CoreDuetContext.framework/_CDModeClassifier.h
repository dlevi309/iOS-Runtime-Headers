/*
* Generated on Thursday, January 14, 2021 at 2:21:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreDuetContext.framework/CoreDuetContext
*/


@class NSUserDefaults, ATXModeClassifier;

@interface _CDModeClassifier : NSObject {

	NSUserDefaults* _userDefaults;
	ATXModeClassifier* _modeClassifier;

}

@property (retain) ATXModeClassifier * modeClassifier;              //@synthesize modeClassifier=_modeClassifier - In the implementation block
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(id)init;
-(void)_enableFocusModesIfPossible;
-(ATXModeClassifier *)modeClassifier;
-(void)setModeClassifier:(ATXModeClassifier *)arg1 ;
-(void)dealloc;
@end

