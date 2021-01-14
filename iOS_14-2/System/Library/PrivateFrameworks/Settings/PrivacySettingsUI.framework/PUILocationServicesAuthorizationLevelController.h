/*
* Generated on Thursday, January 14, 2021 at 2:28:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Settings/PrivacySettingsUI.framework/PrivacySettingsUI
*/

#import <PrivacySettingsUI/PUILocationServicesListController.h>

@class NSString, NSDictionary, NSBundle, NSArray;

@interface PUILocationServicesAuthorizationLevelController : PUILocationServicesListController {

	unsigned long long _authMask;
	BOOL _correctiveCompensationState;
	NSString* _serviceKey;
	NSDictionary* _details;
	NSString* _displayName;
	NSBundle* _entityBundle;
	NSArray* _correctiveCompensationSpecifiersGroup;

}

@property (nonatomic,copy) NSString * serviceKey;                                          //@synthesize serviceKey=_serviceKey - In the implementation block
@property (nonatomic,retain) NSDictionary * details;                                       //@synthesize details=_details - In the implementation block
@property (nonatomic,copy) NSString * displayName;                                         //@synthesize displayName=_displayName - In the implementation block
@property (nonatomic,retain) NSBundle * entityBundle;                                      //@synthesize entityBundle=_entityBundle - In the implementation block
@property (nonatomic,retain) NSArray * correctiveCompensationSpecifiersGroup;              //@synthesize correctiveCompensationSpecifiersGroup=_correctiveCompensationSpecifiersGroup - In the implementation block
-(void)setDetails:(NSDictionary *)arg1 ;
-(void)setSpecifier:(id)arg1 ;
-(id)specifiers;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(id)init;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)setServiceKey:(NSString *)arg1 ;
-(void)setDisplayName:(NSString *)arg1 ;
-(NSString *)serviceKey;
-(NSDictionary *)details;
-(NSBundle *)entityBundle;
-(void)setEntityBundle:(NSBundle *)arg1 ;
-(NSString *)displayName;
-(void)dealloc;
-(void)profileSettingsChanged:(id)arg1 ;
-(void)_updatePreciseLocationCell;
-(NSArray *)correctiveCompensationSpecifiersGroup;
-(void)_synchronizeLocationDetails;
-(id)_constructFooterForAuthorizationLevel:(unsigned long long)arg1 ;
-(void)_setPreciseLocationEnabled:(id)arg1 specifier:(id)arg2 ;
-(id)_preciseLocationStatus:(id)arg1 ;
-(void)_setLocationAuthorizationLevelMaskForAssociatedFramework:(unsigned long long)arg1 withCorrectiveCompensation:(int)arg2 ;
-(id)_purposeStringForAuthorizationLevel:(unsigned long long)arg1 ;
-(void)_setLocationAuthorizationLevelForSpecifier:(id)arg1 ;
-(id)_usageTextForAuthorizationLevel:(unsigned long long)arg1 ;
-(void)setCorrectiveCompensationSpecifiersGroup:(NSArray *)arg1 ;
@end

