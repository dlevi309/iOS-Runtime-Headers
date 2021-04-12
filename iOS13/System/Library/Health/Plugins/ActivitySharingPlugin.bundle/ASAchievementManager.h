/*
* Generated on Monday, March 1, 2021 at 2:35:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Health/Plugins/ActivitySharingPlugin.bundle/ActivitySharingPlugin
*/

#import <libobjc.A.dylib/ASCompetitionTemplateSourceDataProvider.h>
#import <libobjc.A.dylib/ASCompetitionAwardingSourceDataProvider.h>
#import <libobjc.A.dylib/ASFriendListObserver.h>
#import <libobjc.A.dylib/ASActivitySharingManagerReadyObserver.h>

@class NSSet, HDProfile, ASFriendListManager, ASCompetitionAwardingSource, ASCompetitionTemplateSource, NSString;

@interface ASAchievementManager : NSObject <ASCompetitionTemplateSourceDataProvider, ASCompetitionAwardingSourceDataProvider, ASFriendListObserver, ASActivitySharingManagerReadyObserver> {

	HDProfile* _profile;
	ASFriendListManager* _friendListManager;
	ASCompetitionAwardingSource* _competitionAwardingSource;
	ASCompetitionTemplateSource* _competitionTemplateSource;
	BOOL _isWatch;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSSet * friends; 
-(NSSet *)friends;
-(id)friendWithUUID:(id)arg1 ;
-(void)removeAllTemplates;
-(void)activitySharingManagerReady:(id)arg1 ;
-(void)removeUnusedTemplatesForFriendWithUUID:(id)arg1 ;
-(void)_removeUnusedTemplatesForFriendWithUUID:(id)arg1 templateStore:(id)arg2 ;
-(void)friendListDidUpdate:(id)arg1 ;
-(void)friendListDidLoadCompetitions;
-(id)initWithIsWatch:(BOOL)arg1 ;
-(void)requestTemplateUpdate;
-(void)requestEarnedInstanceUpdate;
-(void)removeAllUnusedTemplates;
@end

