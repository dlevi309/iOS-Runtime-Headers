/*
* Generated on Monday, March 1, 2021 at 2:30:38 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/


@class GEOMapItemChildPlace, GEOMapItemChildAction;

@interface GEOMapItemChildItem : NSObject {

	long long _childItemType;
	GEOMapItemChildPlace* _childItemPlace;
	GEOMapItemChildAction* _childItemAction;

}

@property (assign,nonatomic) long long childItemType;                              //@synthesize childItemType=_childItemType - In the implementation block
@property (nonatomic,retain) GEOMapItemChildPlace * childItemPlace;                //@synthesize childItemPlace=_childItemPlace - In the implementation block
@property (nonatomic,retain) GEOMapItemChildAction * childItemAction;              //@synthesize childItemAction=_childItemAction - In the implementation block
-(long long)childItemType;
-(void)setChildItemType:(long long)arg1 ;
-(id)initWithChildItem:(id)arg1 ;
-(id)initWithChildPlace:(id)arg1 ;
-(GEOMapItemChildPlace *)childItemPlace;
-(void)setChildItemPlace:(GEOMapItemChildPlace *)arg1 ;
-(GEOMapItemChildAction *)childItemAction;
-(void)setChildItemAction:(GEOMapItemChildAction *)arg1 ;
@end

