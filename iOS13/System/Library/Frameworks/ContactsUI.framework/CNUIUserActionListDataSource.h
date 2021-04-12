/*
* Generated on Monday, March 1, 2021 at 2:30:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
*/


@protocol CNUIUserActionListDataSource <NSObject>
@property (assign,nonatomic) BOOL tracksChanges; 
@required
+(id)allActionTypes;
+(id)allSupportedActionTypes;
+(id)allSupportedActionTypesWithCapabilities:(id)arg1;
-(void)setContact:(id)arg1;
-(id)actionTypesForConsumer:(id)arg1;
-(id)consumer:(id)arg1 actionModelsForActionType:(id)arg2 handler:(/*^block*/id)arg3;
-(id)consumer:(id)arg1 actionModelsForActionType:(id)arg2;
-(id)consumer:(id)arg1 localizedDisplayNameForActionType:(id)arg2;
-(id)consumer:(id)arg1 localizedButtonDisplayNameForActionType:(id)arg2;
-(id)consumer:(id)arg1 localizedDisplayNameForButtonWithDefaultAction:(id)arg2 actionType:(id)arg3;
-(id)consumer:(id)arg1 imageForActionType:(id)arg2;
-(id)thirdPartyTargetsForActionTypes:(id)arg1;
-(id)thirdPartyActionsForContactProperty:(id)arg1;
-(id)thirdPartyActionsForCurrentContactAndPropertyKey:(id)arg1 identifier:(id)arg2;
-(BOOL)tracksChanges;
-(void)setTracksChanges:(BOOL)arg1;

@end

