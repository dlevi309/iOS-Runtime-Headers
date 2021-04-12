/*
* Generated on Monday, March 1, 2021 at 2:32:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ContactsUICore.framework/ContactsUICore
*/

#import <libobjc.A.dylib/CNUIUserActionListDataSource.h>

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


@protocol CNSchedulerProvider;
@class CNContact, CNUIUserActionListModelCache, CNUIUserActionDisambiguationModeler, NSString;

@interface CNUIUserActionListDataSource : NSObject <CNUIUserActionListDataSource> {

	BOOL _tracksChanges;
	id<CNSchedulerProvider> _schedulerProvider;
	CNContact* _contact;
	CNUIUserActionListModelCache* _models;
	CNUIUserActionDisambiguationModeler* _modeler;

}

@property (nonatomic,copy) CNContact * contact;                                          //@synthesize contact=_contact - In the implementation block
@property (nonatomic,retain) CNUIUserActionListModelCache * models;                      //@synthesize models=_models - In the implementation block
@property (nonatomic,retain) CNUIUserActionDisambiguationModeler * modeler;              //@synthesize modeler=_modeler - In the implementation block
@property (nonatomic,readonly) id<CNSchedulerProvider> schedulerProvider;                //@synthesize schedulerProvider=_schedulerProvider - In the implementation block
@property (assign,nonatomic) BOOL tracksChanges;                                         //@synthesize tracksChanges=_tracksChanges - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)descriptorForRequiredKeys;
+(id)allActionTypes;
+(id)allSupportedActionTypes;
+(id)allSupportedActionTypesWithCapabilities:(id)arg1 ;
+(id)displayNameForDisambiguationForActionType:(id)arg1 ;
+(id)displayNameForButtonForActionType:(id)arg1 ;
-(void)dealloc;
-(CNContact *)contact;
-(void)setContact:(CNContact *)arg1 ;
-(void)setContactStore:(id)arg1 ;
-(CNUIUserActionListModelCache *)models;
-(void)setModels:(CNUIUserActionListModelCache *)arg1 ;
-(id)initWithContact:(id)arg1 ;
-(id<CNSchedulerProvider>)schedulerProvider;
-(id)initWithSchedulerProvider:(id)arg1 ;
-(id)initWithDiscoveringEnvironment:(id)arg1 ;
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
-(id)initWithContact:(id)arg1 schedulerProvider:(id)arg2 ;
-(CNUIUserActionDisambiguationModeler *)modeler;
-(BOOL)shouldUseLabelForButtonWithDefaultAction:(id)arg1 ;
-(id)modelsForActionType:(id)arg1 ;
-(id)makeModelObservableForActionType:(id)arg1 ;
-(id)initWithSchedulerProvider:(id)arg1 idsAvailabilityProvider:(id)arg2 ;
-(void)setModeler:(CNUIUserActionDisambiguationModeler *)arg1 ;
@end

