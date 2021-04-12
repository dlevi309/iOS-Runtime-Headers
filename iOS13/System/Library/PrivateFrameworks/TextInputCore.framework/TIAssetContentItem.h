/*
* Generated on Monday, March 1, 2021 at 2:34:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
*/


@class TIAsset, TIAssetAttributes, NSURL;

@interface TIAssetContentItem : NSObject {

	TIAsset* _asset;
	TIAssetAttributes* _attributes;
	NSURL* _url;

}

@property (nonatomic,readonly) TIAsset * asset;                             //@synthesize asset=_asset - In the implementation block
@property (nonatomic,readonly) TIAssetAttributes * attributes;              //@synthesize attributes=_attributes - In the implementation block
@property (nonatomic,readonly) NSURL * url;                                 //@synthesize url=_url - In the implementation block
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(TIAssetAttributes *)attributes;
-(NSURL *)url;
-(TIAsset *)asset;
-(id)initWithAsset:(id)arg1 attributes:(id)arg2 url:(id)arg3 ;
@end

