/*
* Generated on Thursday, January 14, 2021 at 2:20:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
@property (nonatomic,readonly) BOOL canOverflowItems; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setMargin:(double)arg1 ;
-(double)margin;
-(id)init;
-(id)constraintsForDisplayItems:(id)arg1 layoutGuides:(id)arg2 inContainerItem:(id)arg3 axis:(long long)arg4 ;
-(long long)maxNumberOfItems;
-(void)setInterspace:(double)arg1 ;
-(void)setMaxNumberOfItems:(long long)arg1 ;
-(double)interspace;
-(BOOL)canOverflowItems;
-(BOOL)mayFitDisplayItems:(id)arg1 ;
@end

