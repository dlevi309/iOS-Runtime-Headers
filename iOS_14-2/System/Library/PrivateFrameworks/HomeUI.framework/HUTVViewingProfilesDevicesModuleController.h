/*
* Generated on Thursday, January 14, 2021 at 2:24:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <HomeUI/HUItemTableModuleController.h>
#import <libobjc.A.dylib/HUSwitchCellDelegate.h>

@class HUTVViewingProfilesDevicesItemModule, NSString;

@interface HUTVViewingProfilesDevicesModuleController : HUItemTableModuleController <HUSwitchCellDelegate>

@property (nonatomic,readonly) HUTVViewingProfilesDevicesItemModule * module; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)switchCell:(id)arg1 didTurnOn:(BOOL)arg2 ;
-(id)initWithModule:(id)arg1 ;
-(id)initWithModule:(id)arg1 host:(id)arg2 ;
-(Class)cellClassForItem:(id)arg1 ;
-(void)setupCell:(id)arg1 forItem:(id)arg2 ;
-(void)_toggleShowTVViewingProfileForItem:(id)arg1 ;
@end

