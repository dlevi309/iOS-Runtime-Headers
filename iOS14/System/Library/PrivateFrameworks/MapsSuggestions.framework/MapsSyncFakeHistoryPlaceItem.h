/*
* Generated on Thursday, January 14, 2021 at 2:23:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MapsSuggestions.framework/MapsSuggestions
*/

#import <MapsSuggestions/MapsSyncFakeHistoryItem.h>
#import <MapsSuggestions/MapsSyncHistoryPlaceItem.h>

@class GEOMapItemStorage, NSUUID, NSDate, NSString;

@interface MapsSyncFakeHistoryPlaceItem : MapsSyncFakeHistoryItem <MapsSyncHistoryPlaceItem> {

	GEOMapItemStorage* _mapItemStorage;

}

@property (nonatomic,readonly) GEOMapItemStorage * mapItemStorage;              //@synthesize mapItemStorage=_mapItemStorage - In the implementation block
@property (nonatomic,copy,readonly) NSUUID * identifier; 
@property (nonatomic,copy,readonly) NSDate * createTime; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithIdentifier:(id)arg1 createTime:(id)arg2 mapItem:(id)arg3 ;
-(GEOMapItemStorage *)mapItemStorage;
@end

