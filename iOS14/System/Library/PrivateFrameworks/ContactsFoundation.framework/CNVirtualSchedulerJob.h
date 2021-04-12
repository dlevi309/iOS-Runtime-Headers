/*
* Generated on Thursday, January 14, 2021 at 2:21:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
*/


@interface CNVirtualSchedulerJob : NSObject {

	unsigned long long _time;
	/*^block*/id _block;

}

@property (assign) unsigned long long time;              //@synthesize time=_time - In the implementation block
@property (copy,readonly) id block;                      //@synthesize block=_block - In the implementation block
+(id)jobWithTime:(unsigned long long)arg1 block:(/*^block*/id)arg2 ;
-(unsigned long long)time;
-(void)setTime:(unsigned long long)arg1 ;
-(id)block;
-(id)description;
-(id)initWithTime:(unsigned long long)arg1 block:(/*^block*/id)arg2 ;
@end

