/*
* Generated on Monday, March 1, 2021 at 2:35:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Health/Plugins/ActivitySharingPlugin.bundle/ActivitySharingPlugin
*/

#import <libobjc.A.dylib/HDXPCListenerDelegate.h>
#import <libobjc.A.dylib/HDProfileExtension.h>
#import <libobjc.A.dylib/ASActivitySharingManagerProvider.h>
#import <libobjc.A.dylib/ASActivitySharingPluginInterface.h>

@class HDXPCListener, HDProfile, ASActivitySharingManager, NSString;

@interface ASActivitySharingProfileExtension : NSObject <HDXPCListenerDelegate, HDProfileExtension, ASActivitySharingManagerProvider, ASActivitySharingPluginInterface> {

	HDXPCListener* _listener;
	HDProfile* _profile;
	ASActivitySharingManager* _activitySharingManager;

}

@property (nonatomic,retain) ASActivitySharingManager * activitySharingManager;              //@synthesize activitySharingManager=_activitySharingManager - In the implementation block
@property (nonatomic,__weak,readonly) HDProfile * profile;                                   //@synthesize profile=_profile - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(HDProfile *)profile;
-(id)initWithProfile:(id)arg1 ;
-(id)listenerEndpointForClient:(id)arg1 error:(id*)arg2 ;
-(id)exportObjectForListener:(id)arg1 client:(id)arg2 error:(id*)arg3 ;
-(id)allFriends;
-(ASActivitySharingManager *)activitySharingManager;
-(void)setActivitySharingManager:(ASActivitySharingManager *)arg1 ;
@end

