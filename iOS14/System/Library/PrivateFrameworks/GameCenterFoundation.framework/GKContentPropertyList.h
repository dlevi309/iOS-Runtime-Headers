/*
* Generated on Thursday, January 14, 2021 at 2:24:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
*/


@class NSDictionary, NSString;

@interface GKContentPropertyList : NSObject {

	NSDictionary* _root;
	NSString* _bundleID;
	NSDictionary* _achievementsByIdentifier;
	NSDictionary* _leaderboardsByIdentifier;
	NSDictionary* _leaderboardSetsByIdentifier;

}

@property (retain) NSString * bundleID;              //@synthesize bundleID=_bundleID - In the implementation block
@property (retain) NSDictionary * root;              //@synthesize root=_root - In the implementation block
+(id)localPropertyListForGameDescriptor:(id)arg1 ;
-(id)localizedStringForKey:(id)arg1 ;
-(NSDictionary *)root;
-(void)setBundleID:(NSString *)arg1 ;
-(void)setRoot:(NSDictionary *)arg1 ;
-(id)_mainBundle;
-(NSString *)bundleID;
-(id)_rootDictionary;
-(void)dealloc;
-(id)achievementDescriptions;
-(id)achievementDescriptionForIdentifier:(id)arg1 ;
-(id)localizedStringForKey:(id)arg1 forLocalization:(id)arg2 ;
-(id)imageNameForDashboardLogo;
-(id)leaderboardDescriptions;
-(id)leaderboardSetDescriptions;
-(id)leaderboardDescriptionForIdentifier:(id)arg1 ;
-(id)leaderboardSetDescriptionForIdentifier:(id)arg1 ;
@end

