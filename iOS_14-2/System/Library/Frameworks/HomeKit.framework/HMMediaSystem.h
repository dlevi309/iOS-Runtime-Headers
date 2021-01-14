/*
* Generated on Thursday, January 14, 2021 at 2:22:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
*/

#import <libobjc.A.dylib/HMFLogging.h>
#import <libobjc.A.dylib/HMFMessageReceiver.h>
#import <libobjc.A.dylib/HMControllable.h>
#import <libobjc.A.dylib/HMMediaDestinationInternal.h>
#import <libobjc.A.dylib/HMObjectMerge.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/HMAccessorySettingsContainer.h>
#import <libobjc.A.dylib/HMApplicationData.h>
#import <libobjc.A.dylib/HMMediaDestination.h>
#import <libobjc.A.dylib/HMMediaObject.h>

@protocol HMMediaSystemDelegate;
@class NSArray, NSString, HMHome, HMApplicationData, HMMediaSession, HMAccessorySettings, HMFUnfairLock, NSUUID, HMSymptomsHandler, _HMContext, HMMutableArray, HMMediaDestination, HMAccessoryCategory;

@interface HMMediaSystem : NSObject <HMFLogging, HMFMessageReceiver, HMControllable, HMMediaDestinationInternal, HMObjectMerge, NSSecureCoding, HMAccessorySettingsContainer, HMApplicationData, HMMediaDestination, HMMediaObject> {

	HMFUnfairLock* _lock;
	BOOL _compatible;
	NSString* _name;
	NSString* _configuredName;
	NSUUID* _uniqueIdentifier;
	HMAccessorySettings* _settings;
	id<HMMediaSystemDelegate> _delegate;
	HMApplicationData* _applicationData;
	HMHome* _home;
	HMSymptomsHandler* _symptomsHandler;
	_HMContext* _context;
	NSUUID* _uuid;
	HMMutableArray* _componentsArray;
	HMMediaDestination* _audioDestination;

}

