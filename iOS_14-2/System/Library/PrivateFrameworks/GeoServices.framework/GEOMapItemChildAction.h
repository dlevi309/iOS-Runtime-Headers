/*
* Generated on Thursday, January 14, 2021 at 2:21:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setChildActionType:(long long)arg1 ;
-(void)setChildActionSearch:(GEOMapItemChildActionSearch *)arg1 ;
-(long long)childActionType;
-(id)initWithChildAction:(id)arg1 ;
@end

