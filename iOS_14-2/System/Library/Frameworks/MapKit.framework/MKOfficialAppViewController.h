/*
* Generated on Thursday, January 14, 2021 at 2:22:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/

#import <MapKit/MKPlaceSectionViewController.h>
#import <libobjc.A.dylib/MKOfficialAppViewDelegate.h>
#import <libobjc.A.dylib/_MKInfoCardChildViewControllerAnalyticsDelegate.h>
#import <libobjc.A.dylib/MKModuleViewControllerProtocol.h>

@protocol _MKInfoCardAnalyticsDelegate;
@class MKMapItem, MKOfficialAppView, MKPlaceSectionHeaderView, NSString;

@interface MKOfficialAppViewController : MKPlaceSectionViewController <MKOfficialAppViewDelegate, _MKInfoCardChildViewControllerAnalyticsDelegate, MKModuleViewControllerProtocol> {

	BOOL _isShowing;
	MKMapItem* _mapItem;
	MKOfficialAppView* _officialAppView;
	MKPlaceSectionHeaderView* _officialAppHeaderView;
	id<_MKInfoCardAnalyticsDelegate> _delegate;

}

@property (nonatomic,retain) MKOfficialAppView * officialAppView;                           //@synthesize officialAppView=_officialAppView - In the implementation block
@property (nonatomic,retain) MKPlaceSectionHeaderView * officialAppHeaderView;              //@synthesize officialAppHeaderView=_officialAppHeaderView - In the implementation block
@property (assign,nonatomic) BOOL isShowing;                                                //@synthesize isShowing=_isShowing - In the implementation block
@property (nonatomic,retain) MKMapItem * mapItem;                                           //@synthesize mapItem=_mapItem - In the implementation block
@property (assign,nonatomic,__weak) id<_MKInfoCardAnalyticsDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<_MKInfoCardAnalyticsDelegate>)delegate;
-(void)officialAppViewDidSelectPunchOutButton:(id)arg1 ;
-(void)setAppStoreApp:(id)arg1 ;
-(void)_loadOfficialApp;
-(void)updateOfficialViewButtonText;
-(void)_loadAppArtwork:(id)arg1 ;
-(void)_updateAppImage:(id)arg1 error:(id)arg2 ;
-(MKOfficialAppView *)officialAppView;
-(MKPlaceSectionHeaderView *)officialAppHeaderView;
-(void)setIsShowing:(BOOL)arg1 ;
-(void)setOfficialAppView:(MKOfficialAppView *)arg1 ;
-(void)setOfficialAppHeaderView:(MKPlaceSectionHeaderView *)arg1 ;
-(id)initWithMKMapItem:(id)arg1 ;
-(MKMapItem *)mapItem;
-(BOOL)isShowing;
-(void)setDelegate:(id<_MKInfoCardAnalyticsDelegate>)arg1 ;
-(BOOL)_canShowWhileLocked;
-(void)viewDidLoad;
-(void)setMapItem:(MKMapItem *)arg1 ;
-(id)infoCardChildPossibleActions;
-(id)infoCardChildUnactionableUIElements;
@end

