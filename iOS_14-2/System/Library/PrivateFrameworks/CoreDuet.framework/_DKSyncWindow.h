/*
* Generated on Thursday, January 14, 2021 at 2:20:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(id)choppedWindowsFromSortedNormalizedWindows:(id)arg1 betweenWindowMinimumDate:(id)arg2 andWindowMaximumDate:(id)arg3 ;
-(long long)compare:(id)arg1 ;
-(id)debugDescription;
-(id)description;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

