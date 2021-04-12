/*
* Generated on Monday, March 1, 2021 at 2:30:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/


@class GEOMapItemChildActionSearch;

@interface GEOMapItemChildAction : NSObject {

	long long _childActionType;
	GEOMapItemChildActionSearch* _childActionSearch;

}

@property (assign,nonatomic) long long childActionType;                                    //@synthesize childActionType=_childActionType - In the implementation block
@property (nonatomic,retain) GEOMapItemChildActionSearch * childActionSearch;              //@synthesize childActionSearch=_childActionSearch - In the implementation block
-(GEOMapItemChildActionSearch *)childActionSearch;
-(void)setChildActionSearch:(GEOMapItemChildActionSearch *)arg1 ;
-(long long)childActionType;
-(void)setChildActionType:(long long)arg1 ;
-(id)initWithChildAction:(id)arg1 ;
@end

