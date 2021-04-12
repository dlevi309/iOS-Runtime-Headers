/*
* Generated on Monday, March 1, 2021 at 2:34:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(HKDisplayCategory *)category;
-(void)setCategory:(HKDisplayCategory *)arg1 ;
-(HKDisplayType *)displayType;
-(void)setDisplayType:(HKDisplayType *)arg1 ;
@end

