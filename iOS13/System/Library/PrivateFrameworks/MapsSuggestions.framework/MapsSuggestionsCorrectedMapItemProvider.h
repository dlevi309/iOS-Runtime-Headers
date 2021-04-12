/*
* Generated on Monday, March 1, 2021 at 2:33:15 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MapsSuggestions.framework/MapsSuggestions
*/

#import <MapsSuggestions/MapsSuggestionsMeCardObserver.h>

@class MapsSuggestionsShortcutManager, MapsSuggestionsMeCard, NSString;

@interface MapsSuggestionsCorrectedMapItemProvider : NSObject <MapsSuggestionsMeCardObserver> {

	MapsSuggestionsShortcutManager* _shortcutManager;
	MapsSuggestionsMeCard* _meCard;
	/*^block*/id _updateHandler;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * uniqueName; 
-(void)dealloc;
-(NSString *)uniqueName;
-(id)initWithUpdateHandler:(/*^block*/id)arg1 ;
-(void)meCardReader:(id)arg1 didUpdateMeCard:(id)arg2 ;
-(id)mapItemFormShortcutForCNIdentifier:(id)arg1 ;
@end

