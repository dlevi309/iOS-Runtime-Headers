/*
* Generated on Monday, March 1, 2021 at 2:32:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
*/


@interface VSOnceAndOnlyOnceHandler : NSObject {

	int _counter;
	/*^block*/id _block;

}

@property (nonatomic,copy) id block;              //@synthesize block=_block - In the implementation block
-(void)dealloc;
-(void)invoke;
-(id)block;
-(void)setBlock:(id)arg1 ;
@end

