/*
* Generated on Monday, March 1, 2021 at 2:31:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/


@protocol OS_dispatch_source;
@class PDAssertion, NSObject;

@interface PDAssertionRequest : NSObject {

	PDAssertion* _assertion;
	/*^block*/id _resultHandler;
	NSObject*<OS_dispatch_source> _invalidationTimer;

}

@property (nonatomic,retain) PDAssertion * assertion;                                      //@synthesize assertion=_assertion - In the implementation block
@property (nonatomic,copy) id resultHandler;                                               //@synthesize resultHandler=_resultHandler - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_source> invalidationTimer;              //@synthesize invalidationTimer=_invalidationTimer - In the implementation block
-(unsigned long long)hash;
-(PDAssertion *)assertion;
-(void)setAssertion:(PDAssertion *)arg1 ;
-(id)resultHandler;
-(void)setResultHandler:(id)arg1 ;
-(id)initWithAssertion:(id)arg1 delegate:(id)arg2 resultHandler:(/*^block*/id)arg3 ;
-(NSObject*<OS_dispatch_source>)invalidationTimer;
-(void)setInvalidationTimer:(NSObject*<OS_dispatch_source>)arg1 ;
@end

