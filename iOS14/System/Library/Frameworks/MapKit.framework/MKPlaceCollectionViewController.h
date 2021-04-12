/*
* Generated on Thursday, January 14, 2021 at 2:22:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)viewDidAppear:(BOOL)arg1 ;
-(BOOL)_canShowWhileLocked;
-(void)viewDidLoad;
-(void)setViewProvider:(id<MKCollectionViewProvider>)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)sectionView:(id)arg1 didSelectHeader:(id)arg2 ;
-(void)sectionView:(id)arg1 didSelectRow:(id)arg2 atIndex:(unsigned long long)arg3 ;
-(void)sectionView:(id)arg1 didDeselectRow:(id)arg2 atIndex:(unsigned long long)arg3 ;
-(void)sectionView:(id)arg1 didSelectFooter:(id)arg2 ;
-(id<MKCollectionViewProvider>)viewProvider;
-(void)reloadCollectionsAnimated:(BOOL)arg1 ;
@end

