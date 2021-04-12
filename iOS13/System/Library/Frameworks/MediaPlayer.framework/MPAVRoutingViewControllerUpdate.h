/*
* Generated on Monday, March 1, 2021 at 2:31:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/


@class NSArray;

@interface MPAVRoutingViewControllerUpdate : NSObject {

	BOOL _canGroup;
	BOOL _hasPendingPickedRoutes;
	BOOL _shouldReload;
	NSArray* _pickedRoutes;
	NSArray* _pendingPickedRoutes;
	NSArray* _displayableAvailableRoutes;
	NSArray* _displayAsPickedRoutes;
	NSArray* _volumeCapableRoutes;

}

@property (nonatomic,copy) NSArray * pickedRoutes;                            //@synthesize pickedRoutes=_pickedRoutes - In the implementation block
@property (nonatomic,copy) NSArray * pendingPickedRoutes;                     //@synthesize pendingPickedRoutes=_pendingPickedRoutes - In the implementation block
@property (nonatomic,copy) NSArray * displayableAvailableRoutes;              //@synthesize displayableAvailableRoutes=_displayableAvailableRoutes - In the implementation block
@property (nonatomic,copy) NSArray * displayAsPickedRoutes;                   //@synthesize displayAsPickedRoutes=_displayAsPickedRoutes - In the implementation block
@property (nonatomic,copy) NSArray * volumeCapableRoutes;                     //@synthesize volumeCapableRoutes=_volumeCapableRoutes - In the implementation block
@property (assign,nonatomic) BOOL canGroup;                                   //@synthesize canGroup=_canGroup - In the implementation block
@property (assign,nonatomic) BOOL hasPendingPickedRoutes;                     //@synthesize hasPendingPickedRoutes=_hasPendingPickedRoutes - In the implementation block
@property (assign,nonatomic) BOOL shouldReload;                               //@synthesize shouldReload=_shouldReload - In the implementation block
-(BOOL)shouldReload;
-(void)setShouldReload:(BOOL)arg1 ;
-(NSArray *)pickedRoutes;
-(BOOL)hasPendingPickedRoutes;
-(NSArray *)pendingPickedRoutes;
-(NSArray *)volumeCapableRoutes;
-(NSArray *)displayAsPickedRoutes;
-(NSArray *)displayableAvailableRoutes;
-(void)setVolumeCapableRoutes:(NSArray *)arg1 ;
-(void)setDisplayAsPickedRoutes:(NSArray *)arg1 ;
-(void)setPendingPickedRoutes:(NSArray *)arg1 ;
-(void)setPickedRoutes:(NSArray *)arg1 ;
-(void)setDisplayableAvailableRoutes:(NSArray *)arg1 ;
-(BOOL)canGroup;
-(void)setCanGroup:(BOOL)arg1 ;
-(void)setHasPendingPickedRoutes:(BOOL)arg1 ;
@end

