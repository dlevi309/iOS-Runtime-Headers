/*
* Generated on Monday, March 1, 2021 at 2:31:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/


@class MKMapItem, GEOSearchCategory, NSString;

@interface MKSiriInteraction : NSObject {

	int _action;
	int _target;
	int _resultIndex;
	MKMapItem* _mapItem;
	GEOSearchCategory* _searchCategory;
	NSString* _searchQueryString;

}

@property (assign,nonatomic) int action;                                      //@synthesize action=_action - In the implementation block
@property (assign,nonatomic) int target;                                      //@synthesize target=_target - In the implementation block
@property (nonatomic,retain) MKMapItem * mapItem;                             //@synthesize mapItem=_mapItem - In the implementation block
@property (assign,nonatomic) int resultIndex;                                 //@synthesize resultIndex=_resultIndex - In the implementation block
@property (nonatomic,retain) GEOSearchCategory * searchCategory;              //@synthesize searchCategory=_searchCategory - In the implementation block
@property (nonatomic,retain) NSString * searchQueryString;                    //@synthesize searchQueryString=_searchQueryString - In the implementation block
+(id)navigationHash;
+(void)setNavigationHash:(id)arg1 ;
+(id)_siriIntentMurmurHash:(id)arg1 ;
+(void)generateHashForNavigationURL:(id)arg1 ;
+(void)removeRecentIntentWithPlacemark:(id)arg1 ;
+(void)removeRecentIntentWithSearchText:(id)arg1 ;
-(void)setTarget:(int)arg1 ;
-(int)target;
-(int)action;
-(void)setAction:(int)arg1 ;
-(void)setResultIndex:(int)arg1 ;
-(int)resultIndex;
-(void)setMapItem:(MKMapItem *)arg1 ;
-(MKMapItem *)mapItem;
-(GEOSearchCategory *)searchCategory;
-(id)initWithGEOUIAction:(int)arg1 target:(int)arg2 mapItem:(id)arg3 resultIndex:(int)arg4 searchCategory:(id)arg5 searchQueryString:(id)arg6 ;
-(void)donateIfWanted;
-(BOOL)_isValidTargetForNavUI:(int)arg1 ;
-(id)_whiteListedPlaceCardActionAsString:(int)arg1 ;
-(id)_whiteListedSiriListActionAsString:(int)arg1 ;
-(id)_whiteListedNavigationActionAsString:(int)arg1 ;
-(BOOL)_isStartNavigationAction:(int)arg1 ;
-(void)_navTimerFired:(id)arg1 ;
-(id)_whiteListedBrowseCategoryActionAsString:(int)arg1 ;
-(id)_whiteListedSearchActionAsString:(int)arg1 ;
-(id)intentIfWanted;
-(BOOL)_isIntentDeletable;
-(id)_siriIntentHash:(id)arg1 ;
-(void)setSearchCategory:(GEOSearchCategory *)arg1 ;
-(NSString *)searchQueryString;
-(void)setSearchQueryString:(NSString *)arg1 ;
@end

