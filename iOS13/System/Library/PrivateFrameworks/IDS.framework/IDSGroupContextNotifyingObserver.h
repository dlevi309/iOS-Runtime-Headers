/*
* Generated on Monday, March 1, 2021 at 2:30:41 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/IDS
*/

#import <IDS/IDSGroupContextObserverDaemonProtocol.h>

@class NSMutableSet;

@interface IDSGroupContextNotifyingObserver : NSObject <IDSGroupContextObserverDaemonProtocol> {

	NSMutableSet* _delegates;

}

@property (nonatomic,retain) NSMutableSet * delegates;              //@synthesize delegates=_delegates - In the implementation block
-(id)init;
-(void)dealloc;
-(void)addDelegate:(id)arg1 ;
-(void)removeDelegate:(id)arg1 ;
-(void)didCreateGroup:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)didCacheGroup:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)didUpdateGroup:(id)arg1 withNewGroup:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)didReceiveDecryptionFailureForGroup:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)didReceiveRegistrationIdentityUpdateWithCompletion:(/*^block*/id)arg1 ;
-(NSMutableSet *)delegates;
-(void)setDelegates:(NSMutableSet *)arg1 ;
@end

