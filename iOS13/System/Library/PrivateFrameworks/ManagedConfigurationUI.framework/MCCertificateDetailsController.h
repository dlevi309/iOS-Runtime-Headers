/*
* Generated on Monday, March 1, 2021 at 2:32:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

