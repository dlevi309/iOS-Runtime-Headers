/*
* Generated on Thursday, January 14, 2021 at 2:21:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/


@interface FCForYouCatchUpCondition : NSObject {

	long long _contentTypes;
	/*^block*/id _testBlock;

}

@property (assign,nonatomic) long long contentTypes;              //@synthesize contentTypes=_contentTypes - In the implementation block
@property (nonatomic,copy) id testBlock;                          //@synthesize testBlock=_testBlock - In the implementation block
+(id)caughtUpWithContentTypes:(long long)arg1 ;
+(id)caughtUpWithContentTypes:(long long)arg1 orPassingTestBlock:(/*^block*/id)arg2 ;
-(long long)contentTypes;
-(void)setContentTypes:(long long)arg1 ;
-(void)setTestBlock:(id)arg1 ;
-(id)testBlock;
-(BOOL)isSatisfiedWithCatchUpOperation:(id)arg1 ;
@end

