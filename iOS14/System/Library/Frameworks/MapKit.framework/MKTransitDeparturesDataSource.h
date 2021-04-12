/*
* Generated on Thursday, January 14, 2021 at 2:22:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/

#import <MapKit/MapKit-Structs.h>
#import <libobjc.A.dylib/_MKTransitConnectionCellDelegate.h>
#import <libobjc.A.dylib/MKTransitDeparturesCellDelegate.h>
#import <libobjc.A.dylib/MKTransitDeparturesDataProviderDelegate.h>
#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UITableViewDataSource.h>

@protocol MKTransitDeparturesDataSourceHosting, _MKInfoCardAnalyticsDelegate;
@class UITableView, NSMapTable, NSMutableDictionary, MKMapItem, MKArtworkDataSourceCache, MKTransitDeparturesDataProvider, NSString;

@interface MKTransitDeparturesDataSource : NSObject <_MKTransitConnectionCellDelegate, MKTransitDeparturesCellDelegate, MKTransitDeparturesDataProviderDelegate, UITableViewDelegate, UITableViewDataSource> {

	UITableView* _tableView;
	NSMapTable* _cachedSectionHeaders;
	NSMapTable* _cachedSectionFooters;
	NSMutableDictionary* _cachedImageOptions;
	NSMutableDictionary* _cachedMaxImageWidths;
	NSMutableDictionary* _cachedColumnCenteringWidths;
	BOOL _animatingRowInsertion;
	CGSize _transitioningSize;
	CGRect _lastMaxWidthBounds;
	BOOL _showingIncidents;
	BOOL _limitInteraction;
	BOOL _allowTransitLineSelection;
	BOOL _supportSystemSectionCollapsing;
	MKMapItem* _mapItem;
	MKArtworkDataSourceCache* _artworkCache;
	id<MKTransitDeparturesDataSourceHosting> _host;
	id<_MKInfoCardAnalyticsDelegate> _analyticsDelegate;
	MKTransitDeparturesDataProvider* _dataProvider;

}

@property (nonatomic,readonly) MKTransitDeparturesDataProvider * dataProvider;                                        //@synthesize dataProvider=_dataProvider - In the implementation block
@property (nonatomic,retain) MKMapItem * mapItem;                                                                     //@synthesize mapItem=_mapItem - In the implementation block
@property (nonatomic,readonly) MKArtworkDataSourceCache * artworkCache;                                               //@synthesize artworkCache=_artworkCache - In the implementation block
@property (assign,nonatomic,__weak) id<MKTransitDeparturesDataSourceHosting> host;                                    //@synthesize host=_host - In the implementation block
@property (assign,nonatomic,__weak) id<_MKInfoCardAnalyticsDelegate> analyticsDelegate;                               //@synthesize analyticsDelegate=_analyticsDelegate - In the implementation block
@property (assign,getter=isActive,nonatomic) BOOL active; 
@property (assign,getter=hasLimitedInteraction,nonatomic) BOOL limitInteraction;                                      //@synthesize limitInteraction=_limitInteraction - In the implementation block
@property (assign,getter=allowsTransitLineSelection,nonatomic) BOOL allowTransitLineSelection;                        //@synthesize allowTransitLineSelection=_allowTransitLineSelection - In the implementation block
@property (assign,getter=supportsSystemSectionCollapsing,nonatomic) BOOL supportSystemSectionCollapsing;              //@synthesize supportSystemSectionCollapsing=_supportSystemSectionCollapsing - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(void)invalidateLayout;
-(MKArtworkDataSourceCache *)artworkCache;
-(void)setHost:(id<MKTransitDeparturesDataSourceHosting>)arg1 ;
-(id<MKTransitDeparturesDataSourceHosting>)host;
-(long long)_numberOfRowsInSection:(long long)arg1 ;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(double)_heightForFooterInSection:(long long)arg1 ;
-(void)tableView:(id)arg1 didEndDisplayingCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(void)setActive:(BOOL)arg1 ;
-(BOOL)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2 ;
-(double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2 ;
-(id)possibleActions;
-(BOOL)isActive;
-(double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(MKMapItem *)mapItem;
-(MKTransitDeparturesDataProvider *)dataProvider;
-(void)reloadData;
-(void)didTransition;
-(BOOL)hasLimitedInteraction;
-(BOOL)allowsSystemSectionCollapsing;
-(void)recordIncidentsShowing:(BOOL)arg1 ;
-(double)_maxImageWidthForSystem:(id)arg1 ;
-(id)initWithTableView:(id)arg1 mapItem:(id)arg2 ;
-(void)setLimitInteraction:(BOOL)arg1 ;
-(void)setSupportSystemSectionCollapsing:(BOOL)arg1 ;
-(void)willTransitionToSize:(CGSize)arg1 ;
-(int)currentTransitCategory;
-(BOOL)_shouldPageSection:(long long)arg1 ;
-(id)_pagingPromptForSection:(long long)arg1 ;
-(BOOL)sectionHasHeader:(long long)arg1 ;
-(id)_imageForLine:(id)arg1 ;
-(id)_imageWithArtworkDataSource:(id)arg1 size:(long long)arg2 ;
-(double)_availableWidth;
-(id)_imageOptionSizeArraysForEnumeration;
-(id)_imageForLine:(id)arg1 size:(long long)arg2 ;
-(id)_imageWithArtworkDataSource:(id)arg1 ;
-(id)_smallerImageWithArtworkDataSource:(id)arg1 ;
-(BOOL)sectionHasFooter:(long long)arg1 ;
-(id)_smallestImageWithArtworkDataSource:(id)arg1 ;
-(long long)_lineImageSizeForSystem:(id)arg1 ;
-(id)_viewForHeaderInSection:(long long)arg1 ;
-(id)_viewForFooterInSection:(long long)arg1 ;
-(id)_messageCellForSection:(long long)arg1 ;
-(id)_connectionCellForRow:(long long)arg1 ;
-(id)_incidentCellForRow:(long long)arg1 inSection:(long long)arg2 ;
-(id)_systemCellForSection:(long long)arg1 ;
-(id)_departuresCellWithReuseIdentifier:(id)arg1 forIndexPath:(id)arg2 ;
-(void)_configureDeparturesCell:(id)arg1 forIndexPath:(id)arg2 ;
-(id)_indexPathWithHeader:(id)arg1 ;
-(void)setMapItem:(MKMapItem *)arg1 ;
-(void)reloadSections;
-(BOOL)allowsTransitLineSelection;
-(id)_indexPathWithoutHeader:(id)arg1 ;
-(id)_departureSequenceForIndexPath:(id)arg1 ;
-(int)_transitCategoryForSection:(long long)arg1 ;
-(id)_existingCellAtIndexPath:(id)arg1 ;
-(void)_setDisclosureArrowExpanded:(BOOL)arg1 inSystemCellAtIndexPath:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)_departureSequenceForIndexPath:(id)arg1 outIsNewLine:(BOOL*)arg2 outNextLineIsSame:(BOOL*)arg3 ;
-(id)_headerTextForSection:(long long)arg1 ;
-(void)_sectionHeaderButtonPressed:(id)arg1 ;
-(void)_showIncidentDetails;
-(void)_incrementPageControlValueForSection:(long long)arg1 identifier:(id)arg2 ;
-(id)_cellForRowAtIndexPath:(id)arg1 ;
-(void)_toggleHiddenSystemInSection:(long long)arg1 animated:(BOOL)arg2 ;
-(long long)_departureSequenceFrequencyTypeForAllDeparturesSections;
-(int)transitCategoryForFrequencyType:(long long)arg1 ;
-(void)infoButtonSelectedInConnectionCell:(id)arg1 ;
-(void)incidentButtonSelectedInDeparturesCell:(id)arg1 ;
-(id)traitsForTransitDeparturesDataProvider:(id)arg1 ;
-(void)transitDeparturesDataProviderWillUpdateDepartures:(id)arg1 ;
-(void)transitDeparturesDataProviderDidUpdateDepartures:(id)arg1 ;
-(void)transitDeparturesDataProviderDidReload:(id)arg1 ;
-(int)_transitCategoryForSequence:(id)arg1 ;
-(BOOL)supportsSystemSectionCollapsing;
-(void)setAllowTransitLineSelection:(BOOL)arg1 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(double)tableView:(id)arg1 estimatedHeightForHeaderInSection:(long long)arg2 ;
-(double)tableView:(id)arg1 estimatedHeightForFooterInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2 ;
-(id<_MKInfoCardAnalyticsDelegate>)analyticsDelegate;
-(void)setAnalyticsDelegate:(id<_MKInfoCardAnalyticsDelegate>)arg1 ;
-(id)imageForTransitLine:(id)arg1 ;
@end

