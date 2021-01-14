/*
* Generated on Thursday, January 14, 2021 at 2:28:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ScreenTimeSettingsUI.framework/ScreenTimeSettingsUI
*/

#import <libobjc.A.dylib/STUsageDetailsViewModelCoordinator.h>

@class STUsageDetailsViewModel, NSArray, NSString;

@interface STSetupAssistantUsageDetailsCoordinator : NSObject <STUsageDetailsViewModelCoordinator> {

	BOOL _refreshing;
	NSArray* _devices;
	NSString* _selectedDeviceIdentifier;
	STUsageDetailsViewModel* _viewModel;

}

@property (nonatomic,readonly) STUsageDetailsViewModel * viewModel;              //@synthesize viewModel=_viewModel - In the implementation block
@property (nonatomic,copy,readonly) NSArray * devices;                           //@synthesize devices=_devices - In the implementation block
@property (nonatomic,copy) NSString * selectedDeviceIdentifier;                  //@synthesize selectedDeviceIdentifier=_selectedDeviceIdentifier - In the implementation block
@property (getter=isRefreshing,readonly) BOOL refreshing;                        //@synthesize refreshing=_refreshing - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSArray *)devices;
-(id)init;
-(STUsageDetailsViewModel *)viewModel;
-(BOOL)isRefreshing;
-(void)startRefreshingUsageData;
-(void)stopRefreshingUsageData;
-(void)refreshUsageData;
-(NSString *)selectedDeviceIdentifier;
-(void)setSelectedDeviceIdentifier:(NSString *)arg1 ;
-(id)_introUsageItemsWithStartDate:(id)arg1 ;
-(id)appConfigByIdentifier;
-(id)categoryConfigByIdentifier;
@end

