/*
* Generated on Monday, March 1, 2021 at 2:34:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CarPlaySupport.framework/CarPlaySupport
*/

#import <CarPlaySupport/CarPlaySupport-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/CPSNavigationDisplaying.h>

@protocol CPSSafeAreaDelegate;
@class CPSDashboardEstimatesView, UIView, NSLayoutConstraint, NSString;

@interface CPSDashboardEstimatesViewController : UIViewController <CPSNavigationDisplaying> {

	id<CPSSafeAreaDelegate> _safeAreaDelegate;
	CPSDashboardEstimatesView* _estimatesView;
	UIView* _platterView;
	NSLayoutConstraint* _platterBottomConstraint;

}

@property (nonatomic,retain) CPSDashboardEstimatesView * estimatesView;                    //@synthesize estimatesView=_estimatesView - In the implementation block
@property (nonatomic,retain) UIView * platterView;                                         //@synthesize platterView=_platterView - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * platterBottomConstraint;                 //@synthesize platterBottomConstraint=_platterBottomConstraint - In the implementation block
@property (assign,nonatomic,__weak) id<CPSSafeAreaDelegate> safeAreaDelegate;              //@synthesize safeAreaDelegate=_safeAreaDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)viewDidLoad;
-(void)setPlatterView:(UIView *)arg1 ;
-(UIView *)platterView;
-(UIEdgeInsets)_safeAreaInsets;
-(void)updateTripEstimates:(id)arg1 ;
-(void)navigator:(id)arg1 didEndTrip:(BOOL)arg2 ;
-(void)setSafeAreaDelegate:(id<CPSSafeAreaDelegate>)arg1 ;
-(NSLayoutConstraint *)platterBottomConstraint;
-(void)setPlatterBottomConstraint:(NSLayoutConstraint *)arg1 ;
-(CPSDashboardEstimatesView *)estimatesView;
-(id<CPSSafeAreaDelegate>)safeAreaDelegate;
-(void)setEstimatesView:(CPSDashboardEstimatesView *)arg1 ;
@end

