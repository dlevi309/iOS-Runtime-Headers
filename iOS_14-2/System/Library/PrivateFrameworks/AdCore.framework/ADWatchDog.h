/*
* Generated on Thursday, January 14, 2021 at 2:24:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(unsigned long long)delayTime;
-(void)setDelayTime:(unsigned long long)arg1 ;
-(void)setReason:(NSString *)arg1 ;
-(id)initWithReason:(id)arg1 andDelay:(unsigned long long)arg2 ;
-(void)updateReason:(id)arg1 ;
@end

