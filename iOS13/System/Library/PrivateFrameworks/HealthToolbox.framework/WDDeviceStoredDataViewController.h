/*
* Generated on Monday, March 1, 2021 at 2:34:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthToolbox.framework/HealthToolbox
*/

#import <HealthToolbox/WDStoredDataByCategoryViewController.h>

@class HKDevice, NSString;

@interface WDDeviceStoredDataViewController : WDStoredDataByCategoryViewController {

	HKDevice* _device;
	NSString* _displayName;

}

@property (nonatomic,retain) HKDevice * device;                   //@synthesize device=_device - In the implementation block
@property (nonatomic,retain) NSString * displayName;              //@synthesize displayName=_displayName - In the implementation block
-(NSString *)displayName;
-(HKDevice *)device;
-(void)setDisplayName:(NSString *)arg1 ;
-(void)setDevice:(HKDevice *)arg1 ;
-(id)storedDataPredicate;
-(id)storedDataDisplayName;
-(BOOL)shouldShowDeleteAllDataButton;
-(void)deleteAllStoredData;
@end

