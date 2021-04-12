/*
* Generated on Thursday, January 14, 2021 at 2:24:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setItems:(NSArray *)arg1 ;
-(NSString *)subtitle;
-(void)setTitle:(NSString *)arg1 ;
-(NSArray *)items;
-(NSArray *)displayItems;
-(void)setSubtitle:(NSString *)arg1 ;
-(void)setDaySummary:(WDMedicalRecordDaySummary *)arg1 ;
-(WDMedicalRecordDaySummary *)daySummary;
-(id)displayItemAtIndex:(long long)arg1 ;
-(long long)numberOfDisplayItems;
-(NSString *)title;
@end

