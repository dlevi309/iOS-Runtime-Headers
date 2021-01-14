/*
* Generated on Thursday, January 14, 2021 at 2:23:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

