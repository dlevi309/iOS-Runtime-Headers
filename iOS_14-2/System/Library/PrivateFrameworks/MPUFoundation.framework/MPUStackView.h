/*
* Generated on Thursday, January 14, 2021 at 2:24:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MPUFoundation.framework/MPUFoundation
*/

#import <MPUFoundation/MPUFoundation-Structs.h>
#import <UIKitCore/UIView.h>

@protocol MPUStackViewDataSource;
@class NSMutableArray, UIWindow, NSString, UIView, NSArray;

@interface MPUStackView : UIView {

	SCD_Struct_MP13 _configuration;
	long long _distanceIgnoreCount;
	NSMutableArray* _items;
	UIWindow* _window;
	id<MPUStackViewDataSource> _dataSource;
	Class _itemClass;
	NSString* _itemReuseIdentifier;
	long long _numberOfItems;
	UIView* _perspectiveTargetView;

}

@property (assign,nonatomic) CGSize baseSize; 
@property (assign,nonatomic,__weak) id<MPUStackViewDataSource> dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
@property (assign,nonatomic) BOOL forcesIntegralX; 
@property (assign,nonatomic) BOOL forcesIntegralY; 
@property (nonatomic,readonly) Class itemClass;                                         //@synthesize itemClass=_itemClass - In the implementation block
@property (nonatomic,readonly) NSString * itemReuseIdentifier;                          //@synthesize itemReuseIdentifier=_itemReuseIdentifier - In the implementation block
@property (nonatomic,readonly) NSArray * items;                                         //@synthesize items=_items - In the implementation block
@property (assign,nonatomic) UIOffset maximumRelativeOffsetStep; 
@property (nonatomic,readonly) long long numberOfItems;                                 //@synthesize numberOfItems=_numberOfItems - In the implementation block
@property (assign,nonatomic,__weak) UIView * perspectiveTargetView;                     //@synthesize perspectiveTargetView=_perspectiveTargetView - In the implementation block
@property (assign,nonatomic) CGSize sizeInsetStep; 
@property (assign,nonatomic) CGPoint vanishingPoint; 
-(id)itemAtIndex:(long long)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(long long)numberOfItems;
-(void)didMoveToSuperview;
-(id<MPUStackViewDataSource>)dataSource;
-(Class)itemClass;
-(void)setBounds:(CGRect)arg1 ;
-(NSArray *)items;
-(CGSize)baseSize;
-(void)setDataSource:(id<MPUStackViewDataSource>)arg1 ;
-(void)layoutSubviews;
-(void)setFrame:(CGRect)arg1 ;
-(void)didMoveToWindow;
-(void)setCenter:(CGPoint)arg1 ;
-(void)reloadData;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(CGPoint)vanishingPoint;
-(void)setVanishingPoint:(CGPoint)arg1 ;
-(void)dealloc;
-(void)updateForChangedDistanceFromVanishingPoint;
-(void)_updateGeometryFieldsInConfiguration;
-(void)reloadDataWithTransition:(long long)arg1 ;
-(id)_dequeueReusableItem;
-(id)initWithFrame:(CGRect)arg1 itemClass:(Class)arg2 itemReuseIdentifier:(id)arg3 ;
-(void)setBaseSize:(CGSize)arg1 ;
-(BOOL)forcesIntegralX;
-(BOOL)forcesIntegralY;
-(UIOffset)maximumRelativeOffsetStep;
-(void)setForcesIntegralX:(BOOL)arg1 ;
-(void)setForcesIntegralY:(BOOL)arg1 ;
-(void)setMaximumRelativeOffsetStep:(UIOffset)arg1 ;
-(void)setPerspectiveTargetView:(UIView *)arg1 ;
-(void)setSizeInsetStep:(CGSize)arg1 ;
-(CGSize)sizeInsetStep;
-(void)beginIgnoringDistanceUpdates;
-(void)endIgnoringDistanceUpdates;
-(UIOffset)relativeOffsetOfItemAtIndex:(double)arg1 withCenter:(CGPoint)arg2 ;
-(CGSize)sizeOfItemAtIndex:(double)arg1 ;
-(NSString *)itemReuseIdentifier;
-(UIView *)perspectiveTargetView;
@end

