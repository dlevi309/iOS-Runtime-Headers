/*
* Generated on Monday, March 1, 2021 at 2:34:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthRecordsUI.framework/HealthRecordsUI
*/


@class NSString, WDMedicalRecordDaySummary, NSArray;

@interface WDMedicalRecordDisplayItemGroup : NSObject {

	NSString* _title;
	NSString* _subtitle;
	WDMedicalRecordDaySummary* _daySummary;
	NSArray* _items;

}

@property (nonatomic,retain) WDMedicalRecordDaySummary * daySummary;              //@synthesize daySummary=_daySummary - In the implementation block
@property (nonatomic,retain) NSArray * items;                                     //@synthesize items=_items - In the implementation block
@property (nonatomic,retain) NSString * title;                                    //@synthesize title=_title - In the implementation block
@property (nonatomic,retain) NSString * subtitle;                                 //@synthesize subtitle=_subtitle - In the implementation block
@property (nonatomic,copy,readonly) NSArray * displayItems; 
+(id)displayItemGroupWithDaySummary:(id)arg1 ;
+(id)displayItemGroupWithDisplayItems:(id)arg1 ;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)subtitle;
-(NSArray *)items;
-(void)setItems:(NSArray *)arg1 ;
-(void)setSubtitle:(NSString *)arg1 ;
-(NSArray *)displayItems;
-(WDMedicalRecordDaySummary *)daySummary;
-(void)setDaySummary:(WDMedicalRecordDaySummary *)arg1 ;
-(id)displayItemAtIndex:(long long)arg1 ;
-(long long)numberOfDisplayItems;
@end

