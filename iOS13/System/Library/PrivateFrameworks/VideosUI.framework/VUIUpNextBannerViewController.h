/*
* Generated on Monday, March 1, 2021 at 2:35:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/

#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/__TVShelfViewControllerDelegate.h>
#import <libobjc.A.dylib/TVMediaProviding.h>
#import <libobjc.A.dylib/TVAppTemplateImpressionable.h>

@class TVMediaInfo, IKViewElement, _TVShelfViewController, TVObservableEventController, UIView, NSString;

@interface VUIUpNextBannerViewController : UIViewController <__TVShelfViewControllerDelegate, TVMediaProviding, TVAppTemplateImpressionable> {

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
@property (nonatomic,readonly) unsigned long long host;                                            //@synthesize host=_host - In the implementation block
@property (nonatomic,readonly) UIView * visualEffectView; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)host;
-(void)removeObserver:(id)arg1 ;
-(void)loadView;
-(id)preferredFocusEnvironments;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(id)initWithHost:(unsigned long long)arg1 ;
-(UIView *)visualEffectView;
-(IKViewElement *)viewElement;
-(void)setViewElement:(IKViewElement *)arg1 ;
-(id)impressionableElementsContainedInDocument:(id)arg1 ;
-(_TVShelfViewController *)shelfViewController;
-(void)shelfViewController:(id)arg1 didSettleOnItemAtIndexPath:(id)arg2 ;
-(void)shelfViewController:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(void)shelfViewController:(id)arg1 didPlayItemAtIndexPath:(id)arg2 ;
-(void)setShelfViewController:(_TVShelfViewController *)arg1 ;
-(void)addObserver:(id)arg1 forEvent:(id)arg2 ;
-(void)removeObserver:(id)arg1 forEvent:(id)arg2 ;
-(TVMediaInfo *)selectedMediaInfo;
-(TVObservableEventController *)observableEventController;
-(void)setSelectedMediaInfo:(TVMediaInfo *)arg1 ;
-(void)setObservableEventController:(TVObservableEventController *)arg1 ;
-(id)_selectedMediaInfoForEvent:(id)arg1 forElementAtIndex:(long long)arg2 ;
-(id)_focusedMediaInfoForElementAtIndex:(long long)arg1 ;
-(void)updateWithElement:(id)arg1 ;
@end

