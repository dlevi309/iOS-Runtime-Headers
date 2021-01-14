/*
* Generated on Thursday, January 14, 2021 at 2:23:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MapsSuggestions.framework/MapsSuggestions
*/

#import <MapsSuggestions/MapsSuggestionsFirstUnlockBase.h>
#import <libobjc.A.dylib/GEOKeyBagProtectedDataDidBecomeAvailableObserver.h>

@class NSString;

@interface MapsSuggestionsFirstUnlock : MapsSuggestionsFirstUnlockBase <GEOKeyBagProtectedDataDidBecomeAvailableObserver>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)didAddFirstObserver;
-(BOOL)hasDeviceBeenUnlocked;
-(id)init;
-(void)protectedDataDidBecomeAvailable:(id)arg1 ;
-(void)didRemoveLastObserver;
@end

