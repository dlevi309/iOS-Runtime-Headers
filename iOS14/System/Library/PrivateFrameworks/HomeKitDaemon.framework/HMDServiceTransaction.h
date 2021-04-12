/*
* Generated on Thursday, January 14, 2021 at 2:25:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HomeKitDaemon/HMDBackingStoreModelObject.h>

@protocol OS_dispatch_group;
@class NSString, NSObject, NSNumber, NSArray;

@interface HMDServiceTransaction : HMDBackingStoreModelObject {

	NSString* _lastSeenConfiguredNameLocal;
	NSObject*<OS_dispatch_group> _configurationTracker;

}

@property (nonatomic,retain) NSNumber * instanceID; 
@property (nonatomic,retain) NSString * lastSeenConfiguredNameLocal;                         //@synthesize lastSeenConfiguredNameLocal=_lastSeenConfiguredNameLocal - In the implementation block
@property (nonatomic,retain) NSString * name; 
@property (nonatomic,retain) NSString * providedName; 
@property (nonatomic,retain) NSString * expectedConfiguredName; 
@property (nonatomic,retain) NSString * serviceType; 
@property (nonatomic,retain) NSString * associatedServiceType; 
@property (nonatomic,retain) NSString * serviceSubtype; 
@property (nonatomic,retain) NSNumber * labelIndex; 
@property (nonatomic,retain) NSNumber * labelNamespace; 
@property (nonatomic,retain) NSNumber * configurationState; 
@property (nonatomic,retain) NSArray * linkedServices; 
@property (nonatomic,retain) NSNumber * lastKnownDiscoveryMode; 
@property (nonatomic,retain) NSNumber * lastKnownOperatingState; 
@property (nonatomic,retain) NSNumber * lastKnownOperatingStateAbnormalReasons; 
@property (nonatomic,retain) NSNumber * mediaSourceIdentifier; 
@property (nonatomic,retain) NSArray * mediaSourceDisplayOrder; 
@property (nonatomic,retain) NSNumber * serviceProperties; 
@property (nonatomic,retain) NSArray * characteristics; 
@property (nonatomic,retain) NSObject*<OS_dispatch_group> configurationTracker;              //@synthesize configurationTracker=_configurationTracker - In the implementation block
@property (nonatomic,retain) NSNumber * hidden; 
@property (nonatomic,retain) NSNumber * primary; 
+(id)properties;
-(void)setConfigurationTracker:(NSObject*<OS_dispatch_group>)arg1 ;
-(NSObject*<OS_dispatch_group>)configurationTracker;
-(NSString *)lastSeenConfiguredNameLocal;
-(void)setLastSeenConfiguredNameLocal:(NSString *)arg1 ;
@end

