/*
* Generated on Monday, March 1, 2021 at 2:31:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/

#import <MapKit/MKPlaceSectionViewController.h>
#import <libobjc.A.dylib/MKQuickLinkItemViewDelegate.h>
#import <libobjc.A.dylib/MKModuleViewControllerProtocol.h>
#import <libobjc.A.dylib/_MKInfoCardChildViewControllerAnalyticsDelegate.h>

@protocol MKPlaceQuickLinksViewControllerDelegate, _MKInfoCardAnalyticsDelegate;
@class NSArray, UIView, MKMapItem, NSString;

@interface MKPlaceQuickLinksViewController : MKPlaceSectionViewController <MKQuickLinkItemViewDelegate, MKModuleViewControllerProtocol, _MKInfoCardChildViewControllerAnalyticsDelegate> {

	NSArray* _quickLinks;
	NSArray* _quickLinkViews;
	UIView* _contentView;
	unsigned long long _maxButtonsPerRow;
	NSArray* _constraints;
	MKMapItem* _mapItem;
	id<MKPlaceQuickLinksViewControllerDelegate> _delegate;
	id<_MKInfoCardAnalyticsDelegate> _analyticsDelegate;

}

@property (nonatomic,retain) MKMapItem * mapItem;                                                      //@synthesize mapItem=_mapItem - In the implementation block
@property (assign,nonatomic,__weak) id<MKPlaceQuickLinksViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) id<_MKInfoCardAnalyticsDelegate> analyticsDelegate;                //@synthesize analyticsDelegate=_analyticsDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)placeQuickLinksViewControllerFor:(id)arg1 ;
-(id<MKPlaceQuickLinksViewControllerDelegate>)delegate;
-(void)setDelegate:(id<MKPlaceQuickLinksViewControllerDelegate>)arg1 ;
-(void)viewDidLoad;
-(BOOL)_canShowWhileLocked;
-(void)viewDidLayoutSubviews;
-(void)setMapItem:(MKMapItem *)arg1 ;
-(MKMapItem *)mapItem;
-(void)createConstraints;
-(void)infoCardThemeChanged;
-(id)infoCardChildPossibleActions;
-(id)infoCardChildUnactionableUIElements;
-(id<_MKInfoCardAnalyticsDelegate>)analyticsDelegate;
-(void)setAnalyticsDelegate:(id<_MKInfoCardAnalyticsDelegate>)arg1 ;
-(void)quickLinkItemViewSelected:(id)arg1 ;
-(void)createActionViews;
-(unsigned long long)maxButtonsPerRow;
-(void)layoutButtons;
-(void)_captureTapActionWithQuickLink:(id)arg1 ;
@end

