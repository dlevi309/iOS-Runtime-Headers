/*
* Generated on Thursday, January 14, 2021 at 2:24:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
*/

#import <SiriUI/SiriUI-Structs.h>
#import <UIKitCore/UIView.h>
#import <SiriUI/SiriUITemplatedView.h>

@protocol SiriUITemplatedStackSnippetViewDataSource, SiriUITemplatedStackSnippetViewDelegate;
@class UIView, UIImageView, UILabel, NSMutableSet, NSMutableArray, UITapGestureRecognizer, NSArray, NSString;

@interface SiriUITemplatedStackSnippetView : UIView <SiriUITemplatedView> {

	UIView* _sashOverlayView;
	UIImageView* _sashImageView;
	UILabel* _sashTitleLabel;
	UILabel* _navigationTitleLabel;
	UIView* _touchInterceptView;
	NSMutableSet* _templateSubviews;
	NSMutableArray* _stackedSubviews;
	NSMutableArray* _keylines;
	double _auxiliaryViewHeight;
	UITapGestureRecognizer* _tapRecognizer;
	id<SiriUITemplatedStackSnippetViewDataSource> _dataSource;
	id<SiriUITemplatedStackSnippetViewDelegate> _delegate;
	UIView* _auxiliaryView;

}

@property (assign,nonatomic,__weak) id<SiriUITemplatedStackSnippetViewDataSource> dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
@property (assign,nonatomic,__weak) id<SiriUITemplatedStackSnippetViewDelegate> delegate;                  //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy,readonly) NSArray * stackedSubviews;                                             //@synthesize stackedSubviews=_stackedSubviews - In the implementation block
@property (nonatomic,readonly) UIView * auxiliaryView;                                                     //@synthesize auxiliaryView=_auxiliaryView - In the implementation block
@property (nonatomic,readonly) UIEdgeInsets templatedContentMargins; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithFrame:(CGRect)arg1 ;
-(id<SiriUITemplatedStackSnippetViewDelegate>)delegate;
-(double)desiredHeight;
-(id<SiriUITemplatedStackSnippetViewDataSource>)dataSource;
-(void)_handleTapGesture:(id)arg1 ;
-(void)setDelegate:(id<SiriUITemplatedStackSnippetViewDelegate>)arg1 ;
-(void)setDataSource:(id<SiriUITemplatedStackSnippetViewDataSource>)arg1 ;
-(void)layoutSubviews;
-(void)reloadData;
-(NSArray *)stackedSubviews;
-(UIView *)auxiliaryView;
-(void)templateSubviewWantsToBeRemovedFromHierarchy:(id)arg1 ;
-(UIEdgeInsets)templatedContentMargins;
-(void)_triggerLayoutAnimated:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)addTemplateSubview:(id)arg1 ;
-(void)setAuxiliaryView:(id)arg1 atIndex:(unsigned long long)arg2 initialHeight:(double)arg3 animated:(BOOL)arg4 completion:(/*^block*/id)arg5 ;
-(void)adjustAuxiliaryViewHeight:(double)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
@end

