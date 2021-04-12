/*
* Generated on Thursday, January 14, 2021 at 2:26:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ActivityAchievementsDaemon.framework/ActivityAchievementsDaemon
*/

#import <libobjc.A.dylib/ACHTemplateSourceDelegate.h>

@protocol ACHTemplateAssetRegistryDelegate, OS_dispatch_queue;
@class NSObject, ACHRemoteTemplateAvailabilityKeyProvider, NSMutableDictionary;

@interface ACHTemplateAssetRegistry : NSObject <ACHTemplateSourceDelegate> {

	NSObject*<ACHTemplateAssetRegistryDelegate> _delegate;
	ACHRemoteTemplateAvailabilityKeyProvider* _remoteTemplateAvailabilityKeyProvider;
	NSMutableDictionary* _templateSourcesByIdentifier;
	NSObject*<OS_dispatch_queue> _serialQueue;

}

@property (nonatomic,retain) ACHRemoteTemplateAvailabilityKeyProvider * remoteTemplateAvailabilityKeyProvider;              //@synthesize remoteTemplateAvailabilityKeyProvider=_remoteTemplateAvailabilityKeyProvider - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * templateSourcesByIdentifier;                                             //@synthesize templateSourcesByIdentifier=_templateSourcesByIdentifier - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> serialQueue;                                                      //@synthesize serialQueue=_serialQueue - In the implementation block
@property (assign,nonatomic,__weak) NSObject*<ACHTemplateAssetRegistryDelegate> delegate;                                   //@synthesize delegate=_delegate - In the implementation block
-(void)setRemoteTemplateAvailabilityKeyProvider:(ACHRemoteTemplateAvailabilityKeyProvider *)arg1 ;
-(ACHRemoteTemplateAvailabilityKeyProvider *)remoteTemplateAvailabilityKeyProvider;
-(NSObject*<OS_dispatch_queue>)serialQueue;
-(NSObject*<ACHTemplateAssetRegistryDelegate>)delegate;
-(void)setSerialQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setDelegate:(NSObject*<ACHTemplateAssetRegistryDelegate>)arg1 ;
-(NSMutableDictionary *)templateSourcesByIdentifier;
-(void)_setBundleURLsForAchievement:(id)arg1 ;
-(void)templateSourceDidUpdateAssets:(id)arg1 ;
-(id)initWithRemoteTemplateAvailabilityKeyProvider:(id)arg1 ;
-(void)registerTemplateSource:(id)arg1 ;
-(void)deregisterTemplateSource:(id)arg1 ;
-(void)populateResourcePropertiesForAchievement:(id)arg1 ;
-(void)setTemplateSourcesByIdentifier:(NSMutableDictionary *)arg1 ;
@end

