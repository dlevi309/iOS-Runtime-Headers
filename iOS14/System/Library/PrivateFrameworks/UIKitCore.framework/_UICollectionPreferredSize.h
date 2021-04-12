/*
* Generated on Thursday, January 14, 2021 at 2:20:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


#import <UIKitCore/UIKitCore-Structs.h>
@class NSCollectionLayoutSize, _UICollectionPreferredSizingCustomizations;

@interface _UICollectionPreferredSize : NSObject {

	CGSize _originalSize;
	CGSize _fittingSize;
	CGSize _preferredSize;
	NSCollectionLayoutSize* _layoutSize;
	_UICollectionPreferredSizingCustomizations* _customizations;

}

@property (nonatomic,readonly) CGSize originalSize;                                                      //@synthesize originalSize=_originalSize - In the implementation block
@property (nonatomic,readonly) CGSize fittingSize;                                                       //@synthesize fittingSize=_fittingSize - In the implementation block
@property (nonatomic,readonly) NSCollectionLayoutSize * layoutSize;                                      //@synthesize layoutSize=_layoutSize - In the implementation block
@property (nonatomic,readonly) CGSize preferredSize;                                                     //@synthesize preferredSize=_preferredSize - In the implementation block
@property (nonatomic,readonly) _UICollectionPreferredSizingCustomizations * customizations;              //@synthesize customizations=_customizations - In the implementation block
-(NSCollectionLayoutSize *)layoutSize;
-(CGSize)preferredSize;
-(id)initWithOriginalSize:(CGSize)arg1 fittingSize:(CGSize)arg2 layoutSize:(id)arg3 ;
-(id)description;
-(CGSize)fittingSize;
-(CGSize)originalSize;
-(id)initWithOriginalSize:(CGSize)arg1 fittingSize:(CGSize)arg2 layoutSize:(id)arg3 customizations:(id)arg4 ;
-(_UICollectionPreferredSizingCustomizations *)customizations;
@end

