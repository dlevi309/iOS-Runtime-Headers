/*
* Generated on Monday, March 1, 2021 at 2:33:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMFLogging.h>

@class NSString, NSMutableDictionary;

@interface HMDApplicationInfo : HMFObject <HMFLogging> {

	BOOL _spiClient;
	NSString* _teamIdentifier;
	NSString* _bundleIdentifier;
	NSString* _companionAppBundleIdentifier;
	NSMutableDictionary* _activeProcesses;

}

@property (nonatomic,readonly) NSMutableDictionary * activeProcesses;                     //@synthesize activeProcesses=_activeProcesses - In the implementation block
@property (getter=isSPIClient,nonatomic,readonly) BOOL spiClient;                         //@synthesize spiClient=_spiClient - In the implementation block
@property (nonatomic,copy,readonly) NSString * teamIdentifier;                            //@synthesize teamIdentifier=_teamIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * bundleIdentifier;                          //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * companionAppBundleIdentifier;              //@synthesize companionAppBundleIdentifier=_companionAppBundleIdentifier - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
-(id)init;
-(NSString *)description;
-(NSString *)bundleIdentifier;
-(NSString *)teamIdentifier;
-(id)logIdentifier;
-(NSString *)companionAppBundleIdentifier;
-(BOOL)isSPIClient;
-(NSMutableDictionary *)activeProcesses;
-(id)initWithBundleIdentifier:(id)arg1 teamIdentifier:(id)arg2 companionAppBundleIdentifier:(id)arg3 spiClient:(BOOL)arg4 ;
@end

