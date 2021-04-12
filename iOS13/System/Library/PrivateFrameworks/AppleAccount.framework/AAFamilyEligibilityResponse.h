/*
* Generated on Monday, March 1, 2021 at 2:30:41 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
*/

#import <AppleAccount/AAResponse.h>

@class NSArray, NSString;

@interface AAFamilyEligibilityResponse : AAResponse {

	BOOL _hasPendingInvites;
	NSArray* _familyFeaturePrimaryDescriptions;
	NSArray* _familyFeatureSecondaryDescriptions;
	NSString* _familyFeatureSecondaryTitle;
	NSString* _underageEligibilityAlertTitle;
	NSString* _underageEligibilityAlertMessage;

}

@property (nonatomic,readonly) BOOL eligible; 
@property (nonatomic,readonly) long long eligibilityStatus; 
@property (nonatomic,readonly) BOOL hasPendingInvites;                                    //@synthesize hasPendingInvites=_hasPendingInvites - In the implementation block
@property (nonatomic,readonly) NSArray * familyFeaturePrimaryDescriptions;                //@synthesize familyFeaturePrimaryDescriptions=_familyFeaturePrimaryDescriptions - In the implementation block
@property (nonatomic,readonly) NSArray * familyFeatureSecondaryDescriptions;              //@synthesize familyFeatureSecondaryDescriptions=_familyFeatureSecondaryDescriptions - In the implementation block
@property (nonatomic,readonly) NSString * familyFeatureSecondaryTitle;                    //@synthesize familyFeatureSecondaryTitle=_familyFeatureSecondaryTitle - In the implementation block
@property (nonatomic,readonly) NSString * underageEligibilityAlertTitle;                  //@synthesize underageEligibilityAlertTitle=_underageEligibilityAlertTitle - In the implementation block
@property (nonatomic,readonly) NSString * underageEligibilityAlertMessage;                //@synthesize underageEligibilityAlertMessage=_underageEligibilityAlertMessage - In the implementation block
-(id)initWithHTTPResponse:(id)arg1 data:(id)arg2 ;
-(BOOL)eligible;
-(long long)eligibilityStatus;
-(BOOL)hasPendingInvites;
-(NSArray *)familyFeaturePrimaryDescriptions;
-(NSArray *)familyFeatureSecondaryDescriptions;
-(NSString *)familyFeatureSecondaryTitle;
-(NSString *)underageEligibilityAlertTitle;
-(NSString *)underageEligibilityAlertMessage;
@end

