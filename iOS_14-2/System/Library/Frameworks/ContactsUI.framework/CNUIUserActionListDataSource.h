/*
* Generated on Thursday, January 14, 2021 at 2:20:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
*/


@protocol CNUIUserActionListDataSource <NSObject>
@property (assign,nonatomic) BOOL tracksChanges; 
@required
+(id)allActionTypes;
+(id)allSupportedActionTypes;
+(id)allSupportedActionTypesWithCapabilities:(id)arg1;
-(void)setCacheCapacity:(unsigned long long)arg1;
-(id)actionTypesForConsumer:(id)arg1;
-(id)consumer:(id)arg1 actionModelsForContact:(id)arg2 actionType:(id)arg3 handler:(/*^block*/id)arg4;
-(id)consumer:(id)arg1 currentActionModelForContact:(id)arg2 actionType:(id)arg3;
-(id)consumer:(id)arg1 imageForActionType:(id)arg2;
-(id)consumer:(id)arg1 actionModelsForContact:(id)arg2 actionType:(id)arg3;
-(id)thirdPartyActionsForContactProperty:(id)arg1;
-(id)consumer:(id)arg1 localizedDisplayNameForActionType:(id)arg2;
-(void)setCacheEntryExpirationAge:(double)arg1;
-(id)consumer:(id)arg1 localizedButtonDisplayNameForActionType:(id)arg2;
-(id)thirdPartyTargetsForActionTypes:(id)arg1;
-(id)consumer:(id)arg1 localizedDisplayNameForButtonWithDefaultAction:(id)arg2 actionType:(id)arg3;
-(BOOL)tracksChanges;
-(id)thirdPartyActionsForContact:(id)arg1 propertyKey:(id)arg2 identifier:(id)arg3;
-(void)setCacheEntryRefreshAge:(double)arg1;
-(void)setTracksChanges:(BOOL)arg1;

@end

