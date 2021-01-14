/*
* Generated on Thursday, January 14, 2021 at 2:28:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreBookkeeper.framework/StoreBookkeeper
*/


@class SBKStoreURLBagContext;

@interface SBKRequestHandler : NSObject {

	SBKStoreURLBagContext* _bagContext;

}

@property (nonatomic,readonly) SBKStoreURLBagContext * bagContext;              //@synthesize bagContext=_bagContext - In the implementation block
-(void)timeout;
-(id)initWithBagContext:(id)arg1 ;
-(void)cancel;
-(SBKStoreURLBagContext *)bagContext;
@end

