/*
* Generated on Monday, March 1, 2021 at 2:31:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)mergeValuesFromDisplayContext:(id)arg1 ;
@end

