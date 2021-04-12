/*
* Generated on Monday, March 1, 2021 at 2:34:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CarPlaySupport.framework/CarPlaySupport
*/

#import <CarPlaySupport/CarPlaySupport-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/CPSNavigationDisplaying.h>

@class CPSCardPlatterView, NSArray, NSMutableDictionary, NSMutableArray, CPSHairlineView, NSString;

@interface CPSUpcomingManeuversCardView : UIView <CPSNavigationDisplaying> {

	BOOL _usesDefaultBackgroundColor;
	BOOL _saveManeuversToDisk;
	CPSCardPlatterView* _platterView;
	NSArray* _maneuvers;
	NSMutableDictionary* _currentTravelEstimatesForManeuverIdentifiers;
	NSArray* _maneuverStyles;
	NSMutableArray* _maneuverViewStack;
	NSMutableArray* _verticalConstraints;
	CPSHairlineView* _hairlineView;

}

@property (nonatomic,readonly) NSArray * maneuvers;                                                           //@synthesize maneuvers=_maneuvers - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * currentTravelEstimatesForManeuverIdentifiers;              //@synthesize currentTravelEstimatesForManeuverIdentifiers=_currentTravelEstimatesForManeuverIdentifiers - In the implementation block
@property (nonatomic,readonly) NSArray * maneuverStyles;                                                      //@synthesize maneuverStyles=_maneuverStyles - In the implementation block
@property (nonatomic,readonly) NSMutableArray * maneuverViewStack;                                            //@synthesize maneuverViewStack=_maneuverViewStack - In the implementation block
@property (nonatomic,readonly) NSMutableArray * verticalConstraints;                                          //@synthesize verticalConstraints=_verticalConstraints - In the implementation block
@property (nonatomic,readonly) CPSHairlineView * hairlineView;                                                //@synthesize hairlineView=_hairlineView - In the implementation block
@property (assign,nonatomic) BOOL saveManeuversToDisk;                                                        //@synthesize saveManeuversToDisk=_saveManeuversToDisk - In the implementation block
@property (assign,nonatomic) BOOL usesDefaultBackgroundColor;                                                 //@synthesize usesDefaultBackgroundColor=_usesDefaultBackgroundColor - In the implementation block
@property (nonatomic,retain) CPSCardPlatterView * platterView;                                                //@synthesize platterView=_platterView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(CGSize)intrinsicContentSize;
-(void)setPlatterView:(CPSCardPlatterView *)arg1 ;
-(CPSCardPlatterView *)platterView;
-(NSMutableArray *)verticalConstraints;
-(CPSHairlineView *)hairlineView;
-(void)showManeuvers:(id)arg1 usingDisplayStyles:(id)arg2 ;
-(void)updateEstimates:(id)arg1 forManeuver:(id)arg2 ;
-(NSArray *)maneuvers;
-(void)_updateSecondaryManeuverBackgroundColor;
-(void)sizeToFitSize:(CGSize)arg1 ;
-(NSMutableArray *)maneuverViewStack;
-(id)_maneuverViews;
-(void)_updateHairlineViewBackgroundColor;
-(BOOL)usesDefaultBackgroundColor;
-(id)_secondaryManeuverViewIfExists;
-(NSMutableDictionary *)currentTravelEstimatesForManeuverIdentifiers;
-(void)setCurrentTravelEstimatesForManeuverIdentifiers:(NSMutableDictionary *)arg1 ;
-(BOOL)saveManeuversToDisk;
-(void)_updateVerticalConstraints;
-(id)initWithFrame:(CGRect)arg1 backgroundColor:(id)arg2 ;
-(void)setUsesDefaultBackgroundColor:(BOOL)arg1 ;
-(NSArray *)maneuverStyles;
-(void)setSaveManeuversToDisk:(BOOL)arg1 ;
@end

