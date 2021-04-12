/*
* Generated on Monday, March 1, 2021 at 2:30:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
*/

#import <CoreDuet/CoreDuet-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class _DKEvent, NSDate;

@interface _DKSyncWindow : NSObject <NSCopying> {

	_DKEvent* _event;
	NSDate* _startDate;
	NSDate* _endDate;

}

@property (nonatomic,retain) _DKEvent * event;                //@synthesize event=_event - In the implementation block
@property (nonatomic,retain) NSDate * startDate;              //@synthesize startDate=_startDate - In the implementation block
@property (nonatomic,retain) NSDate * endDate;                //@synthesize endDate=_endDate - In the implementation block
+(id)syncWindowWithStartDate:(id)arg1 endDate:(id)arg2 ;
+(id)completedWindowsWithSortedEvents:(id)arg1 windows:(id)arg2 fetchOrder:(long long)arg3 fillOrder:(unsigned long long)arg4 hitLimit:(BOOL)arg5 ;
+(id)unionOfSortedSyncWindows:(id)arg1 ;
+(id)windowsThatOverlapWithWindowMinimumDate:(id)arg1 windowMaximumDate:(id)arg2 sortedSyncWindows:(id)arg3 ;
+(id)lastWindowMissingFromSortedNormalizedWindows:(id)arg1 windowMinimumDate:(id)arg2 windowMaximumDate:(id)arg3 ;
+(id)choppedWindowsFromSortedNormalizedWindows:(id)arg1 betweenWindowMinimumDate:(id)arg2 andWindowMaximumDate:(id)arg3 ;
+(id)lastWindowMissingFromSortedWindows:(id)arg1 windowMinimumDate:(id)arg2 windowMaximumDate:(id)arg3 ;
+(id)completedWindowsFromWindows:(id)arg1 firstEvent:(id)arg2 lastEvent:(id)arg3 fetchOrder:(long long)arg4 fillOrder:(unsigned long long)arg5 hitLimit:(BOOL)arg6 ;
+(id)sortedUnionOfSortedWindows:(id)arg1 andSortedWindows:(id)arg2 ;
+(id)windowsMissingFromSortedWindows:(id)arg1 windowMinimumDate:(id)arg2 windowMaximumDate:(id)arg3 ;
+(id)redundantWindowsFromSortedWindows:(id)arg1 olderThanDate:(id)arg2 ;
+(id)dictionaryArrayFromWindows:(id)arg1 ;
+(id)windowsFromDictionaryArray:(id)arg1 ;
+(id)linearDescriptionOfSortedWindows:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)debugDescription;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)compare:(id)arg1 ;
-(NSDate *)startDate;
-(NSDate *)endDate;
-(void)setStartDate:(NSDate *)arg1 ;
-(void)setEndDate:(NSDate *)arg1 ;
-(_DKEvent *)event;
-(void)setEvent:(_DKEvent *)arg1 ;
-(id)initWithEvent:(id)arg1 ;
-(id)unionWithSyncWindow:(id)arg1 ;
-(BOOL)isEqualToWindow:(id)arg1 ;
@end

