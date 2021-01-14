/*
* Generated on Thursday, January 14, 2021 at 2:23:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MapsSuggestions.framework/MapsSuggestions
*/

#import <MapsSuggestions/MapsSuggestionsMeCardObserver.h>

@protocol MapsSuggestionsMeCardReader;
@class MapsSuggestionsMeCard, NSString;

@interface MapsSuggestionsCorrectedMapItemProvider : NSObject <MapsSuggestionsMeCardObserver> {

	MapsSuggestionsMeCard* _meCard;
	id<MapsSuggestionsMeCardReader> _meCardReader;
	/*^block*/id _updateHandler;

}

@property (nonatomic,readonly) NSString * uniqueName; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)uniqueName;
-(id)initWithMeCardReader:(id)arg1 handler:(/*^block*/id)arg2 ;
-(id)mapItemFormShortcutForCNIdentifier:(id)arg1 ;
-(void)meCardReader:(id)arg1 didUpdateMeCard:(id)arg2 ;
-(void)dealloc;
@end

