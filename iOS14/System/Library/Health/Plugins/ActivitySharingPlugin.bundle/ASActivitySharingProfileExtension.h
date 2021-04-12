/*
* Generated on Thursday, January 14, 2021 at 2:29:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Health/Plugins/ActivitySharingPlugin.bundle/ActivitySharingPlugin
*/

#import <libobjc.A.dylib/HDProfileExtension.h>
#import <libobjc.A.dylib/ASActivitySharingManagerProvider.h>
#import <libobjc.A.dylib/ASActivitySharingPluginInterface.h>

@class HDProfile, ASActivitySharingManager, NSString;

@interface ASActivitySharingProfileExtension : NSObject <HDProfileExtension, ASActivitySharingManagerProvider, ASActivitySharingPluginInterface> {

	HDProfile* _profile;
	ASActivitySharingManager* _activitySharingManager;

}

@property (nonatomic,retain) ASActivitySharingManager * activitySharingManager;              //@synthesize activitySharingManager=_activitySharingManager - In the implementation block
@property (nonatomic,__weak,readonly) HDProfile * profile;                                   //@synthesize profile=_profile - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)activitySharingManagerForProfile:(id)arg1 ;
-(ASActivitySharingManager *)activitySharingManager;
-(id)initWithProfile:(id)arg1 ;
-(void)setActivitySharingManager:(ASActivitySharingManager *)arg1 ;
-(id)allFriends;
-(HDProfile *)profile;
@end

