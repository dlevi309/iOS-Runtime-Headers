/*
* Generated on Thursday, January 14, 2021 at 2:24:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/


@protocol HKLollipopDelegate;
#import <HealthUI/HealthUI-Structs.h>
@class HKInteractiveChartAnnotationView, UIView, NSMutableArray, NSArray, NSDate;

@interface HKLollipopController : NSObject {

	BOOL _centerLollipopVertically;
	HKInteractiveChartAnnotationView* _annotationView;
	id<HKLollipopDelegate> _delegate;
	UIView* _parentView;
	UIView* _fieldView;
	NSMutableArray* _extensionViews;
	NSArray* _lastSelectionLocation;
	NSDate* _lastFirstLollipopDate;

}

@property (nonatomic,retain) UIView * parentView;                                              //@synthesize parentView=_parentView - In the implementation block
@property (nonatomic,retain) UIView * fieldView;                                               //@synthesize fieldView=_fieldView - In the implementation block
@property (nonatomic,retain) NSMutableArray * extensionViews;                                  //@synthesize extensionViews=_extensionViews - In the implementation block
@property (nonatomic,copy) NSArray * lastSelectionLocation;                                    //@synthesize lastSelectionLocation=_lastSelectionLocation - In the implementation block
@property (nonatomic,retain) NSDate * lastFirstLollipopDate;                                   //@synthesize lastFirstLollipopDate=_lastFirstLollipopDate - In the implementation block
@property (nonatomic,readonly) HKInteractiveChartAnnotationView * annotationView;              //@synthesize annotationView=_annotationView - In the implementation block
@property (nonatomic,__weak,readonly) id<HKLollipopDelegate> delegate;                         //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL centerLollipopVertically;                                    //@synthesize centerLollipopVertically=_centerLollipopVertically - In the implementation block
+(BOOL)pointSelectionContextsHaveUserInfo:(id)arg1 ;
-(id<HKLollipopDelegate>)delegate;
-(HKInteractiveChartAnnotationView *)annotationView;
-(void)_setHidden:(BOOL)arg1 ;
-(UIView *)parentView;
-(void)setParentView:(UIView *)arg1 ;
-(BOOL)isVisible;
-(void)_setAlpha:(double)arg1 ;
-(void)setInvisibleAnimated:(BOOL)arg1 ;
-(NSMutableArray *)extensionViews;
-(id)_lollipopExtensionColor;
-(BOOL)_selectionHasMoved:(id)arg1 ;
-(id)_stickLocationsFromPointContexts:(id)arg1 ;
-(void)_positionAnnotationViewWithStickLocations:(id)arg1 ;
-(void)_rebuildExtensionsWithStickLocations:(id)arg1 ;
-(NSArray *)lastSelectionLocation;
-(void)setLastSelectionLocation:(NSArray *)arg1 ;
-(void)setLastFirstLollipopDate:(NSDate *)arg1 ;
-(UIView *)fieldView;
-(BOOL)centerLollipopVertically;
-(void)_setExtensionViewBackgrounds;
-(double)_lollipopExtensionLength;
-(double)_lollipopExtensionWidth;
-(id)_lollipopFieldColor;
-(id)_lollipopAnnotationColor;
-(void)updateWithPointContexts:(id)arg1 ;
-(void)_bringViewsToFront;
-(NSDate *)lastFirstLollipopDate;
-(id)initWithAnnotationDataSource:(id)arg1 parentView:(id)arg2 delegate:(id)arg3 ;
-(void)setVisibleWithRect:(CGRect)arg1 pointContexts:(id)arg2 animated:(BOOL)arg3 ;
-(id)firstLollipopDate;
-(void)setCenterLollipopVertically:(BOOL)arg1 ;
-(void)setFieldView:(UIView *)arg1 ;
-(void)setExtensionViews:(NSMutableArray *)arg1 ;
@end

