/*
* Generated on Monday, March 1, 2021 at 2:31:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
*/

#import <EventKitUI/EKEventDetailItem.h>
#import <libobjc.A.dylib/EKCellShortener.h>

@class PreferencesDoubleTwoPartValueCell, NSDate, NSString;

@interface EKEventDateDetailItem : EKEventDetailItem <EKCellShortener> {

	PreferencesDoubleTwoPartValueCell* _cell;
	NSDate* _startDate;
	NSDate* _endDate;
	BOOL _indent;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)reset;
-(id)cellForSubitemAtIndex:(unsigned long long)arg1 ;
-(BOOL)configureWithCalendar:(id)arg1 preview:(BOOL)arg2 ;
-(double)defaultCellHeightForSubitemAtIndex:(unsigned long long)arg1 forWidth:(double)arg2 ;
-(void)shortenCell:(id)arg1 ;
-(void)setEvent:(id)arg1 store:(id)arg2 ;
@end

