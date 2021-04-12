/*
* Generated on Monday, March 1, 2021 at 2:30:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


#import <UIKitCore/UIKitCore-Structs.h>
@interface _UICollectionLayoutSectionGeometryTranslator : NSObject {

	CGSize _contentSize;
	unsigned long long _layoutAxis;
	BOOL _layoutRTL;
	NSDirectionalEdgeInsets _supplementaryInsets;
	NSDirectionalEdgeInsets _sectionInsets;
	CGRect _contentFrame;
	CGRect _effectiveFrame;

}

@property (nonatomic,readonly) CGSize contentSize; 
@property (nonatomic,readonly) CGSize auxillaryHostContentSize; 
@property (nonatomic,readonly) CGSize effectiveContentSize; 
@property (nonatomic,readonly) CGPoint contentOffset; 
@property (nonatomic,readonly) CGRect contentFrame; 
@property (nonatomic,readonly) CGRect effectiveFrame; 
-(id)description;
-(CGRect)contentFrame;
-(CGSize)contentSize;
-(CGSize)effectiveContentSize;
-(CGPoint)contentOffset;
-(id)initWithContentSize:(CGSize)arg1 layoutAxis:(unsigned long long)arg2 layoutRTL:(BOOL)arg3 sectionInsets:(NSDirectionalEdgeInsets)arg4 supplementaryInsets:(NSDirectionalEdgeInsets)arg5 ;
-(CGRect)contentRectForSectionRect:(CGRect)arg1 ;
-(CGSize)auxillaryHostContentSize;
-(void)_computeFrames;
-(CGRect)effectiveFrame;
@end

