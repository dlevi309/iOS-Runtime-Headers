/*
* Generated on Monday, March 1, 2021 at 2:35:16 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SearchUICardKitProviderSupport.framework/SearchUICardKitProviderSupport
*/

#import <SearchUICardKitProviderSupport/SearchUICardKitProviderSupport-Structs.h>
#import <SearchUICardKitProviderSupport/SUICKPInteractiveCardSectionViewController.h>
#import <SearchUICardKitProviderSupport/SearchUIFeedbackDelegate.h>

@protocol CRKCardSectionView;
@class UIView, CRKContainerCardSectionView, NSString;

@interface SUICKPMapCardSectionViewController : SUICKPInteractiveCardSectionViewController <SearchUIFeedbackDelegate> {

	BOOL _needsToLoadCardSectionView;
	BOOL _inTrackingRunLoopMode;
	UIView*<CRKCardSectionView> _mapSectionView;
	CFRunLoopObserverRef _mainRunLoopObserverRef;

}

@property (nonatomic,retain) CRKContainerCardSectionView * view; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)cardSectionClasses;
-(void)dealloc;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)_updateContentSize;
-(void)didEngageCardSection:(id)arg1 ;
-(id)_mapCardSection;
-(void)_loadCardSectionView;
-(id)_initWithCardSection:(id)arg1 ;
-(void)_loadCardSectionViewIfNeeded;
-(void)_snapshotCardSectionView;
-(BOOL)_shouldAttemptToSnapshotMapView;
-(id)_viewSnapshot;
-(void)_loadMapCardSectionView;
@end

