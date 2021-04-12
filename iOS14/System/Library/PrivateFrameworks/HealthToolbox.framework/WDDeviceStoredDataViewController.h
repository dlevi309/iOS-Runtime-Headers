/*
* Generated on Thursday, January 14, 2021 at 2:27:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(HKDevice *)device;
-(void)setDisplayName:(NSString *)arg1 ;
-(void)setDevice:(HKDevice *)arg1 ;
-(NSString *)displayName;
-(id)storedDataPredicate;
-(id)storedDataDisplayName;
-(BOOL)shouldShowDeleteAllDataButton;
-(void)deleteAllStoredData;
@end

