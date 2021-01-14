/*
* Generated on Thursday, January 14, 2021 at 2:22:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/

#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/MKModuleViewControllerProtocol.h>

@protocol _MKPlaceViewControllerDelegate;
@class MKPlaceSectionItemView, MKPlaceCardActionsRowView, MKPlaceholderGridCache, NSArray, MKPlaceActionManager, NSString;

@interface MKPlaceCardActionsRowViewController : UIViewController <MKModuleViewControllerProtocol> {

	MKPlaceSectionItemView* _hairlineView;
	MKPlaceCardActionsRowView* _actionsRowView;
	MKPlaceholderGridCache* _placeholderGridCache;
	NSArray* _items;
	MKPlaceActionManager* _actionManager;
	id<_MKPlaceViewControllerDelegate> _placeViewControllerDelegate;

}

@property (nonatomic,copy) NSArray * items;                                                                      //@synthesize items=_items - In the implementation block
@property (assign,nonatomic,__weak) MKPlaceActionManager * actionManager;                                        //@synthesize actionManager=_actionManager - In the implementation block
@property (assign,nonatomic,__weak) id<_MKPlaceViewControllerDelegate> placeViewControllerDelegate;              //@synthesize placeViewControllerDelegate=_placeViewControllerDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setItems:(NSArray *)arg1 ;
-(id)initWithStyle:(unsigned long long)arg1 ;
-(id<_MKPlaceViewControllerDelegate>)placeViewControllerDelegate;
-(void)setActionManager:(MKPlaceActionManager *)arg1 ;
-(MKPlaceActionManager *)actionManager;
-(NSArray *)items;
-(BOOL)_canShowWhileLocked;
-(void)viewDidLoad;
-(void)infoCardThemeChanged;
-(void)loadView;
-(void)setPlaceViewControllerDelegate:(id<_MKPlaceViewControllerDelegate>)arg1 ;
-(void)viewDidLayoutSubviews;
@end

