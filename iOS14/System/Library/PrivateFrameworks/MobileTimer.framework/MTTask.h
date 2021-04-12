/*
* Generated on Thursday, January 14, 2021 at 2:23:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
*/


@class NSString, MTGCDTimer;

@interface MTTask : NSObject {

	NSString* _identifier;
	double _delay;
	/*^block*/id _completableBlock;
	MTGCDTimer* _timer;

}

@property (nonatomic,copy) NSString * identifier;              //@synthesize identifier=_identifier - In the implementation block
@property (assign,nonatomic) double delay;                     //@synthesize delay=_delay - In the implementation block
@property (nonatomic,copy) id completableBlock;                //@synthesize completableBlock=_completableBlock - In the implementation block
@property (nonatomic,retain) MTGCDTimer * timer;               //@synthesize timer=_timer - In the implementation block
+(id)taskWithIdentifier:(id)arg1 delay:(double)arg2 completableBlock:(/*^block*/id)arg3 ;
+(id)taskWithIdentifier:(id)arg1 completableBlock:(/*^block*/id)arg2 ;
-(MTGCDTimer *)timer;
-(void)setTimer:(MTGCDTimer *)arg1 ;
-(id)completableBlock;
-(void)setCompletableBlock:(id)arg1 ;
-(void)setDelay:(double)arg1 ;
-(id)description;
-(double)delay;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSString *)identifier;
@end

