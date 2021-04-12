/*
* Generated on Monday, March 1, 2021 at 2:32:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUI.framework/TelephonyUI
*/


@class NSString, NSTimer;

@interface TPStatusBarManager : NSObject {

	NSString* _currentAbbreviatedStatusBarString;
	NSTimer* _callDurationTimer;

}

@property (nonatomic,retain) NSTimer * callDurationTimer;                             //@synthesize callDurationTimer=_callDurationTimer - In the implementation block
@property (nonatomic,copy) NSString * currentAbbreviatedStatusBarString;              //@synthesize currentAbbreviatedStatusBarString=_currentAbbreviatedStatusBarString - In the implementation block
+(id)sharedInstance;
-(id)init;
-(void)dealloc;
-(void)updateCurrentAbbreviatedStatusBarStringAndSendNotification;
-(void)updateCurrentAbbreviatedStatusBarString;
-(NSTimer *)callDurationTimer;
-(NSString *)currentAbbreviatedStatusBarString;
-(void)setCurrentAbbreviatedStatusBarString:(NSString *)arg1 ;
-(void)setCallDurationTimer:(NSTimer *)arg1 ;
@end

