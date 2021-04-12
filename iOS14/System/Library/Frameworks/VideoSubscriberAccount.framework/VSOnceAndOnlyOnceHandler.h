/*
* Generated on Thursday, January 14, 2021 at 2:27:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
*/


@interface VSOnceAndOnlyOnceHandler : NSObject {

	int _counter;
	/*^block*/id _block;

}

@property (nonatomic,copy) id block;              //@synthesize block=_block - In the implementation block
-(void)invoke;
-(id)block;
-(void)setBlock:(id)arg1 ;
-(void)dealloc;
@end

