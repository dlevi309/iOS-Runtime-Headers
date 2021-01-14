/*
* Generated on Thursday, January 14, 2021 at 2:22:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/

#import <MapKit/MKPlaceSectionViewController.h>
#import <libobjc.A.dylib/MKPlaceCardActionSectionViewDelegate.h>
#import <libobjc.A.dylib/_MKStackViewDelegate.h>
#import <libobjc.A.dylib/_MKInfoCardChildViewControllerAnalyticsDelegate.h>

@protocol _MKPlaceViewControllerDelegate;
@class NSArray, MKPlaceActionManager, NSString;

@interface MKPlaceCardActionsViewController : MKPlaceSectionViewController <MKPlaceCardActionSectionViewDelegate, _MKStackViewDelegate, _MKInfoCardChildViewControllerAnalyticsDelegate> {

	BOOL _haveTwoColumns;
	BOOL _useSmallFonts;
	BOOL _showTopSeparator;
	BOOL _allowRowSelection;
	BOOL _useMarginLayout;
	BOOL _showTopButtonSeparator;
	NSArray* _actionItemArray;
	NSArray* _viewArray;
	MKPlaceActionManager* _actionManager;
	id<_MKPlaceViewControllerDelegate> _placeViewControllerDelegate;

}

@property (nonatomic,retain) NSArray * viewArray;                                                                //@synthesize viewArray=_viewArray - In the implementation block
@property (assign,nonatomic) BOOL haveTwoColumns;                                                                //@synthesize haveTwoColumns=_haveTwoColumns - In the implementation block
@property (assign,nonatomic) BOOL useSmallFonts;                                                                 //@synthesize useSmallFonts=_useSmallFonts - In the implementation block
@property (assign,nonatomic) BOOL useMarginLayout;                                                               //@synthesize useMarginLayout=_useMarginLayout - In the implementation block
@property (assign,nonatomic) BOOL showTopSeparator;                                                              //@synthesize showTopSeparator=_showTopSeparator - In the implementation block
@property (assign,nonatomic) BOOL showTopButtonSeparator;                                                        //@synthesize showTopButtonSeparator=_showTopButtonSeparator - In the implementation block
@property (assign,nonatomic) BOOL allowRowSelection;                                                             //@synthesize allowRowSelection=_allowRowSelection - In the implementation block
@property (nonatomic,copy) NSArray * actionItemArray;                                                            //@synthesize actionItemArray=_actionItemArray - In the implementation block
@property (assign,nonatomic,__weak) MKPlaceActionManager * actionManager;                                        //@synthesize actionManager=_actionManager - In the implementation block
@property (assign,nonatomic,__weak) id<_MKPlaceViewControllerDelegate> placeViewControllerDelegate;              //@synthesize placeViewControllerDelegate=_placeViewControllerDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)viewDidAppear:(BOOL)arg1 ;
-(id)init;
-(id<_MKPlaceViewControllerDelegate>)placeViewControllerDelegate;
-(void)setActionManager:(MKPlaceActionManager *)arg1 ;
-(MKPlaceActionManager *)actionManager;
-(void)viewDidLoad;
-(void)sectionView:(id)arg1 didSelectRow:(id)arg2 atIndex:(unsigned long long)arg3 ;
-(BOOL)useSmallFonts;
-(id)infoCardChildPossibleActions;
-(id)infoCardChildUnactionableUIElements;
-(void)placeCardActionSectionView:(id)arg1 buttonWithActionItemPressed:(id)arg2 ;
-(void)_setUpSectionViews;
-(id)_makePlaceActionButton;
-(void)setActionItemArray:(NSArray *)arg1 ;
-(void)setAllowRowSelection:(BOOL)arg1 ;
-(BOOL)haveTwoColumns;
-(void)setHaveTwoColumns:(BOOL)arg1 ;
-(void)setUseSmallFonts:(BOOL)arg1 ;
-(BOOL)showTopSeparator;
-(void)setShowTopSeparator:(BOOL)arg1 ;
-(NSArray *)actionItemArray;
-(void)setViewArray:(NSArray *)arg1 ;
-(BOOL)allowRowSelection;
-(BOOL)useMarginLayout;
-(void)setUseMarginLayout:(BOOL)arg1 ;
-(BOOL)showTopButtonSeparator;
-(void)setShowTopButtonSeparator:(BOOL)arg1 ;
-(void)setPlaceViewControllerDelegate:(id<_MKPlaceViewControllerDelegate>)arg1 ;
-(NSArray *)viewArray;
@end

