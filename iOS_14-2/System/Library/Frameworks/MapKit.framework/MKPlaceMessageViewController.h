/*
* Generated on Thursday, January 14, 2021 at 2:22:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/

#import <MapKit/MKPlaceSectionViewController.h>
#import <libobjc.A.dylib/_MKInfoCardChildViewControllerAnalyticsDelegate.h>
#import <libobjc.A.dylib/MKModuleViewControllerProtocol.h>

@protocol _MKInfoCardAnalyticsDelegate, _MKPlaceItem;
@class NSString;

@interface MKPlaceMessageViewController : MKPlaceSectionViewController <_MKInfoCardChildViewControllerAnalyticsDelegate, MKModuleViewControllerProtocol> {

	id<_MKInfoCardAnalyticsDelegate> _analyticsDelegate;
	id<_MKPlaceItem> _placeItem;

}

@property (nonatomic,retain) id<_MKPlaceItem> placeItem;                                             //@synthesize placeItem=_placeItem - In the implementation block
@property (assign,nonatomic,__weak) id<_MKInfoCardAnalyticsDelegate> analyticsDelegate;              //@synthesize analyticsDelegate=_analyticsDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithPlaceItem:(id)arg1 ;
-(void)loadRow;
-(BOOL)_canShowWhileLocked;
-(void)viewDidLoad;
-(void)sectionView:(id)arg1 didSelectRow:(id)arg2 atIndex:(unsigned long long)arg3 ;
-(id)infoCardChildPossibleActions;
-(id)infoCardChildUnactionableUIElements;
-(id<_MKInfoCardAnalyticsDelegate>)analyticsDelegate;
-(void)setAnalyticsDelegate:(id<_MKInfoCardAnalyticsDelegate>)arg1 ;
-(id<_MKPlaceItem>)placeItem;
-(void)setPlaceItem:(id<_MKPlaceItem>)arg1 ;
@end

