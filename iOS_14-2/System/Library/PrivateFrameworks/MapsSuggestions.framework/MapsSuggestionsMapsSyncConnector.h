/*
* Generated on Thursday, January 14, 2021 at 2:23:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MapsSuggestions.framework/MapsSuggestions
*/


@protocol MapsSuggestionsMapsSyncConnector <MapsSuggestionsObject>
@property (assign,nonatomic,__weak) id<MapsSuggestionsMapsSyncConnectorDelegate> delegate; 
@required
-(id<MapsSuggestionsMapsSyncConnectorDelegate>)delegate;
-(void)setDelegate:(id)arg1;
-(BOOL)allContentOfType:(long long)arg1 handler:(/*^block*/id)arg2;
-(id)newReviewedPlace;
-(id)MapsSyncReviewedPlace_fetchWithMuids:(id)arg1;

@end

