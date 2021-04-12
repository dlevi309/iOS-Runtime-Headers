/*
* Generated on Thursday, January 14, 2021 at 2:20:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
*/


@protocol CNUIContactsAuthorizationControllerDelegate;
@class CNUIContactsAuthorizationStore, CNUICoreContactsAuthorizationModel, NSArray;

@interface CNUIContactsAuthorizationController : NSObject {

	id<CNUIContactsAuthorizationControllerDelegate> _delegate;
	CNUIContactsAuthorizationStore* _store;
	CNUICoreContactsAuthorizationModel* _model;

}

@property (nonatomic,readonly) CNUIContactsAuthorizationStore * store;                               //@synthesize store=_store - In the implementation block
@property (nonatomic,retain) CNUICoreContactsAuthorizationModel * model;                             //@synthesize model=_model - In the implementation block
@property (nonatomic,readonly) NSArray * bundleIdentifiersOfAppsWithContactsAccessInfo; 
@property (nonatomic,readonly) BOOL foundAppsWithContactsAccessInfo; 
@property (assign,nonatomic) id<CNUIContactsAuthorizationControllerDelegate> delegate;               //@synthesize delegate=_delegate - In the implementation block
+(id)authorizationPaneFooterLabel;
+(id)authorizationPaneContactsAppLabel;
+(id)authorizationPaneHeaderLabel;
+(id)validAuthorizationValues;
+(id)validAuthorizationLabelsForValues;
-(CNUICoreContactsAuthorizationModel *)model;
-(id)initWithBundleIdentifier:(id)arg1 ;
-(id)init;
-(CNUIContactsAuthorizationStore *)store;
-(id<CNUIContactsAuthorizationControllerDelegate>)delegate;
-(void)saveModel;
-(void)setDelegate:(id<CNUIContactsAuthorizationControllerDelegate>)arg1 ;
-(void)setModel:(CNUICoreContactsAuthorizationModel *)arg1 ;
-(id)createModel;
-(void)lazilyLoadIconsForRemoteItems;
-(id)nameOfAppWithBundleIdentifier:(id)arg1 ;
-(id)iconOfAppWithBundleIdentifier:(id)arg1 ;
-(BOOL)foundAppsWithContactsAccessInfo;
-(NSArray *)bundleIdentifiersOfAppsWithContactsAccessInfo;
-(id)authorizationLevelOfAppWithBundleIdentifier:(id)arg1 ;
-(void)setAuthorizationLevel:(id)arg1 ofAppWithBundleIdentifier:(id)arg2 ;
@end

