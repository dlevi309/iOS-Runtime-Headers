/*
* Generated on Thursday, January 14, 2021 at 2:22:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(int)resultIndex;
-(void)setSearchQueryString:(NSString *)arg1 ;
-(void)donateIfWanted;
-(id)_whiteListedSearchActionAsString:(int)arg1 ;
-(BOOL)_isStartNavigationAction:(int)arg1 ;
-(id)_siriIntentHash:(id)arg1 ;
-(id)_whiteListedNavigationActionAsString:(int)arg1 ;
-(BOOL)_isValidTargetForNavUI:(int)arg1 ;
-(id)_whiteListedPlaceCardActionAsString:(int)arg1 ;
-(int)action;
-(void)setAction:(int)arg1 ;
-(MKMapItem *)mapItem;
-(id)initWithGEOUIAction:(int)arg1 target:(int)arg2 mapItem:(id)arg3 resultIndex:(int)arg4 searchCategory:(id)arg5 searchQueryString:(id)arg6 ;
-(BOOL)_isIntentDeletable;
-(void)setMapItem:(MKMapItem *)arg1 ;
-(id)_whiteListedSiriListActionAsString:(int)arg1 ;
-(GEOSearchCategory *)searchCategory;
-(id)intentIfWanted;
-(id)_whiteListedBrowseCategoryActionAsString:(int)arg1 ;
-(void)setSearchCategory:(GEOSearchCategory *)arg1 ;
-(int)target;
-(void)setResultIndex:(int)arg1 ;
-(NSString *)searchQueryString;
-(void)_navTimerFired:(id)arg1 ;
@end

