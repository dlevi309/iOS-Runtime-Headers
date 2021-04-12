/*
* Generated on Thursday, January 14, 2021 at 2:27:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DataDetectorsNaturalLanguage.framework/DataDetectorsNaturalLanguage
*/


@class NSMutableArray, NSArray;

@interface IPMessageThread : NSObject {

	NSMutableArray* _threadRoots;
	NSMutableArray* _allUnits;
	NSArray* _allUnitsSorted;

}
-(id)threads;
-(void)appendUnit:(id)arg1 inResponseToUnit:(id)arg2 ;
-(id)orderedMessageUnits;
@end

