/*
* Generated on Thursday, January 14, 2021 at 2:25:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(TIAsset *)asset;
-(NSURL *)url;
-(TIAssetAttributes *)attributes;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
-(id)initWithAsset:(id)arg1 attributes:(id)arg2 url:(id)arg3 ;
@end

