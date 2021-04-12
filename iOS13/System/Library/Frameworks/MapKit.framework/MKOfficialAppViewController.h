/*
* Generated on Monday, March 1, 2021 at 2:31:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/

#import <MapKit/MKPlaceSectionViewController.h>
#import <libobjc.A.dylib/MKOfficialAppViewDelegate.h>
#import <libobjc.A.dylib/_MKInfoCardChildViewControllerAnalyticsDelegate.h>
#import <libobjc.A.dylib/MKModuleViewControllerProtocol.h>

@protocol MKOfficialAppViewControllerDelegate;
@class MKMapItem, MKOfficialAppView, MKPlaceSectionHeaderView, NSString;

@interface MKOfficialAppViewController : MKPlaceSectionViewController <MKOfficialAppViewDelegate, _MKInfoCardChildViewControllerAnalyticsDelegate, MKModuleViewControllerProtocol> {

	BOOL _isShowing;
	MKMapItem* _mapItem;
	id<MKOfficialAppViewControllerDelegate> _officialAppDelegate;
	MKOfficialAppView* _officialAppView;
	MKPlaceSectionHeaderView* _officialAppHeaderView;

}

@property (nonatomic,retain) MKOfficialAppView * officialAppView;                                             //@synthesize officialAppView=_officialAppView - In the implementation block
@property (nonatomic,retain) MKPlaceSectionHeaderView * officialAppHeaderView;                                //@synthesize officialAppHeaderView=_officialAppHeaderView - In the implementation block
@property (assign,nonatomic) BOOL isShowing;                                                                  //@synthesize isShowing=_isShowing - In the implementation block
@property (nonatomic,retain) MKMapItem * mapItem;                                                             //@synthesize mapItem=_mapItem - In the implementation block
@property (assign,nonatomic,__weak) id<MKOfficialAppViewControllerDelegate> officialAppDelegate;              //@synthesize officialAppDelegate=_officialAppDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)viewDidLoad;
-(BOOL)_canShowWhileLocked;
-(BOOL)isShowing;
-(void)setMapItem:(MKMapItem *)arg1 ;
-(MKMapItem *)mapItem;
-(id)infoCardChildPossibleActions;
-(id)infoCardChildUnactionableUIElements;
-(id)initWithMKMapItem:(id)arg1 ;
-(void)setOfficialAppDelegate:(id<MKOfficialAppViewControllerDelegate>)arg1 ;
-(void)officialAppViewDidSelectPunchOutButton:(id)arg1 ;
-(void)_loadOfficialApp;
-(void)updateOfficialViewButtonText;
-(void)_loadAppArtwork:(id)arg1 adamID:(id)arg2 ;
-(void)_updateView:(id)arg1 ;
-(id<MKOfficialAppViewControllerDelegate>)officialAppDelegate;
-(void)_updateAppImage:(id)arg1 error:(id)arg2 ;
-(MKOfficialAppView *)officialAppView;
-(MKPlaceSectionHeaderView *)officialAppHeaderView;
-(void)setIsShowing:(BOOL)arg1 ;
-(void)setOfficialAppView:(MKOfficialAppView *)arg1 ;
-(void)setOfficialAppHeaderView:(MKPlaceSectionHeaderView *)arg1 ;
@end

