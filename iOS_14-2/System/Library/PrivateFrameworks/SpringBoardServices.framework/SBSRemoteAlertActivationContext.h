/*
* Generated on Thursday, January 14, 2021 at 2:21:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardServices.framework/SpringBoardServices
*/

#import <libobjc.A.dylib/BSDescriptionProviding.h>
#import <libobjc.A.dylib/BSSettingDescriptionProvider.h>
#import <libobjc.A.dylib/BSXPCCoding.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSSet, NSDictionary, SBSRemoteAlertPresentationTarget, NSUUID;

@interface SBSRemoteAlertActivationContext : NSObject <BSDescriptionProviding, BSSettingDescriptionProvider, BSXPCCoding, NSSecureCoding> {

	BOOL _activatingForSiri;
	BOOL _shouldInvalidateWhenDeactivated;
	BOOL _switcherEligible;
	NSString* _reason;
	NSSet* _actions;
	NSDictionary* _userInfo;
	SBSRemoteAlertPresentationTarget* _presentationTarget;
	NSUUID* _activityContinuationIdentifier;
	NSDictionary* _legacyAlertOptions;

}

@property (nonatomic,copy) NSUUID * activityContinuationIdentifier;                              //@synthesize activityContinuationIdentifier=_activityContinuationIdentifier - In the implementation block
@property (nonatomic,copy) NSDictionary * legacyAlertOptions;                                    //@synthesize legacyAlertOptions=_legacyAlertOptions - In the implementation block
@property (assign,nonatomic) BOOL shouldInvalidateWhenDeactivated;                               //@synthesize shouldInvalidateWhenDeactivated=_shouldInvalidateWhenDeactivated - In the implementation block
@property (assign,getter=isSwitcherEligible,nonatomic) BOOL switcherEligible;                    //@synthesize switcherEligible=_switcherEligible - In the implementation block
@property (nonatomic,copy) NSString * reason;                                                    //@synthesize reason=_reason - In the implementation block
@property (assign,getter=isActivatingForSiri,nonatomic) BOOL activatingForSiri;                  //@synthesize activatingForSiri=_activatingForSiri - In the implementation block
@property (nonatomic,copy) NSSet * actions;                                                      //@synthesize actions=_actions - In the implementation block
@property (nonatomic,copy) NSDictionary * userInfo;                                              //@synthesize userInfo=_userInfo - In the implementation block
@property (nonatomic,retain) SBSRemoteAlertPresentationTarget * presentationTarget;              //@synthesize presentationTarget=_presentationTarget - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)activationContextWithLegacyAlertOptions:(id)arg1 ;
-(void)setActions:(NSSet *)arg1 ;
-(void)setUserInfo:(NSDictionary *)arg1 ;
-(id)succinctDescription;
-(NSDictionary *)userInfo;
-(id)init;
-(NSSet *)actions;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)description;
-(id)initWithXPCDictionary:(id)arg1 ;
-(NSString *)reason;
-(id)initWithActions:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithXPCDictionary:(id)arg1 ;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(void)setReason:(NSString *)arg1 ;
-(void)setLegacyAlertOptions:(NSDictionary *)arg1 ;
-(id)initWithActions:(id)arg1 presentationTarget:(id)arg2 ;
-(NSUUID *)activityContinuationIdentifier;
-(id)initWithActions:(id)arg1 presentationTarget:(id)arg2 userInfo:(id)arg3 ;
-(void)setActivityContinuationIdentifier:(NSUUID *)arg1 ;
-(void)setActivatingForSiri:(BOOL)arg1 ;
-(BOOL)isActivatingForSiri;
-(SBSRemoteAlertPresentationTarget *)presentationTarget;
-(void)setPresentationTarget:(SBSRemoteAlertPresentationTarget *)arg1 ;
-(NSDictionary *)legacyAlertOptions;
-(BOOL)shouldInvalidateWhenDeactivated;
-(void)setShouldInvalidateWhenDeactivated:(BOOL)arg1 ;
-(BOOL)isSwitcherEligible;
-(void)setSwitcherEligible:(BOOL)arg1 ;
@end

