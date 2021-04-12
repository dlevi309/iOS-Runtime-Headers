/*
* Generated on Monday, March 1, 2021 at 2:32:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Settings/PrivacySettingsUI.framework/PrivacySettingsUI
*/

#import <PrivacySettingsUI/PUILocationServicesListController.h>

@class NSString, NSDictionary, NSBundle;

@interface PUILocationServicesAuthorizationLevelController : PUILocationServicesListController {

	unsigned long long _authMask;
	NSString* _serviceKey;
	NSDictionary* _details;
	NSString* _displayName;
	NSBundle* _entityBundle;

}

@property (nonatomic,copy) NSString * serviceKey;                  //@synthesize serviceKey=_serviceKey - In the implementation block
@property (nonatomic,retain) NSDictionary * details;               //@synthesize details=_details - In the implementation block
@property (nonatomic,copy) NSString * displayName;                 //@synthesize displayName=_displayName - In the implementation block
@property (nonatomic,retain) NSBundle * entityBundle;              //@synthesize entityBundle=_entityBundle - In the implementation block
-(id)init;
-(void)dealloc;
-(NSString *)displayName;
-(void)setDisplayName:(NSString *)arg1 ;
-(NSDictionary *)details;
-(void)setDetails:(NSDictionary *)arg1 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(id)specifiers;
-(void)setSpecifier:(id)arg1 ;
-(NSString *)serviceKey;
-(void)profileSettingsChanged:(id)arg1 ;
-(id)_constructFooterForAuthorizationLevel:(unsigned long long)arg1 ;
-(id)_purposeStringForAuthorizationLevel:(unsigned long long)arg1 ;
-(void)_setLocationAuthorizationLevelForSpecifier:(id)arg1 ;
-(void)_setLocationAuthorizationLevelMaskForAssociatedFramework:(unsigned long long)arg1 ;
-(id)_usageTextForAuthorizationLevel:(unsigned long long)arg1 ;
-(void)setServiceKey:(NSString *)arg1 ;
-(NSBundle *)entityBundle;
-(void)setEntityBundle:(NSBundle *)arg1 ;
@end

