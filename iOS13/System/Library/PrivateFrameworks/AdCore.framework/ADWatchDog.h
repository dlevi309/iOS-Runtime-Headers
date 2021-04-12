/*
* Generated on Monday, March 1, 2021 at 2:34:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AdCore.framework/AdCore
*/


@class NSString;

@interface ADWatchDog : NSObject {

	NSString* _reason;
	unsigned long long _delayTime;

}

@property (nonatomic,retain) NSString * reason;                         //@synthesize reason=_reason - In the implementation block
@property (assign,nonatomic) unsigned long long delayTime;              //@synthesize delayTime=_delayTime - In the implementation block
-(NSString *)reason;
-(void)setReason:(NSString *)arg1 ;
-(void)setDelayTime:(unsigned long long)arg1 ;
-(unsigned long long)delayTime;
-(id)initWithReason:(id)arg1 andDelay:(unsigned long long)arg2 ;
-(void)updateReason:(id)arg1 ;
@end

