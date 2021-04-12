/*
* Generated on Monday, March 1, 2021 at 2:30:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/_UIStatusBarRegionAxisLayout.h>

@class NSString;

@interface _UIStatusBarRegionAxisCenteringLayout : NSObject <_UIStatusBarRegionAxisLayout> {

	double _interspace;
	double _margin;
	long long _maxNumberOfItems;

}

@property (assign,nonatomic) double interspace;                       //@synthesize interspace=_interspace - In the implementation block
@property (assign,nonatomic) double margin;                           //@synthesize margin=_margin - In the implementation block
@property (assign,nonatomic) long long maxNumberOfItems;              //@synthesize maxNumberOfItems=_maxNumberOfItems - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL canOverflowItems; 
-(id)init;
-(void)setMargin:(double)arg1 ;
-(double)margin;
-(id)constraintsForDisplayItems:(id)arg1 layoutGuides:(id)arg2 inContainerItem:(id)arg3 axis:(long long)arg4 ;
-(BOOL)mayFitDisplayItems:(id)arg1 ;
-(BOOL)canOverflowItems;
-(double)interspace;
-(void)setInterspace:(double)arg1 ;
-(long long)maxNumberOfItems;
-(void)setMaxNumberOfItems:(long long)arg1 ;
@end

