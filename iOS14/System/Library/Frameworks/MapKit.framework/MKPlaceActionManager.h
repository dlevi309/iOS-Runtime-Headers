/*
* Generated on Thursday, January 14, 2021 at 2:22:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/

#import <libobjc.A.dylib/MKPlaceActionManagerProtocol.h>

@class MKPlaceCardActionItem, TUCallProvider, NSString;

@interface MKPlaceActionManager : NSObject <MKPlaceActionManagerProtocol> {

	MKPlaceCardActionItem* _favoriteActionItem;
	MKPlaceCardActionItem* _homeActionItem;
	MKPlaceCardActionItem* _collectionActionItem;
	MKPlaceCardActionItem* _callActionItem;
	MKPlaceCardActionItem* _websiteActionItem;
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
-(id)contact;
-(id)createFooterActions;
-(id)init;
-(id)delegate;
-(id)createMenuActions;
-(void)setPlaceInShortcuts:(BOOL)arg1 ;
-(void)setShowContactActions:(BOOL)arg1 ;
-(void)_launchMaps;
-(void)setPlaceInBookmarks:(BOOL)arg1 ;
-(BOOL)showContactActions;
-(unsigned long long)options;
-(id)mapItem;
-(void)setIsCurrentLocation:(BOOL)arg1 ;
-(BOOL)isCurrentLocation;
-(BOOL)placeInBookmarks;
-(BOOL)placeInShortcuts;
-(void)openURL:(id)arg1 ;
-(BOOL)_showReportAProblem;
-(void)performAction:(id)arg1 options:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_canMakeCalls:(/*^block*/id)arg1 ;
-(id)transitDelegate;
-(BOOL)_isCurrentLocationOrDroppedPin;
-(id)createRowActionsWithStyle:(unsigned long long)arg1 ;
-(BOOL)_showCollectionItem;
-(id)collectionItemForFooter:(BOOL)arg1 ;
-(void)_enableStoreAction;
-(BOOL)_showHomeShortcutItem;
-(id)shortPlacecardFooterActions;
-(id)optIntoAddingContributionsAction;
-(id)addtoHomeItem;
-(id)favoriteItemForFooter;
-(BOOL)_showAddPlaceEdit;
-(id)reportAProblemAddPlaceFooterAction;
-(BOOL)_showReportAnIssue;
-(id)transitLineItem;
-(void)setTransitCardDelegate:(id)arg1 ;
-(id)reportAProblemFooterAction;
-(void)addLayoutInfoIfNeeded:(id)arg1 ;
-(BOOL)_showMapItemIdentifier;
-(id)placeItem;
-(id)placeCardDelegate;
-(id)transitCardDelegate;
-(void)setPlaceCardDelegate:(id)arg1 ;
@end

