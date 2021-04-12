/*
* Generated on Monday, March 1, 2021 at 2:31:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/

#import <MapKit/MKPlaceSectionViewController.h>
#import <libobjc.A.dylib/MKPlaceSectionViewDelegate.h>
#import <libobjc.A.dylib/MKModuleViewControllerProtocol.h>

@protocol MKCollectionViewProvider;
@class NSDictionary, NSMutableDictionary, MKPlaceSectionHeaderView, NSString;

@interface MKPlaceCollectionViewController : MKPlaceSectionViewController <MKPlaceSectionViewDelegate, MKModuleViewControllerProtocol> {

	NSDictionary* _collectionViews;
	NSMutableDictionary* _sectionsViews;
	MKPlaceSectionHeaderView* _headerView;
	BOOL _shouldReloadCollection;
	id<MKCollectionViewProvider> _viewProvider;

}

@property (assign,nonatomic,__weak) id<MKCollectionViewProvider> viewProvider;              //@synthesize viewProvider=_viewProvider - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)viewDidLoad;
-(BOOL)_canShowWhileLocked;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)sectionView:(id)arg1 didSelectHeader:(id)arg2 ;
-(void)sectionView:(id)arg1 didSelectRow:(id)arg2 atIndex:(unsigned long long)arg3 ;
-(void)sectionView:(id)arg1 didDeselectRow:(id)arg2 atIndex:(unsigned long long)arg3 ;
-(void)sectionView:(id)arg1 didSelectFooter:(id)arg2 ;
-(void)reloadCollections;
-(id<MKCollectionViewProvider>)viewProvider;
-(void)setViewProvider:(id<MKCollectionViewProvider>)arg1 ;
@end