@property (nonatomic,retain) _HMContext * context;                                            //@synthesize context=_context - In the implementation block
@property (assign,nonatomic,__weak) HMHome * home;                                            //@synthesize home=_home - In the implementation block
@property (nonatomic,readonly) NSUUID * uuid;                                                 //@synthesize uuid=_uuid - In the implementation block
@property (nonatomic,retain) HMMutableArray * componentsArray;                                //@synthesize componentsArray=_componentsArray - In the implementation block
@property (nonatomic,retain) HMApplicationData * applicationData;                             //@synthesize applicationData=_applicationData - In the implementation block
@property (retain) HMMediaDestination * audioDestination;                                     //@synthesize audioDestination=_audioDestination - In the implementation block
@property (__weak) id<HMMediaSystemDelegate> delegate;                                        //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) NSString * name;                                               //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) NSString * configuredName;                                     //@synthesize configuredName=_configuredName - In the implementation block
@property (nonatomic,readonly) NSUUID * uniqueIdentifier;                                     //@synthesize uniqueIdentifier=_uniqueIdentifier - In the implementation block
@property (getter=isCompatible,nonatomic,readonly) BOOL compatible;                           //@synthesize compatible=_compatible - In the implementation block
@property (nonatomic,readonly) NSArray * components; 
@property (nonatomic,readonly) HMAccessoryCategory * category; 
@property (nonatomic,readonly) HMSymptomsHandler * symptomsHandler;                           //@synthesize symptomsHandler=_symptomsHandler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSUUID * messageTargetUUID; 
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> messageReceiveQueue; 
@property (getter=isControllable,readonly) BOOL controllable; 
@property (copy,readonly) NSArray * audioDestinationMediaProfiles; 
@property (copy,readonly) NSString * audioDestinationParentIdentifier; 
@property (copy,readonly) NSString * audioDestinationIdentifier; 
@property (copy,readonly) NSString * audioDestinationName; 
@property (readonly) long long audioDestinationType; 
@property (readonly) BOOL supportsAudioDestination; 
@property (readonly) BOOL supportsAudioGroup; 
@property (__weak,readonly) HMHome * containerHome; 
@property (copy,readonly) HMMediaSession * mediaSession; 
@property (readonly) HMAccessorySettings * settings;                                          //@synthesize settings=_settings - In the implementation block
+(id)logCategory;
+(BOOL)supportsSecureCoding;
+(id)mediaSystemWithDictionary:(id)arg1 home:(id)arg2 ;
-(NSUUID *)messageTargetUUID;
-(NSObject*<OS_dispatch_queue>)messageReceiveQueue;
-(NSUUID *)uuid;
-(id)initWithHome:(id)arg1 uuid:(id)arg2 name:(id)arg3 configuredName:(id)arg4 compatible:(BOOL)arg5 components:(id)arg6 settings:(id)arg7 symptomHandler:(id)arg8 ;
-(HMMutableArray *)componentsArray;
-(HMMediaDestination *)audioDestination;
-(HMSymptomsHandler *)symptomsHandler;
-(void)_handleRootSettingsUpdated:(id)arg1 ;
-(void)_handleSystemUpdatedNotification:(id)arg1 ;
-(void)notifyDelegateOfUpdatedSettings:(id)arg1 ;
-(BOOL)_mergeWithNewObject:(id)arg1 operations:(id)arg2 includeSettingsAndAppData:(BOOL)arg3 ;
-(void)notifyDelegateOfUpdatedComponents:(id)arg1 ;
-(void)notifyDelegateOfUpdatedName:(id)arg1 ;
-(void)setConfiguredName:(NSString *)arg1 ;
-(void)notifyDelegateOfUpdatedConfiguredName:(id)arg1 ;
-(void)notifyDelegateOfUpdatedApplicationData:(id)arg1 ;
-(void)setAudioDestination:(HMMediaDestination *)arg1 ;
-(void)notifyDelegateOfUpdatedAudioDestination;
-(void)notifyDelegateOfUpdatedMediaSession:(id)arg1 ;
-(HMHome *)containerHome;
-(void)_updateAccessoryReference;
-(void)updateMediaSession:(id)arg1 forMediaProfile:(id)arg2 ;
-(void)setComponentsArray:(HMMutableArray *)arg1 ;
-(id<HMMediaSystemDelegate>)delegate;
-(BOOL)isCompatible;
-(void)encodeWithCoder:(id)arg1 ;
-(NSUUID *)uniqueIdentifier;
-(HMAccessoryCategory *)category;
-(id)logIdentifier;
-(void)_updateApplicationData:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(_HMContext *)context;
-(void)setApplicationData:(HMApplicationData *)arg1 ;
-(void)setSettings:(HMAccessorySettings *)arg1 ;
-(NSString *)name;
-(NSArray *)components;
-(void)setDelegate:(id<HMMediaSystemDelegate>)arg1 ;
-(NSString *)description;
-(HMApplicationData *)applicationData;
-(BOOL)supportsAudioDestination;
-(NSString *)audioDestinationIdentifier;
-(NSString *)configuredName;
-(HMAccessorySettings *)settings;
-(void)updateApplicationData:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(BOOL)_mergeWithNewObject:(id)arg1 operations:(id)arg2 ;
-(unsigned long long)hash;
-(void)_unconfigureContext;
-(void)_unconfigure;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)audioDestinationName;
-(long long)audioDestinationType;
-(BOOL)supportsAudioGroup;
-(void)updateAudioDestinationSupportedOptions:(unsigned long long)arg1 completion:(/*^block*/id)arg2 ;
-(NSArray *)audioDestinationMediaProfiles;
-(NSString *)audioDestinationParentIdentifier;
-(void)setName:(NSString *)arg1 ;
-(void)__configureWithContext:(id)arg1 home:(id)arg2 ;
-(void)callCompletionHandler:(/*^block*/id)arg1 error:(id)arg2 ;
-(void)callCompletionHandler:(/*^block*/id)arg1 ;
-(HMMediaSession *)mediaSession;
-(void)setHome:(HMHome *)arg1 ;
-(void)_registerNotificationHandlers;
-(BOOL)isControllable;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
-(HMHome *)home;
-(void)setContext:(_HMContext *)arg1 ;
@end

