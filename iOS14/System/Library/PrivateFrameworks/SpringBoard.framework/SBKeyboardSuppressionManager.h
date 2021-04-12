/*
* Generated on Thursday, January 14, 2021 at 2:25:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/


@class NSMutableDictionary;

@interface SBKeyboardSuppressionManager : NSObject {

	NSMutableDictionary* _keyboardSuppressionAssertions;

}
+(id)sharedInstance;
-(id)init;
-(id)description;
-(void)startSuppressingKeyboardWithReason:(id)arg1 predicate:(/*^block*/id)arg2 ;
-(void)_setKeyboardSuppressed:(BOOL)arg1 forReason:(id)arg2 withPredicate:(/*^block*/id)arg3 ;
-(void)stopSuppressingKeyboardWithReason:(id)arg1 ;
@end

