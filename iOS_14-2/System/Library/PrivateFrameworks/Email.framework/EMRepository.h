/*
* Generated on Thursday, January 14, 2021 at 2:23:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)performQuery:(id)arg1 withObserver:(id)arg2 ;
-(Protocol *)interfaceProtocol;
-(EFFuture *)interfaceFuture;
-(void)setObserverScheduler:(id<EFScheduler>)arg1 ;
-(id)trampoliningObserverForObserver:(id)arg1 ;
-(void)prepareRepositoryObjects:(id)arg1 ;
@end

