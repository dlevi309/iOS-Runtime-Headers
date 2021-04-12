/*
* Generated on Monday, March 1, 2021 at 2:35:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/


@class NSDate, NSHashTable;

@interface SBDateTimeController : NSObject {

	NSDate* _overrideDate;
	NSHashTable* _observers;

}

@property (nonatomic,copy,readonly) NSDate * currentDate; 
@property (nonatomic,copy) NSDate * overrideDate; 
+(id)sharedInstance;
-(void)addObserver:(id)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(NSDate *)currentDate;
-(NSDate *)overrideDate;
-(void)setOverrideDate:(NSDate *)arg1 ;
@end

