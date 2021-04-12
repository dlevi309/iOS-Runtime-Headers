/*
* Generated on Monday, March 1, 2021 at 2:30:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/_UICollectionLayoutVisualFormatItem.h>

@class NSArray;

@interface _UICollectionLayoutVisualTreeNode : _UICollectionLayoutVisualFormatItem {

	NSArray* _children;
	unsigned long long _axis;

}

@property (nonatomic,retain) NSArray * children;                   //@synthesize children=_children - In the implementation block
@property (assign,nonatomic) unsigned long long axis;              //@synthesize axis=_axis - In the implementation block
-(id)description;
-(unsigned long long)axis;
-(NSArray *)children;
-(void)setChildren:(NSArray *)arg1 ;
-(void)setAxis:(unsigned long long)arg1 ;
-(BOOL)isVerticalGroup;
-(BOOL)isHorizontalGroup;
-(id)initWithParent:(id)arg1 children:(id)arg2 axis:(unsigned long long)arg3 ;
@end

