/*
* Generated on Monday, March 1, 2021 at 2:34:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CarPlaySupport.framework/CarPlaySupport
*/

#import <CarPlaySupport/CarPlaySupport-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/CPSNavigationDisplaying.h>

@class CPSPrimaryManeuverView, CPSDashboardSecondaryManeuverView, NSArray, NSString;

@interface CPSDashboardManeuversCardView : UIView <CPSNavigationDisplaying> {

	CPSPrimaryManeuverView* _primaryManeuverView;
	CPSDashboardSecondaryManeuverView* _secondaryManeuverView;
	NSArray* _maneuvers;

}

@property (nonatomic,retain) CPSPrimaryManeuverView * primaryManeuverView;                           //@synthesize primaryManeuverView=_primaryManeuverView - In the implementation block
@property (nonatomic,retain) CPSDashboardSecondaryManeuverView * secondaryManeuverView;              //@synthesize secondaryManeuverView=_secondaryManeuverView - In the implementation block
@property (nonatomic,retain) NSArray * maneuvers;                                                    //@synthesize maneuvers=_maneuvers - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(CGSize)intrinsicContentSize;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)_updateConstraints;
-(void)showManeuvers:(id)arg1 usingDisplayStyles:(id)arg2 ;
-(void)updateEstimates:(id)arg1 forManeuver:(id)arg2 ;
-(BOOL)wantsLargeSize;
-(CPSPrimaryManeuverView *)primaryManeuverView;
-(CPSDashboardSecondaryManeuverView *)secondaryManeuverView;
-(NSArray *)maneuvers;
-(void)setPrimaryManeuverView:(CPSPrimaryManeuverView *)arg1 ;
-(void)setSecondaryManeuverView:(CPSDashboardSecondaryManeuverView *)arg1 ;
-(void)setManeuvers:(NSArray *)arg1 ;
@end

