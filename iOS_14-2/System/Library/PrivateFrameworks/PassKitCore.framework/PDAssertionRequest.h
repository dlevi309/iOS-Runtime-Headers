/*
* Generated on Thursday, January 14, 2021 at 2:21:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)resultHandler;
-(void)setAssertion:(PDAssertion *)arg1 ;
-(PDAssertion *)assertion;
-(id)initWithAssertion:(id)arg1 delegate:(id)arg2 resultHandler:(/*^block*/id)arg3 ;
-(NSObject*<OS_dispatch_source>)invalidationTimer;
-(void)setInvalidationTimer:(NSObject*<OS_dispatch_source>)arg1 ;
-(unsigned long long)hash;
-(void)setResultHandler:(id)arg1 ;
@end

