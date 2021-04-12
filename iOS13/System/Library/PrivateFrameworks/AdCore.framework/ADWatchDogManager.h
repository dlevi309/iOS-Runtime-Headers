/*
* Generated on Monday, March 1, 2021 at 2:34:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AdCore.framework/AdCore
*/

#import <AdCore/ADSingleton.h>

@protocol OS_dispatch_queue;
@class NSObject, NSNumber, NSMutableDictionary;

@interface ADWatchDogManager : ADSingleton {

	NSObject*<OS_dispatch_queue> _watchdogQueue;
	NSNumber* _currentToken;
	NSMutableDictionary* _tokenCollection;

}

@property (nonatomic,retain) NSNumber * currentToken;                              //@synthesize currentToken=_currentToken - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * tokenCollection;              //@synthesize tokenCollection=_tokenCollection - In the implementation block
+(id)sharedInstance;
-(id)init;
-(void)incrementToken;
-(NSNumber *)currentToken;
-(id)getNextToken;
-(BOOL)removeWatchdogWithToken:(id)arg1 ;
-(id)createNewWatchdog:(id)arg1 withTimer:(unsigned long long)arg2 ;
-(NSMutableDictionary *)tokenCollection;
-(void)simulateCrash:(id)arg1 becauseOf:(unsigned long long)arg2 actuallyTook:(double)arg3 ;
-(BOOL)updateReason:(id)arg1 forToken:(id)arg2 ;
-(void)setCurrentToken:(NSNumber *)arg1 ;
@end

