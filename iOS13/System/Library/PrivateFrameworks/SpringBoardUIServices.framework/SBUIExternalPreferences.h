/*
* Generated on Monday, March 1, 2021 at 2:32:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardUIServices.framework/SpringBoardUIServices
*/


@class NSUserDefaults;

@interface SBUIExternalPreferences : NSObject {

	NSUserDefaults* _soundDefaults;
	BOOL _keyboardPlaysSounds;

}

@property (assign,nonatomic) BOOL keyboardPlaysSounds;              //@synthesize keyboardPlaysSounds=_keyboardPlaysSounds - In the implementation block
+(id)sharedInstance;
-(id)init;
-(BOOL)keyboardPlaysSounds;
-(void)setKeyboardPlaysSounds:(BOOL)arg1 ;
@end

