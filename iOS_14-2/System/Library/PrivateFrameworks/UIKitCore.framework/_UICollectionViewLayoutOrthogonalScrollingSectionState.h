/*
* Generated on Thursday, January 14, 2021 at 2:20:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UICollectionViewLayoutOrthogonalScrollingSectionState.h>

@protocol _UICollectionViewLayoutOrthogonalScrollingSectionState <NSObject>
@property (nonatomic,readonly) unsigned long long orthogonalLayoutAxis; 
@property (nonatomic,readonly) CGPoint orthogonalContentOffset; 
@property (nonatomic,readonly) unsigned long long layoutAxis; 
@property (nonatomic,readonly) double pagingDimension; 
@property (nonatomic,readonly) double groupDimension; 
@property (nonatomic,readonly) CGRect layoutFrame; 
@property (nonatomic,readonly) CGSize contentSize; 
@property (nonatomic,readonly) NSDirectionalEdgeInsets contentInsets; 
@required
-(unsigned long long)layoutAxis;
-(CGRect)layoutFrame;
-(NSDirectionalEdgeInsets)contentInsets;
-(CGSize)contentSize;
-(double)pagingDimension;
-(double)groupDimension;
-(unsigned long long)orthogonalLayoutAxis;
-(CGPoint)orthogonalContentOffset;

@end

#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface _UICollectionViewLayoutOrthogonalScrollingSectionState : NSObject <_UICollectionViewLayoutOrthogonalScrollingSectionState, NSCopying> {

	unsigned long long _orthogonalLayoutAxis;
	unsigned long long _layoutAxis;
	double _pagingDimension;
	double _groupDimension;
	CGPoint _orthogonalContentOffset;
	CGSize _contentSize;
	CGRect _layoutFrame;
	NSDirectionalEdgeInsets _contentInsets;

}

@property (nonatomic,readonly) unsigned long long orthogonalLayoutAxis;              //@synthesize orthogonalLayoutAxis=_orthogonalLayoutAxis - In the implementation block
@property (nonatomic,readonly) CGPoint orthogonalContentOffset;                      //@synthesize orthogonalContentOffset=_orthogonalContentOffset - In the implementation block
@property (nonatomic,readonly) unsigned long long layoutAxis;                        //@synthesize layoutAxis=_layoutAxis - In the implementation block
@property (nonatomic,readonly) double pagingDimension;                               //@synthesize pagingDimension=_pagingDimension - In the implementation block
@property (nonatomic,readonly) double groupDimension;                                //@synthesize groupDimension=_groupDimension - In the implementation block
@property (nonatomic,readonly) CGRect layoutFrame;                                   //@synthesize layoutFrame=_layoutFrame - In the implementation block
@property (nonatomic,readonly) CGSize contentSize;                                   //@synthesize contentSize=_contentSize - In the implementation block
@property (nonatomic,readonly) NSDirectionalEdgeInsets contentInsets;                //@synthesize contentInsets=_contentInsets - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)orthogonalScrollingSectionStateFromCompositionalLayoutSolver:(id)arg1 section:(long long)arg2 ;
-(id)initWithOrthogonalLayoutAxis:(unsigned long long)arg1 layoutAxis:(unsigned long long)arg2 pagingDimension:(double)arg3 groupDimension:(double)arg4 layoutFrame:(CGRect)arg5 contentSize:(CGSize)arg6 contentInsets:(NSDirectionalEdgeInsets)arg7 orthogonalContentOffset:(CGPoint)arg8 ;
-(unsigned long long)layoutAxis;
-(CGRect)layoutFrame;
-(NSDirectionalEdgeInsets)contentInsets;
-(CGSize)contentSize;
-(double)pagingDimension;
-(double)groupDimension;
-(unsigned long long)orthogonalLayoutAxis;
-(CGPoint)orthogonalContentOffset;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

