/*
* Generated on Thursday, January 14, 2021 at 2:25:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <ITMLKit/IKJSObject.h>
#import <libobjc.A.dylib/SKUIJSRestrictions.h>

@protocol SKUIJSRestrictions <JSExport>
@required
-(void)isRestrictionsPasscodeSet:(id)arg1;
-(void)setAllowExplicitContent;
-(void)isExplicitContentDisallowedInCurrentStoreFront:(id)arg1;
-(void)isExplicitContentRestrictedByDefaultInCurrentStoreFront:(id)arg1;
-(void)didDisplayExplicitRestrictionAlertOfType:(id)arg1;
-(BOOL)isRestrictedApp:(id)arg1;
-(void)shouldDisplayExplicitRestrictionAlertOfType:(id)arg1 :(id)arg2;
-(void)presentExplicitRestrictionAlertIfNeededOfType:(id)arg1 :(id)arg2;

@end


@class SKUIClientContext;

@interface SKUIJSRestrictions : IKJSObject <SKUIJSRestrictions> {

	SKUIClientContext* _clientContext;

}
-(void)isRestrictionsPasscodeSet:(id)arg1 ;
-(void)setAllowExplicitContent;
-(void)isExplicitContentDisallowedInCurrentStoreFront:(id)arg1 ;
-(void)isExplicitContentRestrictedByDefaultInCurrentStoreFront:(id)arg1 ;
-(void)didDisplayExplicitRestrictionAlertOfType:(id)arg1 ;
-(long long)_explicitRestrictionAlertTypeForTypeString:(id)arg1 ;
-(BOOL)isRestrictedApp:(id)arg1 ;
-(void)shouldDisplayExplicitRestrictionAlertOfType:(id)arg1 :(id)arg2 ;
-(void)presentExplicitRestrictionAlertIfNeededOfType:(id)arg1 :(id)arg2 ;
-(id)initWithAppContext:(id)arg1 clientContext:(id)arg2 ;
@end

