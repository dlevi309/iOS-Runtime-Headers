/*
* Generated on Monday, March 1, 2021 at 2:31:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/

#import <libobjc.A.dylib/MKPlaceActionManagerProtocol.h>

@class MKPlaceCardActionItem, TUCallProvider, NSString;

@interface MKPlaceActionManager : NSObject <MKPlaceActionManagerProtocol> {

	MKPlaceCardActionItem* _favoriteActionItem;
	MKPlaceCardActionItem* _homeActionItem;
	MKPlaceCardActionItem* _collectionActionItem;
	MKPlaceCardActionItem* _callActionItem;
	MKPlaceCardActionItem* _brandStoreActionItem;
	TUCallProvider* _callProvider;
	BOOL _placeInBookmarks;
	BOOL _placeInShortcuts;
	BOOL _showContactActions;
	BOOL _isCurrentLocation;
	id _placeCardDelegate;
	id _transitCardDelegate;

}

@property (assign,nonatomic) BOOL placeInBookmarks;                      //@synthesize placeInBookmarks=_placeInBookmarks - In the implementation block
@property (assign,nonatomic) BOOL placeInShortcuts;                      //@synthesize placeInShortcuts=_placeInShortcuts - In the implementation block
@property (assign,nonatomic) BOOL showContactActions;                    //@synthesize showContactActions=_showContactActions - In the implementation block
@property (assign,nonatomic) BOOL isCurrentLocation;                     //@synthesize isCurrentLocation=_isCurrentLocation - In the implementation block
@property (assign,nonatomic,__weak) id placeCardDelegate;                //@synthesize placeCardDelegate=_placeCardDelegate - In the implementation block
@property (assign,nonatomic,__weak) id transitCardDelegate;              //@synthesize transitCardDelegate=_transitCardDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(unsigned long long)options;
-(id)delegate;
-(void)openURL:(id)arg1 ;
-(id)contact;
-(id)mapItem;
-(BOOL)isCurrentLocation;
-(void)setIsCurrentLocation:(BOOL)arg1 ;
-(void)_launchMaps;
-(void)performAction:(id)arg1 options:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)setPlaceCardDelegate:(id)arg1 ;
-(id)placeItem;
-(id)createRowActions;
-(id)createFooterActions;
-(void)setPlaceInShortcuts:(BOOL)arg1 ;
-(void)setShowContactActions:(BOOL)arg1 ;
-(void)setPlaceInBookmarks:(BOOL)arg1 ;
-(BOOL)showContactActions;
-(BOOL)_showReportAProblem;
-(BOOL)placeInBookmarks;
-(BOOL)placeInShortcuts;
-(id)transitLineItem;
-(void)setTransitCardDelegate:(id)arg1 ;
-(void)_canMakeCalls:(/*^block*/id)arg1 ;
-(id)transitDelegate;
-(BOOL)_isCurrentLocationOrDroppedPin;
-(BOOL)_showCollectionItem;
-(id)collectionItemForFooter:(BOOL)arg1 ;
-(void)_enableStoreAction;
-(id)shortPlacecardFooterActions;
-(BOOL)_showHomeShortcutItem;
-(id)addtoHomeItem;
-(id)favoriteItemForFooter;
-(BOOL)_showAddPlaceEdit;
-(id)reportAProblemAddPlaceFooterAction;
-(BOOL)_showSuggestAnEdit;
-(id)reportAProblemFooterAction;
-(void)addLayoutInfoIfNeeded:(id)arg1 ;
-(BOOL)_showMapItemIdentifier;
-(id)placeCardDelegate;
-(id)transitCardDelegate;
@end

