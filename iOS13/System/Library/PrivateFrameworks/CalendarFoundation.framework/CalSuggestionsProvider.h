/*
* Generated on Monday, March 1, 2021 at 2:32:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CalendarFoundation.framework/CalendarFoundation
*/


@protocol SGSuggestionsServiceEventsProtocol;
@class NSObject;

@interface CalSuggestionsProvider : NSObject {

	BOOL _suggestionsFrameworkAvailable;
	NSObject*<SGSuggestionsServiceEventsProtocol> _service;

}

@property (assign,nonatomic) BOOL suggestionsFrameworkAvailable;                                 //@synthesize suggestionsFrameworkAvailable=_suggestionsFrameworkAvailable - In the implementation block
@property (nonatomic,retain) NSObject*<SGSuggestionsServiceEventsProtocol> service;              //@synthesize service=_service - In the implementation block
+(id)defaultProvider;
-(id)init;
-(NSObject*<SGSuggestionsServiceEventsProtocol>)service;
-(void)setService:(NSObject*<SGSuggestionsServiceEventsProtocol>)arg1 ;
-(void)_loadSuggestionsFramework;
-(BOOL)suggestionsFrameworkAvailable;
-(void)setSuggestionsFrameworkAvailable:(BOOL)arg1 ;
-(id)sgEventFromUniqueID:(id)arg1 error:(id*)arg2 ;
-(void)confirmEventWithSuggestionID:(id)arg1 ;
-(id)senderForEventWithSuggestionID:(id)arg1 ;
-(id)sgRecordIDForEventWithSuggestionID:(id)arg1 error:(id*)arg2 ;
-(id)fakeSGRecordID;
-(void)confirmSGEventWithRecordID:(id)arg1 ;
-(void)rejectSGEventWithRecordID:(id)arg1 ;
-(BOOL)eventsFoundInMailEnabled;
@end

