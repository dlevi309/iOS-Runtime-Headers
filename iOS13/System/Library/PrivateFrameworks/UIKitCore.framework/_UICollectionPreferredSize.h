/*
* Generated on Monday, March 1, 2021 at 2:30:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


#import <UIKitCore/UIKitCore-Structs.h>
@class NSCollectionLayoutSize;

@interface _UICollectionPreferredSize : NSObject {

	CGSize _originalSize;
	CGSize _fittingSize;
	CGSize _preferredSize;
	NSCollectionLayoutSize* _layoutSize;

}

@property (nonatomic,readonly) CGSize originalSize;                              //@synthesize originalSize=_originalSize - In the implementation block
@property (nonatomic,readonly) CGSize fittingSize;                               //@synthesize fittingSize=_fittingSize - In the implementation block
@property (nonatomic,readonly) NSCollectionLayoutSize * layoutSize;              //@synthesize layoutSize=_layoutSize - In the implementation block
@property (nonatomic,readonly) CGSize preferredSize;                             //@synthesize preferredSize=_preferredSize - In the implementation block
-(id)description;
-(NSCollectionLayoutSize *)layoutSize;
-(CGSize)preferredSize;
-(id)initWithOriginalSize:(CGSize)arg1 fittingSize:(CGSize)arg2 layoutSize:(id)arg3 ;
-(CGSize)originalSize;
-(CGSize)fittingSize;
@end

