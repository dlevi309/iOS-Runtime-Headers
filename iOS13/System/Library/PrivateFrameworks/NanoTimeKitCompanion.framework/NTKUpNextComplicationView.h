/*
* Generated on Monday, March 1, 2021 at 2:35:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/CLKMonochromeFilterProvider.h>
#import <libobjc.A.dylib/CLKMonochromeComplicationView.h>

@protocol CLKMonochromeFilterProvider, NTKComplicationTemplateDataSource, NTKUpNextComplicationViewDelegate, NTKEditOptionContainerView;
@class NTKUpNextComplicationConfiguration, NSDictionary, UIView, NSIndexPath, NSString;

@interface NTKUpNextComplicationView : UIView <CLKMonochromeFilterProvider, CLKMonochromeComplicationView> {

	id<CLKMonochromeFilterProvider> _filterProvider;
	id<NTKComplicationTemplateDataSource> _dataSource;
	NTKUpNextComplicationConfiguration* _configuration;
	id<NTKUpNextComplicationViewDelegate> _delegate;
	unsigned long long _currentViewIndex;
	NSDictionary* _indexedViews;
	NSDictionary* _indexPathLookup;
	NSDictionary* _numberLookup;
	unsigned long long _centeredViewIndex;
	UIView*<NTKEditOptionContainerView> _pickingView;
	unsigned long long _numberOfViewsInCylinderView;

}

@property (assign,nonatomic) unsigned long long currentViewIndex;                                  //@synthesize currentViewIndex=_currentViewIndex - In the implementation block
@property (nonatomic,copy) NSDictionary * indexedViews;                                            //@synthesize indexedViews=_indexedViews - In the implementation block
@property (nonatomic,copy) NSDictionary * indexPathLookup;                                         //@synthesize indexPathLookup=_indexPathLookup - In the implementation block
@property (nonatomic,copy) NSDictionary * numberLookup;                                            //@synthesize numberLookup=_numberLookup - In the implementation block
@property (assign,nonatomic) unsigned long long centeredViewIndex;                                 //@synthesize centeredViewIndex=_centeredViewIndex - In the implementation block
@property (nonatomic,retain) UIView*<NTKEditOptionContainerView> pickingView;                      //@synthesize pickingView=_pickingView - In the implementation block
@property (assign,nonatomic) unsigned long long numberOfViewsInCylinderView;                       //@synthesize numberOfViewsInCylinderView=_numberOfViewsInCylinderView - In the implementation block
@property (nonatomic,readonly) NSIndexPath * visibleIndexPath; 
@property (assign,nonatomic,__weak) id<NTKComplicationTemplateDataSource> dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
@property (nonatomic,readonly) NTKUpNextComplicationConfiguration * configuration;                 //@synthesize configuration=_configuration - In the implementation block
@property (assign,nonatomic,__weak) id<NTKUpNextComplicationViewDelegate> delegate;                //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<CLKMonochromeFilterProvider> filterProvider;                //@synthesize filterProvider=_filterProvider - In the implementation block
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id<NTKUpNextComplicationViewDelegate>)delegate;
-(void)setDelegate:(id<NTKUpNextComplicationViewDelegate>)arg1 ;
-(id)initWithConfiguration:(id)arg1 ;
-(NTKUpNextComplicationConfiguration *)configuration;
-(id<NTKComplicationTemplateDataSource>)dataSource;
-(void)setDataSource:(id<NTKComplicationTemplateDataSource>)arg1 ;
-(void)layoutSubviews;
-(void)reloadData;
-(BOOL)canBecomeFirstResponder;
-(unsigned long long)currentViewIndex;
-(void)setCurrentViewIndex:(unsigned long long)arg1 ;
-(void)transitionToMonochromeWithFraction:(double)arg1 ;
-(void)updateMonochromeColor;
-(id<CLKMonochromeFilterProvider>)filterProvider;
-(void)setFilterProvider:(id<CLKMonochromeFilterProvider>)arg1 ;
-(id)filterForView:(id)arg1 style:(long long)arg2 ;
-(id)filterForView:(id)arg1 style:(long long)arg2 fraction:(double)arg3 ;
-(id)colorForView:(id)arg1 accented:(BOOL)arg2 ;
-(UIView*<NTKEditOptionContainerView>)pickingView;
-(unsigned long long)numberOfViewsInCylinderView;
-(void)setNumberOfViewsInCylinderView:(unsigned long long)arg1 ;
-(void)setIndexedViews:(NSDictionary *)arg1 ;
-(void)setCenteredViewIndex:(unsigned long long)arg1 ;
-(void)_centerToIndex:(unsigned long long)arg1 ;
-(void)setIndexPathLookup:(NSDictionary *)arg1 ;
-(void)setNumberLookup:(NSDictionary *)arg1 ;
-(NSDictionary *)numberLookup;
-(NSDictionary *)indexPathLookup;
-(NSDictionary *)indexedViews;
-(void)_setView:(id)arg1 forSideAtIndex:(long long)arg2 ;
-(void)_enumerateRichViewsWithBlock:(/*^block*/id)arg1 ;
-(NSIndexPath *)visibleIndexPath;
-(void)showIndexPath:(id)arg1 ;
-(unsigned long long)centeredViewIndex;
-(void)setPickingView:(UIView*<NTKEditOptionContainerView>)arg1 ;
@end

