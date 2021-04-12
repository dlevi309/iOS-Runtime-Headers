/*
* Generated on Monday, March 1, 2021 at 2:30:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/_UIStatusBarRegionLayout.h>

@protocol _UIStatusBarRegionAxisLayout;
@class _UIStatusBarRegion, NSArray, NSString;

@interface _UIStatusBarRegionAxesLayout : NSObject <_UIStatusBarRegionLayout> {

	_UIStatusBarRegion* _region;
	NSArray* _displayItems;
	id<_UIStatusBarRegionAxisLayout> _horizontalLayout;
	id<_UIStatusBarRegionAxisLayout> _verticalLayout;
	NSArray* _horizontalConstraints;
	NSArray* _verticalConstraints;
	NSArray* _layoutGuides;

}

@property (nonatomic,copy) NSArray * horizontalConstraints;                                  //@synthesize horizontalConstraints=_horizontalConstraints - In the implementation block
@property (nonatomic,copy) NSArray * verticalConstraints;                                    //@synthesize verticalConstraints=_verticalConstraints - In the implementation block
@property (nonatomic,copy) NSArray * layoutGuides;                                           //@synthesize layoutGuides=_layoutGuides - In the implementation block
@property (nonatomic,retain) id<_UIStatusBarRegionAxisLayout> horizontalLayout;              //@synthesize horizontalLayout=_horizontalLayout - In the implementation block
@property (nonatomic,retain) id<_UIStatusBarRegionAxisLayout> verticalLayout;                //@synthesize verticalLayout=_verticalLayout - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) _UIStatusBarRegion * region;                             //@synthesize region=_region - In the implementation block
@property (nonatomic,copy) NSArray * displayItems;                                           //@synthesize displayItems=_displayItems - In the implementation block
@property (nonatomic,readonly) BOOL fitsAllItems; 
-(void)invalidate;
-(_UIStatusBarRegion *)region;
-(NSArray *)layoutGuides;
-(void)setRegion:(_UIStatusBarRegion *)arg1 ;
-(void)setVerticalLayout:(id<_UIStatusBarRegionAxisLayout>)arg1 ;
-(void)_updateConstraints;
-(NSArray *)displayItems;
-(void)setDisplayItems:(NSArray *)arg1 ;
-(BOOL)mayFitDisplayItems:(id)arg1 ;
-(BOOL)fitsAllItems;
-(void)setHorizontalLayout:(id<_UIStatusBarRegionAxisLayout>)arg1 ;
-(id<_UIStatusBarRegionAxisLayout>)horizontalLayout;
-(id<_UIStatusBarRegionAxisLayout>)verticalLayout;
-(NSArray *)horizontalConstraints;
-(void)setHorizontalConstraints:(NSArray *)arg1 ;
-(NSArray *)verticalConstraints;
-(void)setVerticalConstraints:(NSArray *)arg1 ;
-(void)setLayoutGuides:(NSArray *)arg1 ;
@end

