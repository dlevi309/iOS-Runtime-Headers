/*
* Generated on Thursday, January 14, 2021 at 2:25:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
*/

#import <iTunesStoreUI/SUScriptObject.h>

@class NSNumber, NSString, SUScriptDictionary;

@interface SUScriptSubscriptionStatusResponse : SUScriptObject {

	NSNumber* _acceptedStoreTermsVersion;
	NSString* _accountStatus;
	NSString* _carrierBundlingStatus;
	NSNumber* _carrierBundlingErrorCode;
	id _discoveryModeEligible;
	NSString* _eligibilityStatus;
	id _familyOrganizer;
	id _familySubscription;
	id _final;
	id _hasFamily;
	id _hasFamilyMembers;
	NSNumber* _latestStoreTermsVersion;
	SUScriptDictionary* _rawResponseData;
	NSString* _sessionIdentifier;
	id _subscribed;

}

@property (readonly) NSNumber * acceptedStoreTermsVersion;                                 //@synthesize acceptedStoreTermsVersion=_acceptedStoreTermsVersion - In the implementation block
@property (readonly) NSString * accountIdentifier; 
@property (readonly) NSString * accountStatus;                                             //@synthesize accountStatus=_accountStatus - In the implementation block
@property (readonly) NSString * carrierBundlingStatus;                                     //@synthesize carrierBundlingStatus=_carrierBundlingStatus - In the implementation block
@property (readonly) NSNumber * carrierBundlingErrorCode;                                  //@synthesize carrierBundlingErrorCode=_carrierBundlingErrorCode - In the implementation block
@property (getter=isDiscoveryModeEligible,readonly) id discoveryModeEligible;              //@synthesize discoveryModeEligible=_discoveryModeEligible - In the implementation block
@property (readonly) NSString * eligibilityStatus;                                         //@synthesize eligibilityStatus=_eligibilityStatus - In the implementation block
@property (getter=isFamilyOrganizer,readonly) id familyOrganizer;                          //@synthesize familyOrganizer=_familyOrganizer - In the implementation block
@property (getter=isFamilySubscription,readonly) id familySubscription;                    //@synthesize familySubscription=_familySubscription - In the implementation block
@property (getter=isFinal,readonly) id final;                                              //@synthesize final=_final - In the implementation block
@property (readonly) id hasFamily;                                                         //@synthesize hasFamily=_hasFamily - In the implementation block
@property (readonly) id hasFamilyMembers;                                                  //@synthesize hasFamilyMembers=_hasFamilyMembers - In the implementation block
@property (readonly) NSNumber * latestStoreTermsVersion;                                   //@synthesize latestStoreTermsVersion=_latestStoreTermsVersion - In the implementation block
@property (readonly) SUScriptDictionary * rawResponseData;                                 //@synthesize rawResponseData=_rawResponseData - In the implementation block
@property (readonly) NSString * sessionIdentifier;                                         //@synthesize sessionIdentifier=_sessionIdentifier - In the implementation block
@property (getter=isSubscribed,readonly) id subscribed;                                    //@synthesize subscribed=_subscribed - In the implementation block
@property (readonly) NSString * accountStatusNeedsAuthentication; 
@property (readonly) NSString * accountStatusNotSubscribed; 
@property (readonly) NSString * accountStatusSubscribed; 
@property (readonly) NSString * accountStatusUnknown; 
@property (readonly) NSString * eligibilityStatusEligible; 
@property (readonly) NSString * eligibilityStatusNotEligible; 
@property (readonly) NSString * eligibilityStatusUnknown; 
+(void)initialize;
+(id)webScriptNameForKeyName:(id)arg1 ;
-(NSNumber *)carrierBundlingErrorCode;
-(id)isDiscoveryModeEligible;
-(NSString *)accountStatus;
-(NSString *)accountIdentifier;
-(id)attributeKeys;
-(id)isFinal;
-(NSString *)carrierBundlingStatus;
-(NSString *)sessionIdentifier;
-(id)hasFamily;
-(unsigned long long)hash;
-(SUScriptDictionary *)rawResponseData;
-(NSString *)eligibilityStatus;
-(id)isSubscribed;
-(id)_className;
-(NSNumber *)acceptedStoreTermsVersion;
-(id)isFamilyOrganizer;
-(id)isFamilySubscription;
-(id)hasFamilyMembers;
-(NSNumber *)latestStoreTermsVersion;
-(BOOL)isEqual:(id)arg1 ;
-(id)scriptAttributeKeys;
-(NSString *)accountStatusUnknown;
-(NSString *)accountStatusSubscribed;
-(NSString *)accountStatusNeedsAuthentication;
-(NSString *)accountStatusNotSubscribed;
-(NSString *)eligibilityStatusEligible;
-(NSString *)eligibilityStatusNotEligible;
-(NSString *)eligibilityStatusUnknown;
-(id)initWithSubscriptionStatus:(id)arg1 isFinal:(BOOL)arg2 ;
@end

