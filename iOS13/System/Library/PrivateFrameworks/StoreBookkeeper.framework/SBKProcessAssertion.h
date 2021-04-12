/*
* Generated on Monday, March 1, 2021 at 2:33:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(id)description;
-(void)invalidate;
-(unsigned long long)identifier;
-(void)_expireBackgroundTask;
-(void)setBkProcessAssertion:(BKSProcessAssertion *)arg1 ;
-(void)setExpirationObserver:(id)arg1 ;
-(void)_onQueueSetBkProcessAssertion:(id)arg1 ;
-(id)initWithExpirationBlock:(/*^block*/id)arg1 debugDescription:(id)arg2 ;
-(BKSProcessAssertion *)bkProcessAssertion;
-(id)expirationObserver;
@end

