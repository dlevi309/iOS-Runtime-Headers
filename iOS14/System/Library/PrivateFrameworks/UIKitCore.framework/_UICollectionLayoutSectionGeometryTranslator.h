/*
* Generated on Thursday, January 14, 2021 at 2:20:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(CGRect)contentFrame;
-(CGSize)auxillaryHostContentSize;
-(CGSize)contentSize;
-(void)_computeFrames;
-(id)description;
-(CGRect)contentRectForSectionRect:(CGRect)arg1 ;
-(CGSize)effectiveContentSize;
-(id)initWithContentSize:(CGSize)arg1 layoutAxis:(unsigned long long)arg2 layoutRTL:(BOOL)arg3 sectionInsets:(NSDirectionalEdgeInsets)arg4 supplementaryInsets:(NSDirectionalEdgeInsets)arg5 ;
-(CGRect)effectiveFrame;
-(CGPoint)contentOffset;
@end

