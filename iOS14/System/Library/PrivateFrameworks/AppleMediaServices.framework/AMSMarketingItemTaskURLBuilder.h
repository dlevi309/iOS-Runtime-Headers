/*
* Generated on Thursday, January 14, 2021 at 2:20:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
*/

#import <libobjc.A.dylib/AMSBagConsumer.h>

@class NSString;

@interface AMSMarketingItemTaskURLBuilder : NSObject <AMSBagConsumer>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)bagKeySet;
+(id)bagSubProfile;
+(id)bagSubProfileVersion;
-(id)urlWithServiceType:(id)arg1 placement:(id)arg2 bag:(id)arg3 hydrateRelatedContents:(BOOL)arg4 additionalParameters:(id)arg5 ;
-(id)_realmOverridesFromBag:(id)arg1 ;
-(id)_realmFromBag:(id)arg1 ;
-(id)_formattedURLPathWithBag:(id)arg1 ;
-(id)_languageTagFromBag:(id)arg1 fallback:(id)arg2 ;
-(id)_additionalQueryItems;
-(id)_stringForKey:(id)arg1 fromBag:(id)arg2 ;
-(id)_urlPathFromBag:(id)arg1 ;
-(id)_countryCodeFromBag:(id)arg1 ;
@end

