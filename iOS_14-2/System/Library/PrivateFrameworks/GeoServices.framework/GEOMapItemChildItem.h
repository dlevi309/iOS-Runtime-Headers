/*
* Generated on Thursday, January 14, 2021 at 2:21:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/


@class GEOMapItemChildPlace, GEOMapItemChildAction, GEOPublisherResult;

@interface GEOMapItemChildItem : NSObject {

	long long _childItemType;
	GEOMapItemChildPlace* _childItemPlace;
	GEOMapItemChildAction* _childItemAction;
	GEOPublisherResult* _publisherResult;

}

@property (assign,nonatomic) long long childItemType;                              //@synthesize childItemType=_childItemType - In the implementation block
@property (nonatomic,retain) GEOMapItemChildPlace * childItemPlace;                //@synthesize childItemPlace=_childItemPlace - In the implementation block
@property (nonatomic,retain) GEOMapItemChildAction * childItemAction;              //@synthesize childItemAction=_childItemAction - In the implementation block
@property (nonatomic,readonly) GEOPublisherResult * publisherResult;               //@synthesize publisherResult=_publisherResult - In the implementation block
-(long long)childItemType;
-(void)setChildItemType:(long long)arg1 ;
-(GEOMapItemChildPlace *)childItemPlace;
-(void)setChildItemPlace:(GEOMapItemChildPlace *)arg1 ;
-(GEOMapItemChildAction *)childItemAction;
-(void)setChildItemAction:(GEOMapItemChildAction *)arg1 ;
-(id)initWithPublisherResult:(id)arg1 ;
-(GEOPublisherResult *)publisherResult;
-(id)initWithChildItem:(id)arg1 ;
-(id)initWithChildPlace:(id)arg1 ;
@end

