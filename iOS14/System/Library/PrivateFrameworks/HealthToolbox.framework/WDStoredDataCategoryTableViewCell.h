/*
* Generated on Thursday, January 14, 2021 at 2:27:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthToolbox.framework/HealthToolbox
*/

#import <UIKitCore/UITableViewCell.h>

@class HKDisplayCategory, HKDisplayType;

@interface WDStoredDataCategoryTableViewCell : UITableViewCell {

	HKDisplayCategory* _category;
	HKDisplayType* _displayType;

}

@property (retain) HKDisplayCategory * category;                       //@synthesize category=_category - In the implementation block
@property (nonatomic,retain) HKDisplayType * displayType;              //@synthesize displayType=_displayType - In the implementation block
-(void)setCategory:(HKDisplayCategory *)arg1 ;
-(HKDisplayType *)displayType;
-(void)setDisplayType:(HKDisplayType *)arg1 ;
-(HKDisplayCategory *)category;
@end

