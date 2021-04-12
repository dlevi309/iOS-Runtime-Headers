/*
* Generated on Monday, March 1, 2021 at 2:31:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
*/

#import <EventKitUI/EKCalendarItemEditItem.h>

@class NSArray;

@interface EKEventAutocompleteResultsEditItem : EKCalendarItemEditItem {

	BOOL _suggestionApplied;
	NSArray* _results;

}

@property (nonatomic,retain) NSArray * results;                                                           //@synthesize results=_results - In the implementation block
@property (assign,nonatomic,__weak) id<EKEventAutocompleteResultsEditItemDelegate> delegate; 
@property (nonatomic,readonly) BOOL hasSuggestedLocationResult; 
+(id)_backgroundColor;
-(NSArray *)results;
-(void)setResults:(NSArray *)arg1 ;
-(id)cellForSubitemAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)numberOfSubitems;
-(double)defaultCellHeightForSubitemAtIndex:(unsigned long long)arg1 forWidth:(double)arg2 ;
-(BOOL)editor:(id)arg1 canSelectSubitem:(unsigned long long)arg2 ;
-(void)editor:(id)arg1 didSelectSubitem:(unsigned long long)arg2 ;
-(BOOL)editor:(id)arg1 shouldClearSelectionFromSubitem:(unsigned long long)arg2 ;
-(BOOL)shouldAppearWithVisibility:(int)arg1 ;
-(BOOL)hasSuggestedLocationResult;
@end

