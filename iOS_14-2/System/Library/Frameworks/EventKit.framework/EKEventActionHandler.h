/*
* Generated on Thursday, January 14, 2021 at 2:21:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
*/


@interface EKEventActionHandler : NSObject
+(id)sharedInstance;
+(id)_logHandle;
+(id)_displayStringForDate:(id)arg1 ;
-(void)donateInteractionForAction:(id)arg1 onEvent:(id)arg2 ;
-(void)donatePredictiveAction:(id)arg1 forEvent:(id)arg2 ;
-(id)_intentForAction:(id)arg1 onEvent:(id)arg2 ;
-(id)createEventIntentForEvent:(id)arg1 ;
-(id)createEventIntentForEvent:(id)arg1 withSuggestionsInfoUniqueKey:(id)arg2 ;
-(void)handleEventCreation:(id)arg1 ;
-(void)prepareForEventUpdate:(id)arg1 ;
-(void)handleEventUpdate:(id)arg1 ;
-(void)handleEventDeletion:(id)arg1 ;
-(void)removeInteractionsForCalendar:(id)arg1 ;
@end

