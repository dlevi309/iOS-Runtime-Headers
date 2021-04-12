/*
* Generated on Thursday, January 14, 2021 at 2:27:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

