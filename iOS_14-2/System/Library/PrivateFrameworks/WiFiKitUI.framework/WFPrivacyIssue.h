/*
* Generated on Thursday, January 14, 2021 at 2:28:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WiFiKitUI.framework/WiFiKitUI
*/

#import <WiFiKitUI/WFHealthIssue.h>

@class NSString;

@interface WFPrivacyIssue : WFHealthIssue {

	NSString* _issueShortTitle;
	NSString* _issueTitle;
	NSString* _issueDescription;
	NSString* _issueRecommendation;

}
+(id)carrierNetworkIssue;
+(id)dnsFilteredNetworkIssue;
+(id)privateAddressDisabledBySystemIssue;
+(id)privateAddressDisabledByCarrierIssueWithCarrierName:(id)arg1 ;
+(id)privateAddressDisabledByProfileIssueWithOrganizationName:(id)arg1 profileName:(id)arg2 profileUUID:(id)arg3 ;
+(id)privateAddressDisabledByUserIssue;
-(id)issueDescription;
-(id)issueShortTitle;
-(id)issueRecommendation;
-(id)issueTitle;
-(id)initWithPrivacyType:(unsigned long long)arg1 organizationName:(id)arg2 profileName:(id)arg3 profileUUID:(id)arg4 ;
-(id)_titleForSubType:(unsigned long long)arg1 ;
-(id)_descriptionForSubType:(unsigned long long)arg1 organizationName:(id)arg2 profileName:(id)arg3 ;
-(id)_recommendationForSubType:(unsigned long long)arg1 organizationName:(id)arg2 ;
-(unsigned long long)_healthIssueTypeForSubType:(unsigned long long)arg1 ;
@end

