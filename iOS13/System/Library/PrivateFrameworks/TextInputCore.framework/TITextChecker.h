/*
* Generated on Monday, March 1, 2021 at 2:34:16 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
*/


@protocol _TIUITextChecking;
#import <TextInputCore/TextInputCore-Structs.h>
@interface TITextChecker : NSObject {

	id<_TIUITextChecking> _checker;

}

@property (nonatomic,readonly) id<_TIUITextChecking> checker;              //@synthesize checker=_checker - In the implementation block
+(id)_UITextCheckerWithAsynchronousLoading:(BOOL)arg1 ;
-(id)init;
-(NSRange)checkSpellingOfString:(id)arg1 startingAt:(long long)arg2 language:(id)arg3 wrap:(BOOL)arg4 correction:(id*)arg5 ;
-(id)initWithAsynchronousLoading:(BOOL)arg1 ;
-(BOOL)doneLoading;
-(id<_TIUITextChecking>)checker;
@end

