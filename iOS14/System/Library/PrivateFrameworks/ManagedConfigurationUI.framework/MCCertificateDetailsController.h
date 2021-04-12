/*
* Generated on Thursday, January 14, 2021 at 2:26:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfigurationUI.framework/ManagedConfigurationUI
*/

#import <ManagedConfigurationUI/ManagedConfigurationUI-Structs.h>
#import <Preferences/PSListController.h>

@class NSArray;

@interface MCCertificateDetailsController : PSListController {

	NSArray* _properties;

}
+(id)_dateFormatter;
-(id)specifiers;
-(id)valueForSpecifier:(id)arg1 ;
-(id)specifiersFromCertificateProperties:(id)arg1 ;
-(id)_propertiesFromTrust:(SecTrustRef)arg1 ;
-(id)specifiersFromTrust:(SecTrustRef)arg1 ;
@end

