/*
* Generated on Thursday, January 14, 2021 at 2:27:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
*/

#import <BulletinDistributorCompanion/BLTSectionConfigurationInternal.h>
#import <libobjc.A.dylib/BLTWatchKitAppListDelegate.h>

@protocol BLTSectionConfigurationDelegate;
@class BLTWatchKitAppList, NSCondition, NSString;

@interface BLTSectionConfiguration : BLTSectionConfigurationInternal <BLTWatchKitAppListDelegate> {

	BLTWatchKitAppList* _watchKitAppList;
	NSCondition* _watchKitAppListLoadedCondition;
	BOOL _watchKitAppListLoaded;
	id<BLTSectionConfigurationDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<BLTSectionConfigurationDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<BLTSectionConfigurationDelegate>)delegate;
-(void)setDelegate:(id<BLTSectionConfigurationDelegate>)arg1 ;
-(void)watchKitAppList:(id)arg1 added:(id)arg2 removed:(id)arg3 ;
-(BOOL)shouldSectionIDSettingsAlwaysSync:(id)arg1 ;
-(void)_waitForWatchKitAppListLoaded;
-(id)initWithWatchKitAppList:(id)arg1 ;
-(BOOL)override:(id)arg1 appliesToConfigurationForSectionID:(id)arg2 ;
@end

