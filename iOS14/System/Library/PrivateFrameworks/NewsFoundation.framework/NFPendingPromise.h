/*
* Generated on Thursday, January 14, 2021 at 2:24:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)reject;
-(void)setResolve:(id)arg1 ;
-(NFPromise *)promise;
-(id)resolve;
-(void)setPromise:(NFPromise *)arg1 ;
-(void)setReject:(id)arg1 ;
@end

