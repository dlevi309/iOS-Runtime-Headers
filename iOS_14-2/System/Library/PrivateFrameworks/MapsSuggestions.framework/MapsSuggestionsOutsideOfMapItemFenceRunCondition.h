/*
* Generated on Thursday, January 14, 2021 at 2:23:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MapsSuggestions.framework/MapsSuggestions
*/

#import <MapsSuggestions/MapsSuggestionsBaseRunCondition.h>

@class GEOMapItemStorage;

@interface MapsSuggestionsOutsideOfMapItemFenceRunCondition : MapsSuggestionsBaseRunCondition {

	GEOMapItemStorage* _mapItem;
	double _radius;

}
-(id)initWithMapItem:(id)arg1 radius:(double)arg2 ;
-(BOOL)shouldRun;
@end

