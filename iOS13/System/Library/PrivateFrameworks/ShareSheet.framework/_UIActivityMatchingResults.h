/*
* Generated on Monday, March 1, 2021 at 2:31:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ShareSheet.framework/ShareSheet
*/


@class NSMutableSet, _UIActivityMatchingContext, NSArray;

@interface _UIActivityMatchingResults : NSObject {

	NSMutableSet* _excludedActivityTypesSet;
	_UIActivityMatchingContext* _context;
	NSArray* _orderedActivities;

}

@property (nonatomic,retain) NSArray * orderedActivities;                         //@synthesize orderedActivities=_orderedActivities - In the implementation block
@property (nonatomic,readonly) _UIActivityMatchingContext * context;              //@synthesize context=_context - In the implementation block
@property (nonatomic,readonly) NSArray * excludedActivityTypes; 
-(_UIActivityMatchingContext *)context;
-(NSArray *)excludedActivityTypes;
-(NSArray *)orderedActivities;
-(void)addExcludedActivityTypes:(id)arg1 ;
-(id)initWithActivityMatchingContext:(id)arg1 ;
-(void)setOrderedActivities:(NSArray *)arg1 ;
@end

