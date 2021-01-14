/*
* Generated on Thursday, January 14, 2021 at 2:21:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/


#import <NewsCore/NewsCore-Structs.h>
@class FCAssetHandle;

@interface FCTagBanner : NSObject {

	FCAssetHandle* _assetHandle;
	CGSize _size;
	FCEdgeInsets _insets;

}

@property (nonatomic,readonly) FCAssetHandle * assetHandle;              //@synthesize assetHandle=_assetHandle - In the implementation block
@property (nonatomic,readonly) CGSize size;                              //@synthesize size=_size - In the implementation block
@property (nonatomic,readonly) FCEdgeInsets insets;                      //@synthesize insets=_insets - In the implementation block
-(CGSize)size;
-(id)initWithAssetHandle:(id)arg1 size:(CGSize)arg2 insets:(FCEdgeInsets)arg3 ;
-(FCEdgeInsets)insets;
-(FCAssetHandle *)assetHandle;
@end

