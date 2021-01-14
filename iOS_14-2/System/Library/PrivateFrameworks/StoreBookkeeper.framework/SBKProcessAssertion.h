/*
* Generated on Thursday, January 14, 2021 at 2:28:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreBookkeeper.framework/StoreBookkeeper
*/


@protocol OS_dispatch_queue;
@class NSObject, BKSProcessAssertion;

@interface SBKProcessAssertion : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	/*^block*/id _expirationBlock;
	unsigned long long _identifier;
	BKSProcessAssertion* _bkProcessAssertion;
	id _expirationObserver;

}

@property (readonly) unsigned long long identifier;                       //@synthesize identifier=_identifier - In the implementation block
@property (retain) BKSProcessAssertion * bkProcessAssertion;              //@synthesize bkProcessAssertion=_bkProcessAssertion - In the implementation block
@property (retain) id expirationObserver;                                 //@synthesize expirationObserver=_expirationObserver - In the implementation block
-(id)description;
-(void)invalidate;
-(unsigned long long)identifier;
-(void)_expireBackgroundTask;
-(void)dealloc;
-(void)setBkProcessAssertion:(BKSProcessAssertion *)arg1 ;
-(void)setExpirationObserver:(id)arg1 ;
-(void)_onQueueSetBkProcessAssertion:(id)arg1 ;
-(id)initWithExpirationBlock:(/*^block*/id)arg1 debugDescription:(id)arg2 ;
-(BKSProcessAssertion *)bkProcessAssertion;
-(id)expirationObserver;
@end

