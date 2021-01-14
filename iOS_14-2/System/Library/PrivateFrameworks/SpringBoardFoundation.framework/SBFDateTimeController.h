/*
* Generated on Thursday, January 14, 2021 at 2:23:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
*/


@class NSDate, NSHashTable;

@interface SBFDateTimeController : NSObject {

	NSDate* _overrideDate;
	NSHashTable* _observers;
	double _overrideDateOffset;

}

@property (nonatomic,copy,readonly) NSDate * currentDate; 
@property (nonatomic,copy) NSDate * overrideDate;                      //@synthesize overrideDate=_overrideDate - In the implementation block
@property (assign,nonatomic) double overrideDateOffset;                //@synthesize overrideDateOffset=_overrideDateOffset - In the implementation block
+(id)sharedInstance;
-(void)addObserver:(id)arg1 ;
-(NSDate *)currentDate;
-(void)setOverrideDateOffset:(double)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(double)overrideDateOffset;
-(void)setOverrideDate:(NSDate *)arg1 ;
-(NSDate *)overrideDate;
@end

