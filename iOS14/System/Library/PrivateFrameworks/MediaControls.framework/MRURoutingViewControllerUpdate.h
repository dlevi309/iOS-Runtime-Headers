/*
* Generated on Thursday, January 14, 2021 at 2:27:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaControls.framework/MediaControls
*/


@class NSArray, NSDictionary;

@interface MRURoutingViewControllerUpdate : NSObject {

	BOOL _canGroup;
	BOOL _hasPendingPickedRoutes;
	BOOL _shouldReload;
	NSArray* _pickedRoutes;
	NSArray* _pendingPickedRoutes;
	NSArray* _displayableAvailableRoutes;
	NSArray* _displayAsPickedRoutes;
	NSArray* _volumeCapableRoutes;
	NSDictionary* _routeGrouping;

}

@property (nonatomic,copy) NSArray * pickedRoutes;                            //@synthesize pickedRoutes=_pickedRoutes - In the implementation block
@property (nonatomic,copy) NSArray * pendingPickedRoutes;                     //@synthesize pendingPickedRoutes=_pendingPickedRoutes - In the implementation block
@property (nonatomic,copy) NSArray * displayableAvailableRoutes;              //@synthesize displayableAvailableRoutes=_displayableAvailableRoutes - In the implementation block
@property (nonatomic,copy) NSArray * displayAsPickedRoutes;                   //@synthesize displayAsPickedRoutes=_displayAsPickedRoutes - In the implementation block
@property (nonatomic,copy) NSArray * volumeCapableRoutes;                     //@synthesize volumeCapableRoutes=_volumeCapableRoutes - In the implementation block
@property (nonatomic,copy) NSDictionary * routeGrouping;                      //@synthesize routeGrouping=_routeGrouping - In the implementation block
@property (assign,nonatomic) BOOL canGroup;                                   //@synthesize canGroup=_canGroup - In the implementation block
@property (assign,nonatomic) BOOL hasPendingPickedRoutes;                     //@synthesize hasPendingPickedRoutes=_hasPendingPickedRoutes - In the implementation block
@property (assign,nonatomic) BOOL shouldReload;                               //@synthesize shouldReload=_shouldReload - In the implementation block
-(void)setDisplayableAvailableRoutes:(NSArray *)arg1 ;
-(NSArray *)pendingPickedRoutes;
-(BOOL)canGroup;
-(void)setPendingPickedRoutes:(NSArray *)arg1 ;
-(void)setVolumeCapableRoutes:(NSArray *)arg1 ;
-(NSArray *)displayableAvailableRoutes;
-(BOOL)shouldReload;
-(void)setCanGroup:(BOOL)arg1 ;
-(void)setPickedRoutes:(NSArray *)arg1 ;
-(void)setDisplayAsPickedRoutes:(NSArray *)arg1 ;
-(NSArray *)pickedRoutes;
-(void)setRouteGrouping:(NSDictionary *)arg1 ;
-(NSArray *)displayAsPickedRoutes;
-(void)setShouldReload:(BOOL)arg1 ;
-(NSDictionary *)routeGrouping;
-(BOOL)hasPendingPickedRoutes;
-(void)setHasPendingPickedRoutes:(BOOL)arg1 ;
-(NSArray *)volumeCapableRoutes;
@end

