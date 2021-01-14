/*
* Generated on Thursday, January 14, 2021 at 2:20:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIViewController.h>

@class NSMutableArray;

@interface UIKBSystemLayoutViewController : UIViewController {

	NSMutableArray* _constraints;
	unsigned long long _horizontalLayoutType;
	unsigned long long _verticalLayoutType;
	CGSize _centeredOffsets;
	UIEdgeInsets _minimumInsets;

}

@property (assign,nonatomic) unsigned long long horizontalLayoutType;              //@synthesize horizontalLayoutType=_horizontalLayoutType - In the implementation block
@property (assign,nonatomic) unsigned long long verticalLayoutType;                //@synthesize verticalLayoutType=_verticalLayoutType - In the implementation block
@property (assign,nonatomic) UIEdgeInsets minimumInsets;                           //@synthesize minimumInsets=_minimumInsets - In the implementation block
@property (assign,nonatomic) CGSize centeredOffsets;                               //@synthesize centeredOffsets=_centeredOffsets - In the implementation block
+(id)systemLayoutViewControllerWithViewController:(id)arg1 ;
-(void)updateViewConstraints;
-(unsigned long long)horizontalLayoutType;
-(unsigned long long)verticalLayoutType;
-(void)setMinimumInsets:(UIEdgeInsets)arg1 ;
-(CGSize)centeredOffsets;
-(void)setHorizontalLayoutType:(unsigned long long)arg1 ;
-(void)setVerticalLayoutType:(unsigned long long)arg1 ;
-(UIEdgeInsets)minimumInsets;
-(void)setCenteredOffsets:(CGSize)arg1 ;
-(void)dealloc;
@end

