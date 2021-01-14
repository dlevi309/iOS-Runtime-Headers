/*
* Generated on Thursday, January 14, 2021 at 2:26:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

#import <Preferences/PSListController.h>
#import <libobjc.A.dylib/NTKCUpNextDataSourcesManagerIdentifiersDelegate.h>

@class NTKCUpNextDataSourcesManager, NSString;

@interface NTKCUpNextDataSourcesViewController : PSListController <NTKCUpNextDataSourcesManagerIdentifiersDelegate> {

	NTKCUpNextDataSourcesManager* _dataSourcesManager;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)specifiers;
-(id)init;
-(void)dealloc;
-(void)_disabledDataSourcesDidChange;
-(void)manager:(id)arg1 didUpdateDataSourceEntries:(id)arg2 ;
-(void)_setDataSourceEnabled:(id)arg1 withSpecifier:(id)arg2 ;
-(id)_dataSourceEnabled:(id)arg1 ;
-(void)_setAndResizeIconImage:(id)arg1 forSpecifier:(id)arg2 ;
@end

