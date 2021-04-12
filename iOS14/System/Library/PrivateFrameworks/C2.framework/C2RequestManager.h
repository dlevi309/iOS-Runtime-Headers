/*
* Generated on Thursday, January 14, 2021 at 2:24:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/C2.framework/C2
*/


@class C2SessionPool;

@interface C2RequestManager : NSObject {

	C2SessionPool* _sessionPool;

}

@property (nonatomic,readonly) C2SessionPool * sessionPool;              //@synthesize sessionPool=_sessionPool - In the implementation block
+(void)initialize;
+(id)sharedManager;
-(id)init;
-(id)createDataTaskWithRequest:(id)arg1 options:(id)arg2 delegate:(id)arg3 sessionHandle:(id*)arg4 ;
-(C2SessionPool *)sessionPool;
-(void)_testUtility_forTask:(id)arg1 sessionHandle:(id*)arg2 taskHandle:(id*)arg3 ;
-(id)createDataTaskWithRequest:(id)arg1 options:(id)arg2 delegate:(id)arg3 ;
-(id)testUtility_sessionForTask:(id)arg1 ;
-(id)testUtility_sessionTaskForTask:(id)arg1 ;
@end

