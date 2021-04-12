/*
* Generated on Monday, March 1, 2021 at 2:31:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/


#import <MediaPlayer/MediaPlayer-Structs.h>
@class MPCloudController, MPCloudServiceStatusController, MPModelObject, ICUserIdentity;

@interface MPLibraryAddStatusObserver : NSObject {

	BOOL _needsStatusUpdate;
	MPCloudController* _cloudController;
	MPCloudServiceStatusController* _cloudServiceStatusController;
	MPLibraryAddStatusObserverConfiguration _configuration;
	unsigned long long _currentStatus;
	/*^block*/id _statusBlock;
	MPModelObject* _identifyingModelObject;
	ICUserIdentity* _userIdentity;

}

@property (nonatomic,readonly) ICUserIdentity * userIdentity;                                      //@synthesize userIdentity=_userIdentity - In the implementation block
@property (nonatomic,readonly) unsigned long long currentStatus;                                   //@synthesize currentStatus=_currentStatus - In the implementation block
@property (nonatomic,copy) id statusBlock;                                                         //@synthesize statusBlock=_statusBlock - In the implementation block
@property (nonatomic,readonly) MPLibraryAddStatusObserverConfiguration configuration;              //@synthesize configuration=_configuration - In the implementation block
@property (nonatomic,readonly) MPModelObject * identifyingModelObject;                             //@synthesize identifyingModelObject=_identifyingModelObject - In the implementation block
-(id)init;
-(void)dealloc;
-(MPLibraryAddStatusObserverConfiguration)configuration;
-(unsigned long long)currentStatus;
-(ICUserIdentity *)userIdentity;
-(MPModelObject *)identifyingModelObject;
-(void)_transientStateDidChangeNotification:(id)arg1 ;
-(unsigned long long)_calculateCurrentStatus;
-(void)_updateCurrentStatus;
-(id)statusBlock;
-(void)setStatusBlock:(id)arg1 ;
-(id)initWithUserIdentity:(id)arg1 ;
-(void)configureWithModelObject:(id)arg1 ;
-(void)setConfiguration:(MPLibraryAddStatusObserverConfiguration)arg1 identifyingModelObject:(id)arg2 ;
-(void)_allowsExplicitContentDidChangeNotification:(id)arg1 ;
-(void)_cloudLibraryEnabledDidChangeNotification:(id)arg1 ;
-(void)_subscriptionStatusDidChangeNotification:(id)arg1 ;
-(void)_updateInProgressDidChangeNotification:(id)arg1 ;
@end

