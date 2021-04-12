/*
* Generated on Monday, March 1, 2021 at 2:32:30 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Email.framework/Email
*/


@protocol EFScheduler;
@class Protocol, EFFuture;

@interface EMRepository : NSObject {

	id<EFScheduler> _observerScheduler;
	Protocol* _interfaceProtocol;
	EFFuture* _interfaceFuture;

}

@property (nonatomic,retain) id<EFScheduler> observerScheduler;              //@synthesize observerScheduler=_observerScheduler - In the implementation block
@property (readonly) Protocol * interfaceProtocol;                           //@synthesize interfaceProtocol=_interfaceProtocol - In the implementation block
@property (readonly) EFFuture * interfaceFuture;                             //@synthesize interfaceFuture=_interfaceFuture - In the implementation block
-(id)initInternal;
-(id<EFScheduler>)observerScheduler;
-(void)setObserverScheduler:(id<EFScheduler>)arg1 ;
-(Protocol *)interfaceProtocol;
-(id)performQuery:(id)arg1 withObserver:(id)arg2 ;
-(id)trampoliningObserverForObserver:(id)arg1 ;
-(void)prepareRepositoryObjects:(id)arg1 ;
-(EFFuture *)interfaceFuture;
@end

