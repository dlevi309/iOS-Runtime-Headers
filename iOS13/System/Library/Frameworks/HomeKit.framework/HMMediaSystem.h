/*
* Generated on Monday, March 1, 2021 at 2:32:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
*/

#import <libobjc.A.dylib/HMFLogging.h>
#import <libobjc.A.dylib/HMFMessageReceiver.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/HMObjectMerge.h>
#import <libobjc.A.dylib/HMControllable.h>
#import <libobjc.A.dylib/HMMediaObject.h>
#import <libobjc.A.dylib/HMApplicationData.h>
#import <libobjc.A.dylib/HMAccessorySettingsContainer.h>

@protocol HMMediaSystemDelegate;
@class HMMediaSession, HMAccessorySettings, HMApplicationData, HMHome, HMFUnfairLock, NSString, NSUUID, HMSymptomsHandler, _HMContext, HMMutableArray, NSArray, HMAccessoryCategory;

@interface HMMediaSystem : NSObject <HMFLogging, HMFMessageReceiver, NSSecureCoding, HMObjectMerge, HMControllable, HMMediaObject, HMApplicationData, HMAccessorySettingsContainer> {

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

}

@property (nonatomic,retain) _HMContext * context;                                            //@synthesize context=_context - In the implementation block
@property (assign,nonatomic,__weak) HMHome * home;                                            //@synthesize home=_home - In the implementation block
@property (nonatomic,readonly) NSUUID * uuid;                                                 //@synthesize uuid=_uuid - In the implementation block
@property (nonatomic,retain) HMMutableArray * componentsArray;                                //@synthesize componentsArray=_componentsArray - In the implementation block
@property (nonatomic,retain) HMApplicationData * applicationData;                             //@synthesize applicationData=_applicationData - In the implementation block
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
@property (copy,readonly) HMMediaSession * mediaSession; 
@property (readonly) HMAccessorySettings * settings;                                          //@synthesize settings=_settings - In the implementation block
@property (__weak,readonly) HMHome * containerHome; 
+(BOOL)supportsSecureCoding;
+(id)logCategory;
+(id)mediaSystemWithDictionary:(id)arg1 home:(id)arg2 ;
-(id)init;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(NSString *)name;
-(void)_invalidate;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id<HMMediaSystemDelegate>)delegate;
-(void)setDelegate:(id<HMMediaSystemDelegate>)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(HMAccessoryCategory *)category;
-(NSUUID *)uuid;
-(_HMContext *)context;
-(NSArray *)components;
-(NSUUID *)uniqueIdentifier;
-(void)setContext:(_HMContext *)arg1 ;
-(HMHome *)home;
-(HMAccessorySettings *)settings;
-(void)setSettings:(HMAccessorySettings *)arg1 ;
-(void)setHome:(HMHome *)arg1 ;
-(HMApplicationData *)applicationData;
-(id)logIdentifier;
-(NSUUID *)messageTargetUUID;
-(NSObject*<OS_dispatch_queue>)messageReceiveQueue;
-(void)updateApplicationData:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)setApplicationData:(HMApplicationData *)arg1 ;
-(BOOL)isCompatible;
-(BOOL)_mergeWithNewObject:(id)arg1 operations:(id)arg2 ;
-(void)_registerNotificationHandlers;
-(void)__configureWithContext:(id)arg1 home:(id)arg2 ;
-(HMMediaSession *)mediaSession;
-(BOOL)isControllable;
-(id)initWithHome:(id)arg1 uuid:(id)arg2 name:(id)arg3 configuredName:(id)arg4 compatible:(BOOL)arg5 components:(id)arg6 settings:(id)arg7 symptomHandler:(id)arg8 ;
-(HMSymptomsHandler *)symptomsHandler;
-(void)_handleRootSettingsUpdated:(id)arg1 ;
-(void)_handleSystemUpdatedNotification:(id)arg1 ;
-(HMMutableArray *)componentsArray;
-(void)_updateApplicationData:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)notifyDelegateOfUpdatedSettings:(id)arg1 ;
-(BOOL)_mergeWithNewObject:(id)arg1 operations:(id)arg2 includeSettingsAndAppData:(BOOL)arg3 ;
-(void)notifyDelegateOfUpdatedComponents:(id)arg1 ;
-(void)notifyDelegateOfUpdatedName:(id)arg1 ;
-(NSString *)configuredName;
-(void)setConfiguredName:(NSString *)arg1 ;
-(void)notifyDelegateOfUpdatedConfiguredName:(id)arg1 ;
-(void)notifyDelegateOfUpdatedApplicationData:(id)arg1 ;
-(void)notifyDelegateOfUpdatedMediaSession:(id)arg1 ;
-(HMHome *)containerHome;
-(void)_updateAccessoryReference;
-(void)updateMediaSession:(id)arg1 forMediaProfile:(id)arg2 ;
-(void)setComponentsArray:(HMMutableArray *)arg1 ;
@end

