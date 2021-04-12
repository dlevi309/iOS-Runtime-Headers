/*
* Generated on Thursday, January 14, 2021 at 2:27:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthToolbox.framework/HealthToolbox
*/


@class NSMutableArray, HKDisplayCategory;

@interface WDStoredDataCategory : NSObject {

	NSMutableArray* _displayTypes;
	HKDisplayCategory* _category;

}

@property (retain) HKDisplayCategory * category;                           //@synthesize category=_category - In the implementation block
@property (nonatomic,readonly) NSMutableArray * displayTypes;              //@synthesize displayTypes=_displayTypes - In the implementation block
-(void)setCategory:(HKDisplayCategory *)arg1 ;
-(HKDisplayCategory *)category;
-(NSMutableArray *)displayTypes;
@end

