/*
* Generated on Monday, March 1, 2021 at 2:33:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
*/

#import <Home/HFAccessorySettingAdapter.h>
#import <libobjc.A.dylib/HFAccessorySettingAdapterDisplayArbitrating.h>

@class NSString;

@interface HFAccessorySettingMusicAdapter : HFAccessorySettingAdapter <HFAccessorySettingAdapterDisplayArbitrating>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)areAllAccessoriesLoggedIntoSameAccount:(id)arg1 ;
+(BOOL)areAllAccessoriesLoggedOut:(id)arg1 ;
-(id)initWithHomeKitSettingsVendor:(id)arg1 keyPaths:(id)arg2 mode:(unsigned long long)arg3 updateHandler:(/*^block*/id)arg4 ;
-(BOOL)shouldShowSettingsEntity:(id)arg1 ;
-(id)initWithHomeKitSettingsVendor:(id)arg1 mode:(unsigned long long)arg2 ;
-(id)initWithHomeKitSettingsVendor:(id)arg1 keyPaths:(id)arg2 updateHandler:(/*^block*/id)arg3 ;
@end

