/*
* Generated on Monday, March 1, 2021 at 2:34:45 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreHandwriting.framework/CoreHandwriting
*/

#import <CoreHandwriting/CoreHandwriting-Structs.h>
#import <CoreHandwriting/CHStrokeGroup.h>

@interface CHTimeWindowStrokeGroup : CHStrokeGroup {

	double _startTimestamp;
	double _endTimestamp;

}

@property (nonatomic,readonly) double startTimestamp;              //@synthesize startTimestamp=_startTimestamp - In the implementation block
@property (nonatomic,readonly) double endTimestamp;                //@synthesize endTimestamp=_endTimestamp - In the implementation block
-(double)startTimestamp;
-(double)endTimestamp;
-(id)initWithStrokeIdentifiers:(id)arg1 firstStrokeIdentifier:(id)arg2 lastStrokeIdentifier:(id)arg3 bounds:(CGRect)arg4 startTimestamp:(double)arg5 endTimestamp:(double)arg6 ;
-(id)groupByAddingStrokeIdentifiers:(id)arg1 removingStrokeIdentifiers:(id)arg2 firstStrokeIdentifier:(id)arg3 lastStrokeIdentifier:(id)arg4 bounds:(CGRect)arg5 startTimestamp:(double)arg6 endTimestamp:(double)arg7 ;
@end

