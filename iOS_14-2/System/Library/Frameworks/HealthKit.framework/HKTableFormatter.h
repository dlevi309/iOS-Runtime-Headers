/*
* Generated on Thursday, January 14, 2021 at 2:21:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
*/


@class NSArray, NSDateFormatter, NSString;

@interface HKTableFormatter : NSObject {

	NSArray* _titles;
	NSArray* _columns;
	NSDateFormatter* _dateFormatter;
	NSString* _title;

}

@property (nonatomic,copy) NSString * title;                    //@synthesize title=_title - In the implementation block
@property (nonatomic,readonly) long long rowCount; 
+(id)formatterForCodableCondensedWorkouts;
-(id)init;
-(void)setTitle:(NSString *)arg1 ;
-(id)_formattedTableHeaderForColumnWidths:(id)arg1 ;
-(void)_appendColumn:(id)arg1 width:(long long)arg2 padding:(id)arg3 row:(id)arg4 ;
-(void)_enumerateFormattedRowsWithColumnWidths:(id)arg1 handler:(/*^block*/id)arg2 ;
-(id)stringFromDate:(id)arg1 fallback:(id)arg2 ;
-(void)appendHeterogenousRow:(id)arg1 ;
-(id)formattedTable;
-(id)formattedTableHeader;
-(void)enumerateFormattedRows:(/*^block*/id)arg1 ;
-(void)appendRow:(id)arg1 ;
-(void)appendWorkout:(id)arg1 ;
-(id)initWithColumnTitles:(id)arg1 ;
-(id)stringFromTimeInterval:(double)arg1 ;
-(id)_columnWidths;
-(id)stringFromDate:(id)arg1 ;
-(NSString *)title;
-(long long)rowCount;
@end

