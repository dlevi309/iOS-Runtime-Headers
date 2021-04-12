/*
* Generated on Thursday, January 14, 2021 at 2:28:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(id)_mapCardSection;
-(void)didEngageCardSection:(id)arg1 ;
-(void)_updateContentSize;
-(void)viewDidLayoutSubviews;
-(void)dealloc;
-(void)_loadCardSectionView;
-(id)_initWithCardSection:(id)arg1 ;
-(void)_loadCardSectionViewIfNeeded;
-(void)_snapshotCardSectionView;
-(BOOL)_shouldAttemptToSnapshotMapView;
-(id)_viewSnapshot;
-(void)_loadMapCardSectionView;
@end

