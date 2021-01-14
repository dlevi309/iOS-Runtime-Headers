/*
* Generated on Thursday, January 14, 2021 at 2:23:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MapsSuggestions.framework/MapsSuggestions
*/

#import <MapsSuggestions/MapsSuggestionsMapsSyncConnector.h>

@protocol MapsSuggestionsMapsSyncConnectorDelegate;
@class NSArray, NSMutableDictionary, NSString;

@interface MapsSuggestionsFakeMapsSyncConnector : NSObject <MapsSuggestionsMapsSyncConnector> {

	BOOL _breakCallbackPromise;
	NSArray* _configuredHistoryResults;
	NSMutableDictionary* _configureReviewedPlacesPerMuid;
	unsigned long long _calledAllContentOfType;
	unsigned long long _calledMapsSyncReviewedPlaceFetchWithMuids;
	id<MapsSuggestionsMapsSyncConnectorDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<MapsSuggestionsMapsSyncConnectorDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) NSString * uniqueName; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)uniqueName;
-(id<MapsSuggestionsMapsSyncConnectorDelegate>)delegate;
-(void)setDelegate:(id<MapsSuggestionsMapsSyncConnectorDelegate>)arg1 ;
-(BOOL)allContentOfType:(long long)arg1 handler:(/*^block*/id)arg2 ;
-(id)newReviewedPlace;
-(id)MapsSyncReviewedPlace_fetchWithMuids:(id)arg1 ;
-(void)configureBreakCallbackPromise;
-(void)configureReviewedPlace:(id)arg1 forMuid:(unsigned long long)arg2 ;
-(void)configureHistoryResults:(id)arg1 ;
-(void)fireDidChangeForType:(long long)arg1 ;
-(unsigned long long)calledAllContentOfType;
-(unsigned long long)calledMapsSyncReviewedPlaceFetchWithMuids;
@end

