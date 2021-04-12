/*
* Generated on Thursday, January 14, 2021 at 2:23:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
*/

#import <TelephonyUtilities/TelephonyUtilities-Structs.h>
#import <TelephonyUtilities/TUCallDisplayContext.h>

@class NSString, NSPersonNameComponents;

@interface TUMutableCallDisplayContext : TUCallDisplayContext

@property (nonatomic,copy) NSString * name; 
@property (nonatomic,copy) NSPersonNameComponents * personNameComponents; 
@property (nonatomic,copy) NSString * firstName; 
@property (nonatomic,copy) NSString * suggestedName; 
@property (nonatomic,copy) NSString * label; 
@property (nonatomic,copy) NSString * companyName; 
@property (nonatomic,copy) NSString * mapName; 
@property (nonatomic,copy) NSString * location; 
@property (nonatomic,copy) NSString * contactName; 
@property (nonatomic,copy) NSString * contactLabel; 
@property (nonatomic,copy) NSString * callDirectoryLabel; 
@property (nonatomic,copy) NSString * callDirectoryLocalizedExtensionContainingAppName; 
@property (nonatomic,copy) NSString * callDirectoryExtensionIdentifier; 
@property (nonatomic,copy) NSString * contactIdentifier; 
@property (assign,nonatomic) int legacyAddressBookIdentifier; 
+(BOOL)supportsSecureCoding;
-(void)mergeValuesFromDisplayContext:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

