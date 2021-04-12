/*
* Generated on Monday, March 1, 2021 at 2:30:16 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


#import <UIKitCore/UIKitCore-Structs.h>
@class NSIndexPath, NSArray;

@interface UIMultiSelectInteractionState : NSObject {

	unsigned long long _ignoringSelectionChangedNotificationsCounter;
	BOOL _selecting;
	NSIndexPath* _startIndexPath;
	NSIndexPath* _endIndexPath;
	NSArray* _originallySelectedIndexPaths;
	NSArray* _allSelectedIndexPaths;
	CGPoint _startPoint;

}

@property (assign,nonatomic) CGPoint startPoint;                                        //@synthesize startPoint=_startPoint - In the implementation block
@property (nonatomic,retain) NSIndexPath * startIndexPath;                              //@synthesize startIndexPath=_startIndexPath - In the implementation block
@property (nonatomic,retain) NSIndexPath * endIndexPath;                                //@synthesize endIndexPath=_endIndexPath - In the implementation block
@property (assign,getter=isSelecting,nonatomic) BOOL selecting;                         //@synthesize selecting=_selecting - In the implementation block
@property (nonatomic,copy) NSArray * originallySelectedIndexPaths;                      //@synthesize originallySelectedIndexPaths=_originallySelectedIndexPaths - In the implementation block
@property (nonatomic,copy) NSArray * allSelectedIndexPaths;                             //@synthesize allSelectedIndexPaths=_allSelectedIndexPaths - In the implementation block
@property (nonatomic,readonly) BOOL ignoringSelectionChangedNotifications; 
-(void)setStartPoint:(CGPoint)arg1 ;
-(CGPoint)startPoint;
-(NSIndexPath *)startIndexPath;
-(NSIndexPath *)endIndexPath;
-(void)setAllSelectedIndexPaths:(NSArray *)arg1 ;
-(void)ignoreSelectionChangedNotificationsWithBlock:(/*^block*/id)arg1 ;
-(id)pathsToSelectForInterpolatedIndexPaths:(id)arg1 ;
-(id)pathsToDeselectForInterpolatedIndexPaths:(id)arg1 currentlySelectedIndexPaths:(id)arg2 ;
-(id)initWithCurrentSelection:(id)arg1 ;
-(void)updateStateWithDifferenceFromCurrentSelection:(id)arg1 ;
-(NSArray *)originallySelectedIndexPaths;
-(void)updateStateWithStartingIndexPath:(id)arg1 otherSelectedIndexPaths:(id)arg2 ;
-(void)setOriginallySelectedIndexPaths:(NSArray *)arg1 ;
-(BOOL)stillValidForSelectedIndexPaths:(id)arg1 ;
-(NSArray *)allSelectedIndexPaths;
-(BOOL)isSelecting;
-(void)setStartIndexPath:(NSIndexPath *)arg1 ;
-(void)setEndIndexPath:(NSIndexPath *)arg1 ;
-(void)setSelecting:(BOOL)arg1 ;
-(BOOL)ignoringSelectionChangedNotifications;
@end

