/*
* Generated on Monday, March 1, 2021 at 2:31:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
*/


@interface EKUIEventActionHandler : NSObject
+(id)sharedInstance;
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

