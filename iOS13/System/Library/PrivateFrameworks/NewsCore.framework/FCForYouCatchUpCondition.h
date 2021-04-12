/*
* Generated on Monday, March 1, 2021 at 2:32:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/


@interface FCForYouCatchUpCondition : NSObject {

	long long _contentTypes;
	/*^block*/id _testBlock;

}

@property (assign,nonatomic) long long contentTypes;              //@synthesize contentTypes=_contentTypes - In the implementation block
@property (nonatomic,copy) id testBlock;                          //@synthesize testBlock=_testBlock - In the implementation block
+(id)caughtUpWithContentTypes:(long long)arg1 orPassingTestBlock:(/*^block*/id)arg2 ;
+(id)caughtUpWithContentTypes:(long long)arg1 ;
-(void)setTestBlock:(id)arg1 ;
-(BOOL)isSatisfiedWithCatchUpOperation:(id)arg1 ;
-(long long)contentTypes;
-(void)setContentTypes:(long long)arg1 ;
-(id)testBlock;
@end

