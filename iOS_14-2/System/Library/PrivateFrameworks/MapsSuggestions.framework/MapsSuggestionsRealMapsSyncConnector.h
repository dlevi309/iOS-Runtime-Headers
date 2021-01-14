/*
* Generated on Thursday, January 14, 2021 at 2:23:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MapsSuggestions.framework/MapsSuggestions
*/

#import <MapsSuggestions/MapsSync.MapsSyncDataQueryDelegate.h>
#import <MapsSuggestions/MapsSuggestionsMapsSyncConnector.h>

@protocol MapsSuggestionsMapsSyncConnectorDelegate;
@class _TtC8MapsSync24MapsSyncHistoryItemQuery, NSString;

@interface MapsSuggestionsRealMapsSyncConnector : NSObject <MapsSync.MapsSyncDataQueryDelegate, MapsSuggestionsMapsSyncConnector> {

	id<MapsSuggestionsMapsSyncConnectorDelegate> _delegate;
	_TtC8MapsSync24MapsSyncHistoryItemQuery* _historyQuery;

}

@property (assign,nonatomic,__weak) id<MapsSuggestionsMapsSyncConnectorDelegate> delegate; 
@property (nonatomic,readonly) NSString * uniqueName; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(NSString *)uniqueName;
-(id<MapsSuggestionsMapsSyncConnectorDelegate>)delegate;
-(void)queryContentsDidChangeWithQuery:(id)arg1 ;
-(void)setDelegate:(id<MapsSuggestionsMapsSyncConnectorDelegate>)arg1 ;
-(BOOL)allContentOfType:(long long)arg1 handler:(/*^block*/id)arg2 ;
-(id)newReviewedPlace;
-(id)MapsSyncReviewedPlace_fetchWithMuids:(id)arg1 ;
@end

