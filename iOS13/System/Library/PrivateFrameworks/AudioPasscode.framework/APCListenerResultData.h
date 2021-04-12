/*
* Generated on Monday, March 1, 2021 at 2:34:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AudioPasscode.framework/AudioPasscode
*/


@interface APCListenerResultData : NSObject {

	unsigned long long _completionTime;

}

@property (assign,nonatomic) unsigned long long completionTime;              //@synthesize completionTime=_completionTime - In the implementation block
-(BOOL)isValid;
-(void)reset;
-(unsigned long long)completionTime;
-(id)initWithPasscodeDurationNSec:(unsigned long long)arg1 ;
-(void)setCompletionTime:(unsigned long long)arg1 ;
@end

