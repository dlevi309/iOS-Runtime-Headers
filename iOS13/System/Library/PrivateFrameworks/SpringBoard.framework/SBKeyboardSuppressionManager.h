/*
* Generated on Monday, March 1, 2021 at 2:35:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/


@class NSMutableDictionary;

@interface SBKeyboardSuppressionManager : NSObject {

	NSMutableDictionary* _keyboardSuppressionAssertions;

}
+(id)sharedInstance;
-(id)init;
-(id)description;
-(void)stopSuppressingKeyboardWithReason:(id)arg1 ;
-(void)startSuppressingKeyboardWithReason:(id)arg1 predicate:(/*^block*/id)arg2 ;
-(void)_setKeyboardSuppressed:(BOOL)arg1 forReason:(id)arg2 withPredicate:(/*^block*/id)arg3 ;
@end

