/*
* Generated on Thursday, January 14, 2021 at 2:22:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/

#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/MKActionRowItemViewDelegate.h>

@protocol MKPlaceActionManagerProtocol, _MKPlaceViewControllerDelegate;
@class NSArray, UILayoutGuide;

@interface MKPlaceCardActionsRowView : UIView <MKActionRowItemViewDelegate> {

	NSArray* _actionButtons;
	NSArray* _constraints;
	NSArray* _actionRowsArray;
	unsigned long long _maxButtonsPerRow;
	unsigned long long _style;
	UILayoutGuide* _marginLayoutguide;
	NSArray* _items;
	id<MKPlaceActionManagerProtocol> _actionManager;
	id<_MKPlaceViewControllerDelegate> _placeViewControllerDelegate;

}

@property (nonatomic,copy) NSArray * items;                                                                      //@synthesize items=_items - In the implementation block
@property (assign,nonatomic,__weak) id<MKPlaceActionManagerProtocol> actionManager;                              //@synthesize actionManager=_actionManager - In the implementation block
@property (assign,nonatomic,__weak) id<_MKPlaceViewControllerDelegate> placeViewControllerDelegate;              //@synthesize placeViewControllerDelegate=_placeViewControllerDelegate - In the implementation block
-(void)setItems:(NSArray *)arg1 ;
-(id)initWithStyle:(unsigned long long)arg1 ;
-(id<_MKPlaceViewControllerDelegate>)placeViewControllerDelegate;
-(void)setActionManager:(id<MKPlaceActionManagerProtocol>)arg1 ;
-(id<MKPlaceActionManagerProtocol>)actionManager;
-(NSArray *)items;
-(void)infoCardThemeChanged;
-(void)setPlaceViewControllerDelegate:(id<_MKPlaceViewControllerDelegate>)arg1 ;
-(void)createConstraints;
-(void)actionRowSelected:(id)arg1 ;
-(void)createActions;
-(void)createActionViews;
-(unsigned long long)maxButtonsPerRow;
-(void)layoutButtons;
-(void)invalidateActionButtons;
@end

