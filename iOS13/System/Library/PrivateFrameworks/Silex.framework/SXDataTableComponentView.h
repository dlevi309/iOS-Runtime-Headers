/*
* Generated on Monday, March 1, 2021 at 2:33:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/

#import <Silex/Silex-Structs.h>
#import <Silex/SXComponentView.h>
#import <libobjc.A.dylib/SXDataTableViewDataSource.h>
#import <libobjc.A.dylib/SXTangierControllerDelegate.h>
#import <libobjc.A.dylib/SXViewportChangeListener.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@protocol SXImageViewFactory, SXComponentActionHandler, SXTextComponentLayoutHosting, SXComponentController;
@class SXDataTableView, SXDataTableComponentController, SXDataTableBlueprint, SXDataTableDictionary, SXScrollView, SXTangierController, CALayer, NSString;

@interface SXDataTableComponentView : SXComponentView <SXDataTableViewDataSource, SXTangierControllerDelegate, SXViewportChangeListener, UIGestureRecognizerDelegate> {

	id<SXImageViewFactory> _imageViewFactory;
	id<SXComponentActionHandler> _componentActionHandler;
	id<SXTextComponentLayoutHosting> _textComponentLayoutHosting;
	id<SXComponentController> _componentController;
	SXDataTableView* _tableView;
	SXDataTableComponentController* _dataTableComponentController;
	SXDataTableBlueprint* _blueprint;
	SXDataTableDictionary* _textViews;
	SXDataTableDictionary* _imageViews;
	SXScrollView* _scrollView;
	SXTangierController* _tangierController;
	CALayer* _rightShadow;
	CALayer* _leftShadow;

}

@property (nonatomic,readonly) id<SXImageViewFactory> imageViewFactory;                                         //@synthesize imageViewFactory=_imageViewFactory - In the implementation block
@property (nonatomic,readonly) id<SXComponentActionHandler> componentActionHandler;                             //@synthesize componentActionHandler=_componentActionHandler - In the implementation block
@property (nonatomic,__weak,readonly) id<SXTextComponentLayoutHosting> textComponentLayoutHosting;              //@synthesize textComponentLayoutHosting=_textComponentLayoutHosting - In the implementation block
@property (nonatomic,__weak,readonly) id<SXComponentController> componentController;                            //@synthesize componentController=_componentController - In the implementation block
@property (nonatomic,retain) SXDataTableView * tableView;                                                       //@synthesize tableView=_tableView - In the implementation block
@property (nonatomic,retain) SXDataTableComponentController * dataTableComponentController;                     //@synthesize dataTableComponentController=_dataTableComponentController - In the implementation block
@property (nonatomic,retain) SXDataTableBlueprint * blueprint;                                                  //@synthesize blueprint=_blueprint - In the implementation block
@property (nonatomic,retain) SXDataTableDictionary * textViews;                                                 //@synthesize textViews=_textViews - In the implementation block
@property (nonatomic,retain) SXDataTableDictionary * imageViews;                                                //@synthesize imageViews=_imageViews - In the implementation block
@property (nonatomic,retain) SXScrollView * scrollView;                                                         //@synthesize scrollView=_scrollView - In the implementation block
@property (nonatomic,retain) SXTangierController * tangierController;                                           //@synthesize tangierController=_tangierController - In the implementation block
@property (nonatomic,retain) CALayer * rightShadow;                                                             //@synthesize rightShadow=_rightShadow - In the implementation block
@property (nonatomic,retain) CALayer * leftShadow;                                                              //@synthesize leftShadow=_leftShadow - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(SXDataTableView *)tableView;
-(void)setTableView:(SXDataTableView *)arg1 ;
-(SXScrollView *)scrollView;
-(void)setScrollView:(SXScrollView *)arg1 ;
-(void)setImageViews:(SXDataTableDictionary *)arg1 ;
-(SXDataTableDictionary *)imageViews;
-(SXDataTableDictionary *)textViews;
-(void)setTextViews:(SXDataTableDictionary *)arg1 ;
-(void)setBlueprint:(SXDataTableBlueprint *)arg1 ;
-(SXDataTableBlueprint *)blueprint;
-(id)initWithDOMObjectProvider:(id)arg1 viewport:(id)arg2 presentationDelegate:(id)arg3 componentStyleRendererFactory:(id)arg4 imageViewFactory:(id)arg5 componentActionHandler:(id)arg6 textComponentLayoutHosting:(id)arg7 componentController:(id)arg8 ;
-(id<SXComponentController>)componentController;
-(SXTangierController *)tangierController;
-(void)tangierControllerDidScroll:(id)arg1 ;
-(void)setTangierController:(SXTangierController *)arg1 ;
-(void)presentComponentWithChanges:(SCD_Struct_SX17)arg1 ;
-(SXDataTableComponentController *)dataTableComponentController;
-(id<SXTextComponentLayoutHosting>)textComponentLayoutHosting;
-(void)setDataTableComponentController:(SXDataTableComponentController *)arg1 ;
-(id<SXImageViewFactory>)imageViewFactory;
-(void)receivedInfo:(id)arg1 fromLayoutingPhaseWithIdentifier:(id)arg2 ;
-(BOOL)userInteractable;
-(id)contentViewForBehavior:(id)arg1 ;
-(id)descriptorForIndexPath:(NSRange)arg1 ;
-(id<SXComponentActionHandler>)componentActionHandler;
-(void)setupShadowsIfNeeded;
-(void)updateTangierController;
-(void)addTextStorageForIndexPath:(NSRange)arg1 toCollectior:(id)arg2 ;
-(void)updateShadowOpacity;
-(CALayer *)leftShadow;
-(CALayer *)rightShadow;
-(void)setLeftShadow:(CALayer *)arg1 ;
-(void)setRightShadow:(CALayer *)arg1 ;
-(id)dataTableView:(id)arg1 viewForCellAtIndexPath:(NSRange)arg2 constraintToSize:(CGSize)arg3 ;
@end

