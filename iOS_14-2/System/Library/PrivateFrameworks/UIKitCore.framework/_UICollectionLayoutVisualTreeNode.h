/*
* Generated on Thursday, January 14, 2021 at 2:20:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSArray *)children;
-(void)setAxis:(unsigned long long)arg1 ;
-(unsigned long long)axis;
-(BOOL)isVerticalGroup;
-(id)description;
-(BOOL)isHorizontalGroup;
-(void)setChildren:(NSArray *)arg1 ;
-(id)initWithParent:(id)arg1 children:(id)arg2 axis:(unsigned long long)arg3 ;
@end

