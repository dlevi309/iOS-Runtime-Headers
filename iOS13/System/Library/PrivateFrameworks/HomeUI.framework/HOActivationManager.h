/*
* Generated on Monday, March 1, 2021 at 2:34:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/


@class NSDate;

@interface HOActivationManager : NSObject {

	NSDate* _lastEnteredForegroundDate;

}

@property (nonatomic,retain) NSDate * lastEnteredForegroundDate;              //@synthesize lastEnteredForegroundDate=_lastEnteredForegroundDate - In the implementation block
+(id)sharedInstance;
-(id)init;
-(NSDate *)lastEnteredForegroundDate;
-(void)setLastEnteredForegroundDate:(NSDate *)arg1 ;
-(void)_enteredForeground:(id)arg1 ;
@end

