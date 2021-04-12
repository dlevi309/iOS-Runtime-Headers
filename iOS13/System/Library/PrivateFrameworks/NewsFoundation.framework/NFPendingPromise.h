/*
* Generated on Monday, March 1, 2021 at 2:32:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsFoundation.framework/NewsFoundation
*/


@class NFPromise;

@interface NFPendingPromise : NSObject {

	NFPromise* _promise;
	/*^block*/id _resolve;
	/*^block*/id _reject;

}

@property (nonatomic,retain) NFPromise * promise;              //@synthesize promise=_promise - In the implementation block
@property (nonatomic,copy) id resolve;                         //@synthesize resolve=_resolve - In the implementation block
@property (nonatomic,copy) id reject;                          //@synthesize reject=_reject - In the implementation block
-(id)init;
-(id)resolve;
-(NFPromise *)promise;
-(void)setPromise:(NFPromise *)arg1 ;
-(id)reject;
-(void)setResolve:(id)arg1 ;
-(void)setReject:(id)arg1 ;
@end

