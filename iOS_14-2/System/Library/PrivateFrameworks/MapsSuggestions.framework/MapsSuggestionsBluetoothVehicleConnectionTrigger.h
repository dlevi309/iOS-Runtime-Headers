/*
* Generated on Thursday, January 14, 2021 at 2:23:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MapsSuggestions.framework/MapsSuggestions
*/

#import <MapsSuggestions/MapsSuggestionsCompositeTriggeringToggle.h>
#import <MapsSuggestions/MapsSuggestionsTriggerObserver.h>

@class MapsSuggestionsDarwinNotificationTrigger, NSString;

@interface MapsSuggestionsBluetoothVehicleConnectionTrigger : MapsSuggestionsCompositeTriggeringToggle <MapsSuggestionsTriggerObserver> {

	BOOL _onExit;
	BOOL _onConnect;
	BOOL _onDisconnect;
	MapsSuggestionsDarwinNotificationTrigger* _btDisconnectTrigger;
	MapsSuggestionsDarwinNotificationTrigger* _btExitTrigger;
	MapsSuggestionsDarwinNotificationTrigger* _btConnectTrigger;

}

@property (nonatomic,readonly) NSString * uniqueName; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)didAddFirstObserver;
-(void)triggerFired:(id)arg1 ;
-(void)didRemoveLastObserver;
-(id)initFireOnConnect:(BOOL)arg1 disconnect:(BOOL)arg2 exit:(BOOL)arg3 ;
@end

