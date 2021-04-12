/*
* Generated on Monday, March 1, 2021 at 2:34:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/DataDetectorsNaturalLanguage.framework/DataDetectorsNaturalLanguage
*/


@class NSMutableArray, NSArray;

@interface IPMessageThread : NSObject {

	NSMutableArray* _threadRoots;
	NSMutableArray* _allUnits;
	NSArray* _allUnitsSorted;

}
-(void)appendUnit:(id)arg1 inResponseToUnit:(id)arg2 ;
-(id)orderedMessageUnits;
-(id)threads;
@end

