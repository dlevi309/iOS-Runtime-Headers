/*
* Generated on Thursday, January 14, 2021 at 2:25:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
*/

#import <MediaPlayer/MPAsyncOperation.h>

@class MPCModelGenericAVItemAssetLoadProperties;

@interface MPCModelGenericAVItemLocalFileLoadOperation : MPAsyncOperation {

	BOOL _requirePreferredAssetQuality;
	MPCModelGenericAVItemAssetLoadProperties* _assetLoadProperties;
	/*^block*/id _responseHandler;

}

@property (nonatomic,retain) MPCModelGenericAVItemAssetLoadProperties * assetLoadProperties;              //@synthesize assetLoadProperties=_assetLoadProperties - In the implementation block
@property (assign,nonatomic) BOOL requirePreferredAssetQuality;                                           //@synthesize requirePreferredAssetQuality=_requirePreferredAssetQuality - In the implementation block
@property (nonatomic,copy) id responseHandler;                                                            //@synthesize responseHandler=_responseHandler - In the implementation block
-(void)execute;
-(id)responseHandler;
-(void)setResponseHandler:(id)arg1 ;
-(void)setAssetLoadProperties:(MPCModelGenericAVItemAssetLoadProperties *)arg1 ;
-(void)setRequirePreferredAssetQuality:(BOOL)arg1 ;
-(MPCModelGenericAVItemAssetLoadProperties *)assetLoadProperties;
-(BOOL)requirePreferredAssetQuality;
@end

