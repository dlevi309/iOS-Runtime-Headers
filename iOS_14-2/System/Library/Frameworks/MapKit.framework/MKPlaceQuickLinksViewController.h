/*
* Generated on Thursday, January 14, 2021 at 2:22:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)quickLinkItemViewSelected:(id)arg1 ;
-(id<MKPlaceQuickLinksViewControllerDelegate>)delegate;
-(void)_captureTapActionWithAppClipLink:(id)arg1 ;
-(void)_captureTapActionWithQuickLink:(id)arg1 ;
-(MKMapItem *)mapItem;
-(void)setDelegate:(id<MKPlaceQuickLinksViewControllerDelegate>)arg1 ;
-(BOOL)_canShowWhileLocked;
-(void)viewDidLoad;
-(void)setMapItem:(MKMapItem *)arg1 ;
-(void)infoCardThemeChanged;
-(id)infoCardChildPossibleActions;
-(id)infoCardChildUnactionableUIElements;
-(void)createConstraints;
-(id<_MKInfoCardAnalyticsDelegate>)analyticsDelegate;
-(void)setAnalyticsDelegate:(id<_MKInfoCardAnalyticsDelegate>)arg1 ;
-(void)viewDidLayoutSubviews;
-(void)createActionViews;
-(unsigned long long)maxButtonsPerRow;
-(void)layoutButtons;
@end

