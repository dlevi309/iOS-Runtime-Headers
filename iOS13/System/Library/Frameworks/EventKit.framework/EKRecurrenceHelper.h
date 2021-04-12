/*
* Generated on Monday, March 1, 2021 at 2:32:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
*/


#import <EventKit/EventKit-Structs.h>
@class NSString, NSArray;

@interface EKRecurrenceHelper : NSObject {

	NSString* _specifier;
	BOOL _dirty;
	BOOL _parsed;
	NSArray* _daysOfTheWeek;
	NSArray* _daysOfTheMonth;
	NSArray* _daysOfTheYear;
	NSArray* _weeksOfTheYear;
	NSArray* _monthsOfTheYear;
	NSArray* _setPositions;

}

@property (nonatomic,readonly) BOOL isDirty; 
@property (nonatomic,copy) NSString * specifier; 
@property (nonatomic,copy) NSArray * daysOfTheWeek; 
@property (nonatomic,copy) NSArray * daysOfTheMonth; 
@property (nonatomic,copy) NSArray * daysOfTheYear; 
@property (nonatomic,copy) NSArray * weeksOfTheYear; 
@property (nonatomic,copy) NSArray * monthsOfTheYear; 
@property (nonatomic,copy) NSArray * setPositions; 
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)specifier;
-(BOOL)isDirty;
-(void)setSpecifier:(NSString *)arg1 ;
-(id)initWithSpecifier:(id)arg1 ;
-(void)revert;
-(NSArray *)daysOfTheWeek;
-(NSArray *)daysOfTheMonth;
-(void)setDaysOfTheMonth:(NSArray *)arg1 ;
-(NSArray *)monthsOfTheYear;
-(void)setMonthsOfTheYear:(NSArray *)arg1 ;
-(void)setDaysOfTheWeek:(NSArray *)arg1 ;
-(NSArray *)setPositions;
-(void)setSetPositions:(NSArray *)arg1 ;
-(NSArray *)daysOfTheYear;
-(NSArray *)weeksOfTheYear;
-(void)setDaysOfTheYear:(NSArray *)arg1 ;
-(void)setWeeksOfTheYear:(NSArray *)arg1 ;
-(void)_updateSpecifier;
-(void)_clearArrays;
-(void)_parseSpecifierIfNeeded;
-(void)_appendDaysOfTheWeek:(id)arg1 toSpecifier:(id)arg2 ;
-(void)_appendIndexList:(id)arg1 toSpecifier:(id)arg2 propertyKey:(unsigned short)arg3 ;
-(id)_parseDaysOfWeek:(SCD_Struct_EK8*)arg1 range:(SCD_Struct_EK7)arg2 ;
-(id)_parseIndexList:(SCD_Struct_EK8*)arg1 range:(SCD_Struct_EK7)arg2 ;
@end

