/*
* Generated on Monday, March 1, 2021 at 2:35:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MarkupUI.framework/MarkupUI
*/

@class UIScrollView, NSArray;


@protocol MUContentViewControllerProtocol <NSObject>
@property (assign,nonatomic) UIEdgeInsets edgeInsets; 
@property (nonatomic,readonly) long long defaultToolTag; 
@property (nonatomic,readonly) UIScrollView * contentViewScrollView; 
@property (retain) NSArray * sourceContentReplacedAnnotationMaps; 
@property (assign,nonatomic) BOOL showsThumbnailView; 
@property (readonly) unsigned long long pageCount; 
@property (assign,nonatomic) BOOL navigationModeHorizontal; 
@property (assign,nonatomic) BOOL centersIgnoringContentInsets; 
@optional
-(unsigned long long)pageCount;
-(void)setCentersIgnoringContentInsets:(BOOL)arg1;
-(void)setShowsThumbnailView:(BOOL)arg1;
-(void)setNavigationModeHorizontal:(BOOL)arg1;
-(BOOL)centersIgnoringContentInsets;
-(NSArray *)sourceContentReplacedAnnotationMaps;
-(void)setSourceContentReplacedAnnotationMaps:(id)arg1;
-(BOOL)showsThumbnailView;
-(BOOL)navigationModeHorizontal;

@required
-(CGSize*)contentSize;
-(void)teardown;
-(void)setEdgeInsets:(UIEdgeInsets)arg1;
-(UIEdgeInsets)edgeInsets;
-(CGRect*)visibleContentRect;
-(void)setup;
-(void)uninstallAllAnnotationControllerOverlays;
-(void)loadContentWithCompletionBlock:(/*^block*/id)arg1;
-(long long)defaultToolTag;
-(UIScrollView *)contentViewScrollView;
-(CGSize*)idealContentSizeForScreenSize:(CGSize)arg1 windowDecorationSize:(CGSize)arg2;
-(CGRect*)visibleContentRectInCoordinateSpace:(id)arg1;
-(id)contentSnapshot;

@end

