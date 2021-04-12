/*
* Generated on Thursday, January 14, 2021 at 2:23:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(double)defaultCellHeightForSubitemAtIndex:(unsigned long long)arg1 forWidth:(double)arg2 ;
-(void)setEvent:(id)arg1 store:(id)arg2 ;
-(BOOL)configureWithCalendar:(id)arg1 preview:(BOOL)arg2 ;
-(id)cellForSubitemAtIndex:(unsigned long long)arg1 ;
-(void)reset;
-(void)shortenCell:(id)arg1 ;
-(void)dealloc;
@end

