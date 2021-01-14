/*
* Generated on Thursday, January 14, 2021 at 2:24:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

