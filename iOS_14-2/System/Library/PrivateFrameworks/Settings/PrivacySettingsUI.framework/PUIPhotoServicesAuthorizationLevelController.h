/*
* Generated on Thursday, January 14, 2021 at 2:28:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Settings/PrivacySettingsUI.framework/PrivacySettingsUI
*/

#import <Preferences/PSListItemsController.h>

@class NSArray, PSSpecifier, NSString, NSDictionary, NSBundle;

@interface PUIPhotoServicesAuthorizationLevelController : PSListItemsController {

	NSArray* _modifySelectionSpecifiers;
	PSSpecifier* _modifySelectionButton;
	NSString* _serviceKey;
	NSDictionary* _details;
	NSString* _displayName;
	NSBundle* _entityBundle;

}

@property (nonatomic,copy) NSString * serviceKey;                  //@synthesize serviceKey=_serviceKey - In the implementation block
@property (nonatomic,retain) NSDictionary * details;               //@synthesize details=_details - In the implementation block
@property (nonatomic,copy) NSString * displayName;                 //@synthesize displayName=_displayName - In the implementation block
@property (nonatomic,retain) NSBundle * entityBundle;              //@synthesize entityBundle=_entityBundle - In the implementation block
-(void)setDetails:(NSDictionary *)arg1 ;
-(void)setSpecifier:(id)arg1 ;
-(id)specifiers;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)setServiceKey:(NSString *)arg1 ;
-(void)setDisplayName:(NSString *)arg1 ;
-(NSString *)serviceKey;
-(NSDictionary *)details;
-(id)footerStringForSpecifiers:(id)arg1 ;
-(id)_modifySelectionSpecifiers;
-(NSBundle *)entityBundle;
-(void)_presentImagePickerForModifyingSelection;
-(void)setEntityBundle:(NSBundle *)arg1 ;
-(NSString *)displayName;
@end

