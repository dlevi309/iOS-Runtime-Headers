/*
* Generated on Thursday, January 14, 2021 at 2:22:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/


@class NSMutableArray, NSMutableDictionary;

@interface MKPriorityToIndexMap : NSObject {

	NSMutableArray* _priorities;
	NSMutableDictionary* _prioritiesToIndexes;

}
-(id)objectForKeyedSubscript:(id)arg1 ;
-(id)init;
-(long long)indexOfPriority:(double)arg1 ;
-(BOOL)addPriorities:(id)arg1 ;
-(BOOL)contains:(id)arg1 ;
-(id)initWithPriorities:(id)arg1 ;
-(BOOL)containsPriority:(double)arg1 ;
-(void)appendRemainingPriorities:(id)arg1 prioritiesToReAdd:(id)arg2 ;
-(void)insertPriorities:(id)arg1 prioritiesToReAdd:(id)arg2 ;
-(id)nextPriorityFromPriorities:(id)arg1 prioritiesToReAdd:(id)arg2 ;
-(double)priorityOfIndex:(unsigned long long)arg1 ;
@end

