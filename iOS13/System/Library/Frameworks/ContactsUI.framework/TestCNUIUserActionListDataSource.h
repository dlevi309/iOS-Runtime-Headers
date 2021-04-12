/*
* Generated on Monday, March 1, 2021 at 2:30:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
*/

#import <libobjc.A.dylib/CNUIUserActionListDataSource.h>

@class NSDictionary, CNContact, NSString;

@interface TestCNUIUserActionListDataSource : NSObject <CNUIUserActionListDataSource> {

	BOOL _tracksChanges;
	NSDictionary* _userActionListModelResultBlocksByActionTypeAskedFor;
	NSDictionary* _actionsByActionTypeByContact;
	CNContact* _contact;

}

@property (nonatomic,retain) CNContact * contact;                                                             //@synthesize contact=_contact - In the implementation block
@property (nonatomic,retain) NSDictionary * userActionListModelResultBlocksByActionTypeAskedFor;              //@synthesize userActionListModelResultBlocksByActionTypeAskedFor=_userActionListModelResultBlocksByActionTypeAskedFor - In the implementation block
@property (nonatomic,readonly) NSDictionary * actionsByActionTypeByContact;                                   //@synthesize actionsByActionTypeByContact=_actionsByActionTypeByContact - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) BOOL tracksChanges;                                                              //@synthesize tracksChanges=_tracksChanges - In the implementation block
+(id)allActionTypes;
+(id)allSupportedActionTypes;
+(id)allSupportedActionTypesWithCapabilities:(id)arg1 ;
-(CNContact *)contact;
-(void)setContact:(CNContact *)arg1 ;
-(id)actionTypesForConsumer:(id)arg1 ;
-(id)consumer:(id)arg1 actionModelsForActionType:(id)arg2 handler:(/*^block*/id)arg3 ;
-(id)consumer:(id)arg1 actionModelsForActionType:(id)arg2 ;
-(id)consumer:(id)arg1 localizedDisplayNameForActionType:(id)arg2 ;
-(id)consumer:(id)arg1 localizedButtonDisplayNameForActionType:(id)arg2 ;
-(id)consumer:(id)arg1 localizedDisplayNameForButtonWithDefaultAction:(id)arg2 actionType:(id)arg3 ;
-(id)consumer:(id)arg1 imageForActionType:(id)arg2 ;
-(id)thirdPartyTargetsForActionTypes:(id)arg1 ;
-(id)thirdPartyActionsForContactProperty:(id)arg1 ;
-(id)thirdPartyActionsForCurrentContactAndPropertyKey:(id)arg1 identifier:(id)arg2 ;
-(BOOL)tracksChanges;
-(void)setTracksChanges:(BOOL)arg1 ;
-(id)initWithActionsByActionTypeByContact:(id)arg1 ;
-(NSDictionary *)userActionListModelResultBlocksByActionTypeAskedFor;
-(void)setUserActionListModelResultBlocksByActionTypeAskedFor:(NSDictionary *)arg1 ;
-(NSDictionary *)actionsByActionTypeByContact;
@end

