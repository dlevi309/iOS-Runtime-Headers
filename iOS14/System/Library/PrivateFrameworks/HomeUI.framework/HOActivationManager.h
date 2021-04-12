/*
* Generated on Thursday, January 14, 2021 at 2:24:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

