/*
* Generated on Monday, March 1, 2021 at 2:34:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthToolbox.framework/HealthToolbox
*/


@class NSMutableArray, HKDisplayCategory;

@interface WDStoredDataCategory : NSObject {

	NSMutableArray* _displayTypes;
	HKDisplayCategory* _category;

}

@property (retain) HKDisplayCategory * category;                           //@synthesize category=_category - In the implementation block
@property (nonatomic,readonly) NSMutableArray * displayTypes;              //@synthesize displayTypes=_displayTypes - In the implementation block
-(HKDisplayCategory *)category;
-(void)setCategory:(HKDisplayCategory *)arg1 ;
-(NSMutableArray *)displayTypes;
@end

