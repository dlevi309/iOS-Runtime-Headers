/*
* Generated on Thursday, January 14, 2021 at 2:21:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/


@interface FCInterestToken : NSObject {

	/*^block*/id _removeInterestBlock;

}

@property (nonatomic,copy) id removeInterestBlock;              //@synthesize removeInterestBlock=_removeInterestBlock - In the implementation block
+(id)interestTokenWithCallbackQueue:(id)arg1 removeInterestBlock:(/*^block*/id)arg2 ;
+(id)interestTokenWithRemoveInterestBlock:(/*^block*/id)arg1 ;
-(id)init;
-(id)removeInterestBlock;
-(void)setRemoveInterestBlock:(id)arg1 ;
-(id)initWithCallbackQueue:(id)arg1 removeInterestBlock:(/*^block*/id)arg2 ;
-(void)dealloc;
@end

