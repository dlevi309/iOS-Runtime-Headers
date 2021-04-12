/*
* Generated on Thursday, January 14, 2021 at 2:23:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MapsSuggestions.framework/MapsSuggestions
*/

#import <MapsSuggestions/MapsSuggestionsObject.h>

@protocol OS_dispatch_queue, OS_dispatch_source;
@class NSObject, NSXPCConnection, NSString;

@interface MapsSuggestionsDonater : NSObject <MapsSuggestionsObject> {

	NSObject*<OS_dispatch_queue> _queue;
	NSXPCConnection* _connection;
	NSObject*<OS_dispatch_source> _closeTimer;

}

@property (nonatomic,readonly) NSString * uniqueName; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(NSString *)uniqueName;
-(BOOL)donateETA:(id)arg1 entry:(id)arg2 ;
-(BOOL)donateFlightLookupWithFlightNumber:(id)arg1 departureAirportCode:(id)arg2 departureTime:(id)arg3 ;
-(BOOL)donateSignalPack:(id)arg1 ;
-(void)dealloc;
@end

