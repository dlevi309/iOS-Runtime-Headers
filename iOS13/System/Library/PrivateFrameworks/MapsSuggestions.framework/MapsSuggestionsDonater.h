/*
* Generated on Monday, March 1, 2021 at 2:33:15 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * uniqueName; 
-(id)init;
-(void)dealloc;
-(void)_closeConnection;
-(NSString *)uniqueName;
-(void)_unscheduleCloseConnection;
-(BOOL)_openConnectionIfNecessary;
-(void)_scheduleCloseConnection;
-(void)_initCloseTimerIfNecessary;
-(BOOL)donateETA:(id)arg1 entry:(id)arg2 ;
-(BOOL)donateSignalPack:(id)arg1 ;
@end

