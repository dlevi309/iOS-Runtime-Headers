/*
* Generated on Monday, March 1, 2021 at 2:30:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@class NSDictionary, FBSScene, FBSSceneSpecification, NSSet, NSString, UNNotificationResponse, UIApplicationShortcutItem, CKShareMetadata;

@interface UISceneConnectionOptions : NSObject {

	NSDictionary* _launchOptionsDictionary;
	FBSScene* _fbsScene;
	FBSSceneSpecification* _specification;

}

@property (nonatomic,readonly) NSDictionary * _launchOptionsDictionary;                    //@synthesize launchOptionsDictionary=_launchOptionsDictionary - In the implementation block
@property (nonatomic,__weak,readonly) FBSScene * _fbsScene;                                //@synthesize fbsScene=_fbsScene - In the implementation block
@property (nonatomic,__weak,readonly) FBSSceneSpecification * _specification;              //@synthesize specification=_specification - In the implementation block
@property (nonatomic,copy,readonly) NSSet * URLContexts; 
@property (nonatomic,readonly) NSString * sourceApplication; 
@property (nonatomic,readonly) NSString * handoffUserActivityType; 
@property (nonatomic,copy,readonly) NSSet * userActivities; 
@property (nonatomic,readonly) UNNotificationResponse * notificationResponse; 
@property (nonatomic,readonly) UIApplicationShortcutItem * shortcutItem; 
@property (nonatomic,readonly) CKShareMetadata * cloudKitShareMetadata; 
-(id)description;
-(FBSScene *)_fbsScene;
-(FBSSceneSpecification *)_specification;
-(id)_initWithConnectionOptionsContext:(id)arg1 fbsScene:(id)arg2 specification:(id)arg3 ;
-(NSDictionary *)_launchOptionsDictionary;
-(NSString *)sourceApplication;
-(NSSet *)URLContexts;
-(NSString *)handoffUserActivityType;
-(NSSet *)userActivities;
-(UNNotificationResponse *)notificationResponse;
-(UIApplicationShortcutItem *)shortcutItem;
-(CKShareMetadata *)cloudKitShareMetadata;
@end

