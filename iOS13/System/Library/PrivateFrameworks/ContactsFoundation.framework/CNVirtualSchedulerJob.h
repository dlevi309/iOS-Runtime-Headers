/*
* Generated on Monday, March 1, 2021 at 2:30:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
*/


@interface CNVirtualSchedulerJob : NSObject {

	unsigned long long _time;
	/*^block*/id _block;

}

@property (assign) unsigned long long time;              //@synthesize time=_time - In the implementation block
@property (copy,readonly) id block;                      //@synthesize block=_block - In the implementation block
+(id)jobWithTime:(unsigned long long)arg1 block:(/*^block*/id)arg2 ;
-(id)description;
-(id)block;
-(unsigned long long)time;
-(void)setTime:(unsigned long long)arg1 ;
-(id)initWithTime:(unsigned long long)arg1 block:(/*^block*/id)arg2 ;
@end

