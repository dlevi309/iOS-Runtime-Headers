/*
* Generated on Thursday, January 14, 2021 at 2:21:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/


#import <MediaPlayer/MediaPlayer-Structs.h>
@class MPCloudController, MPCloudServiceStatusController, MPModelObject, ICUserIdentity;

@interface MPLibraryAddStatusObserver : NSObject {

	BOOL _needsStatusUpdate;
	MPCloudController* _cloudController;
	MPCloudServiceStatusController* _cloudServiceStatusController;
	MPLibraryAddStatusObserverConfiguration _configuration;
	long long _currentStatus;
	/*^block*/id _statusBlock;
	MPModelObject* _identifyingModelObject;
	ICUserIdentity* _userIdentity;

}

@property (nonatomic,readonly) ICUserIdentity * userIdentity;                                      //@synthesize userIdentity=_userIdentity - In the implementation block
@property (nonatomic,readonly) long long currentStatus;                                            //@synthesize currentStatus=_currentStatus - In the implementation block
@property (nonatomic,copy) id statusBlock;                                                         //@synthesize statusBlock=_statusBlock - In the implementation block
@property (nonatomic,readonly) MPLibraryAddStatusObserverConfiguration configuration;              //@synthesize configuration=_configuration - In the implementation block
@property (nonatomic,readonly) MPModelObject * identifyingModelObject;                             //@synthesize identifyingModelObject=_identifyingModelObject - In the implementation block
-(id)initWithUserIdentity:(id)arg1 ;
-(void)_updateCurrentStatus;
-(ICUserIdentity *)userIdentity;
-(id)init;
-(void)configureWithModelObject:(id)arg1 ;
-(void)_transientStateDidChangeNotification:(id)arg1 ;
-(void)setConfiguration:(MPLibraryAddStatusObserverConfiguration)arg1 identifyingModelObject:(id)arg2 ;
-(void)_allowsExplicitContentDidChangeNotification:(id)arg1 ;
-(MPLibraryAddStatusObserverConfiguration)configuration;
-(void)_subscriptionStatusDidChangeNotification:(id)arg1 ;
-(void)setStatusBlock:(id)arg1 ;
-(void)_updateInProgressDidChangeNotification:(id)arg1 ;
-(id)statusBlock;
-(void)_cloudLibraryEnabledDidChangeNotification:(id)arg1 ;
-(MPModelObject *)identifyingModelObject;
-(long long)currentStatus;
-(void)dealloc;
-(long long)_calculateCurrentStatus;
@end

