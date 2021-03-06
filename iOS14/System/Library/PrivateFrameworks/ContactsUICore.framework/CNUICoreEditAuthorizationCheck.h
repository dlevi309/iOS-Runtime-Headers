/*
* Generated on Thursday, January 14, 2021 at 2:27:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ContactsUICore.framework/ContactsUICore
*/


@protocol CNUICoreScreentimePasscodeCheck, CNUICoreParentContainerProvider;
@class CNContact, CNContainer;

@interface CNUICoreEditAuthorizationCheck : NSObject {

	BOOL _ignoresParentalRestrictions;
	CNContact* _contact;
	CNContainer* _parentContainer;
	id<CNUICoreScreentimePasscodeCheck> _screenTimePasscodeStatusCheck;
	id<CNUICoreParentContainerProvider> _linkedParentContainerProvider;

}

@property (nonatomic,readonly) CNContact * contact;                                                            //@synthesize contact=_contact - In the implementation block
@property (nonatomic,readonly) CNContainer * parentContainer;                                                  //@synthesize parentContainer=_parentContainer - In the implementation block
@property (nonatomic,readonly) BOOL ignoresParentalRestrictions;                                               //@synthesize ignoresParentalRestrictions=_ignoresParentalRestrictions - In the implementation block
@property (nonatomic,readonly) id<CNUICoreScreentimePasscodeCheck> screenTimePasscodeStatusCheck;              //@synthesize screenTimePasscodeStatusCheck=_screenTimePasscodeStatusCheck - In the implementation block
@property (nonatomic,readonly) id<CNUICoreParentContainerProvider> linkedParentContainerProvider;              //@synthesize linkedParentContainerProvider=_linkedParentContainerProvider - In the implementation block
+(id)log;
+(id)containerProviderWithContactStore:(id)arg1 ;
+(BOOL)isAuthorizationPasscodeEnabledOnDevice;
-(CNContact *)contact;
-(id)initWithContact:(id)arg1 parentContainer:(id)arg2 ignoresParentalRestrictions:(BOOL)arg3 linkedParentContainerProvider:(id)arg4 ;
-(BOOL)shouldPromptForPasscodeAuthorization;
-(id)initWithContact:(id)arg1 parentContainer:(id)arg2 ignoresParentalRestrictions:(BOOL)arg3 ;
-(BOOL)shouldBypassRestrictionsGivenAuthorizationResult:(long long)arg1 ;
-(CNContainer *)parentContainer;
-(BOOL)ignoresParentalRestrictions;
-(id)initWithContact:(id)arg1 parentContainer:(id)arg2 ignoresParentalRestrictions:(BOOL)arg3 screenTimePasscodeStatusCheck:(id)arg4 linkedParentContainerProvider:(id)arg5 ;
-(BOOL)canPerformValidAuthorizationCheck;
-(BOOL)shouldRespectParentalRestrictions;
-(BOOL)editAltersRestrictedInformation;
-(BOOL)authorizationPasscodeEnabledOnDevice;
-(id<CNUICoreParentContainerProvider>)linkedParentContainerProvider;
-(id<CNUICoreScreentimePasscodeCheck>)screenTimePasscodeStatusCheck;
@end

