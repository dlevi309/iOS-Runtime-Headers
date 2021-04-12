/*
* Generated on Monday, March 1, 2021 at 2:32:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)stringFromDate:(id)arg1 ;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(long long)rowCount;
-(id)stringFromTimeInterval:(double)arg1 ;
-(id)_columnWidths;
-(id)initWithColumnTitles:(id)arg1 ;
-(void)appendRow:(id)arg1 ;
-(void)appendWorkout:(id)arg1 ;
-(id)_formattedTableHeaderForColumnWidths:(id)arg1 ;
-(void)_appendColumn:(id)arg1 width:(long long)arg2 padding:(id)arg3 row:(id)arg4 ;
-(void)_enumerateFormattedRowsWithColumnWidths:(id)arg1 handler:(/*^block*/id)arg2 ;
-(id)stringFromDate:(id)arg1 fallback:(id)arg2 ;
-(void)appendHeterogenousRow:(id)arg1 ;
-(id)formattedTableHeader;
-(void)enumerateFormattedRows:(/*^block*/id)arg1 ;
-(id)formattedTable;
@end

