/*
* Generated on Monday, March 1, 2021 at 2:32:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)setResponseHandler:(id)arg1 ;
-(id)responseHandler;
-(void)setAssetLoadProperties:(MPCModelGenericAVItemAssetLoadProperties *)arg1 ;
-(void)setRequirePreferredAssetQuality:(BOOL)arg1 ;
-(MPCModelGenericAVItemAssetLoadProperties *)assetLoadProperties;
-(BOOL)requirePreferredAssetQuality;
@end

