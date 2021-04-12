/*
* Generated on Thursday, January 14, 2021 at 2:22:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/

#import <MapKit/MKPlaceSectionViewController.h>
#import <libobjc.A.dylib/_MKInfoCardChildViewControllerAnalyticsDelegate.h>
#import <libobjc.A.dylib/MKModuleViewControllerProtocol.h>

@protocol MKPlaceCardReviewsControllerDelegateMKPlaceCardActionControllerDelegate;
@class MKMapItem, MKPlaceReviewAvatarGenerator, NSArray, NSMutableArray, NSString;

@interface MKPlaceReviewsViewController : MKPlaceSectionViewController <_MKInfoCardChildViewControllerAnalyticsDelegate, MKModuleViewControllerProtocol> {

	MKMapItem* _mapItem;
	id<MKPlaceCardReviewsControllerDelegate><MKPlaceCardActionControllerDelegate> _reviewsControllerDelegate;
	MKPlaceReviewAvatarGenerator* _avatarGenerator;
	NSArray* _userSnippets;
	NSMutableArray* _cells;

}

@property (nonatomic,retain) MKPlaceReviewAvatarGenerator * avatarGenerator;                                                                              //@synthesize avatarGenerator=_avatarGenerator - In the implementation block
@property (nonatomic,retain) NSArray * userSnippets;                                                                                                      //@synthesize userSnippets=_userSnippets - In the implementation block
@property (nonatomic,retain) NSMutableArray * cells;                                                                                                      //@synthesize cells=_cells - In the implementation block
@property (nonatomic,retain) MKMapItem * mapItem;                                                                                                         //@synthesize mapItem=_mapItem - In the implementation block
@property (assign,nonatomic,__weak) id<MKPlaceCardReviewsControllerDelegate><MKPlaceCardActionControllerDelegate> reviewsControllerDelegate;              //@synthesize reviewsControllerDelegate=_reviewsControllerDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSMutableArray *)cells;
-(void)_updateAttribution;
-(void)setReviewsControllerDelegate:(id<MKPlaceCardReviewsControllerDelegate><MKPlaceCardActionControllerDelegate>)arg1 ;
-(MKMapItem *)mapItem;
-(unsigned long long)reviewsCount;
-(id)reviewAtIndex:(unsigned long long)arg1 ;
-(BOOL)_canShowWhileLocked;
-(void)viewDidLoad;
-(void)setMapItem:(MKMapItem *)arg1 ;
-(NSArray *)userSnippets;
-(void)_viewAllReviews;
-(void)setUserSnippets:(NSArray *)arg1 ;
-(id<MKPlaceCardReviewsControllerDelegate><MKPlaceCardActionControllerDelegate>)reviewsControllerDelegate;
-(void)_showReview:(id)arg1 index:(unsigned long long)arg2 ;
-(MKPlaceReviewAvatarGenerator *)avatarGenerator;
-(void)setAvatarGenerator:(MKPlaceReviewAvatarGenerator *)arg1 ;
-(void)sectionView:(id)arg1 didSelectRow:(id)arg2 atIndex:(unsigned long long)arg3 ;
-(id)infoCardChildPossibleActions;
-(id)infoCardChildUnactionableUIElements;
-(void)loadCells;
-(void)setCells:(NSMutableArray *)arg1 ;
@end

