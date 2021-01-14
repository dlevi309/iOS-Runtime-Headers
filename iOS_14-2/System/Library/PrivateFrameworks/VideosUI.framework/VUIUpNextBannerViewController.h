/*
* Generated on Thursday, January 14, 2021 at 2:24:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/

#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/__TVShelfViewControllerDelegate.h>
#import <libobjc.A.dylib/TVMediaProviding.h>
#import <libobjc.A.dylib/TVAppTemplateImpressionable.h>

@class TVMediaInfo, IKViewElement, _TVShelfViewController, TVObservableEventController, UIView, NSString;

@interface VUIUpNextBannerViewController : UIViewController <__TVShelfViewControllerDelegate, TVMediaProviding, TVAppTemplateImpressionable> {

	BOOL _firstViewAppearance;
	unsigned long long _host;
	IKViewElement* _viewElement;
	_TVShelfViewController* _shelfViewController;
	TVMediaInfo* _selectedMediaInfo;
	TVObservableEventController* _observableEventController;

}

@property (nonatomic,retain) IKViewElement * viewElement;                                          //@synthesize viewElement=_viewElement - In the implementation block
@property (nonatomic,retain) _TVShelfViewController * shelfViewController;                         //@synthesize shelfViewController=_shelfViewController - In the implementation block
@property (nonatomic,retain) TVMediaInfo * selectedMediaInfo;                                      //@synthesize selectedMediaInfo=_selectedMediaInfo - In the implementation block
@property (nonatomic,retain) TVObservableEventController * observableEventController;              //@synthesize observableEventController=_observableEventController - In the implementation block
@property (assign,getter=isFirstViewAppearance,nonatomic) BOOL firstViewAppearance;                //@synthesize firstViewAppearance=_firstViewAppearance - In the implementation block
@property (nonatomic,readonly) unsigned long long host;                                            //@synthesize host=_host - In the implementation block
@property (nonatomic,readonly) UIView * visualEffectView; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(unsigned long long)host;
-(id)preferredFocusEnvironments;
-(id)init;
-(void)viewWillAppear:(BOOL)arg1 ;
-(UIView *)visualEffectView;
-(id)initWithHost:(unsigned long long)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)loadView;
-(void)dealloc;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(IKViewElement *)viewElement;
-(void)setViewElement:(IKViewElement *)arg1 ;
-(BOOL)isFirstViewAppearance;
-(void)setFirstViewAppearance:(BOOL)arg1 ;
-(_TVShelfViewController *)shelfViewController;
-(void)setShelfViewController:(_TVShelfViewController *)arg1 ;
-(void)addObserver:(id)arg1 forEvent:(id)arg2 ;
-(void)removeObserver:(id)arg1 forEvent:(id)arg2 ;
-(TVMediaInfo *)selectedMediaInfo;
-(TVObservableEventController *)observableEventController;
-(id)_selectedMediaInfoForEvent:(id)arg1 forElementAtIndex:(long long)arg2 ;
-(void)setSelectedMediaInfo:(TVMediaInfo *)arg1 ;
-(id)_focusedMediaInfoForElementAtIndex:(long long)arg1 ;
-(void)shelfViewController:(id)arg1 didSettleOnItemAtIndexPath:(id)arg2 ;
-(void)shelfViewController:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(void)shelfViewController:(id)arg1 didPlayItemAtIndexPath:(id)arg2 ;
-(id)impressionableElementsContainedInDocument:(id)arg1 ;
-(void)updateWithElement:(id)arg1 ;
-(void)setObservableEventController:(TVObservableEventController *)arg1 ;
@end

