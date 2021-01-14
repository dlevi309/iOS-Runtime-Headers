/*
* Generated on Thursday, January 14, 2021 at 2:20:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
@property (assign,nonatomic) BOOL tracksChanges;                                                              //@synthesize tracksChanges=_tracksChanges - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)allActionTypes;
+(id)allSupportedActionTypes;
+(id)allSupportedActionTypesWithCapabilities:(id)arg1 ;
-(CNContact *)contact;
-(void)setContact:(CNContact *)arg1 ;
-(id)actionTypesForConsumer:(id)arg1 ;
-(id)consumer:(id)arg1 imageForActionType:(id)arg2 ;
-(id)thirdPartyActionsForContactProperty:(id)arg1 ;
-(id)consumer:(id)arg1 localizedDisplayNameForActionType:(id)arg2 ;
-(id)consumer:(id)arg1 localizedButtonDisplayNameForActionType:(id)arg2 ;
-(id)thirdPartyTargetsForActionTypes:(id)arg1 ;
-(id)consumer:(id)arg1 localizedDisplayNameForButtonWithDefaultAction:(id)arg2 actionType:(id)arg3 ;
-(BOOL)tracksChanges;
-(void)setTracksChanges:(BOOL)arg1 ;
-(id)initWithActionsByActionTypeByContact:(id)arg1 ;
-(id)consumer:(id)arg1 actionModelsForActionType:(id)arg2 handler:(/*^block*/id)arg3 ;
-(id)consumer:(id)arg1 actionModelsForActionType:(id)arg2 ;
-(id)thirdPartyActionsForCurrentContactAndPropertyKey:(id)arg1 identifier:(id)arg2 ;
-(NSDictionary *)userActionListModelResultBlocksByActionTypeAskedFor;
-(NSDictionary *)actionsByActionTypeByContact;
-(void)setUserActionListModelResultBlocksByActionTypeAskedFor:(NSDictionary *)arg1 ;
@end

