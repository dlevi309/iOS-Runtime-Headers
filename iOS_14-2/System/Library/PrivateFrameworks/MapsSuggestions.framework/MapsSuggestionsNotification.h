/*
* Generated on Thursday, January 14, 2021 at 2:23:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MapsSuggestions.framework/MapsSuggestions
*/

#import <MapsSuggestions/MapsSuggestions-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface MapsSuggestionsNotification : NSObject <NSCopying> {

	Notification _notification;

}

@property (nonatomic,readonly) const char* darwinNotification; 
@property (nonatomic,readonly) unsigned long long state; 
-(unsigned long long)state;
-(id)initWithCppNotification:(const Notification*)arg1 ;
-(const char*)darwinNotification;
-(BOOL)stateCouldHaveBeenPayloadString:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

