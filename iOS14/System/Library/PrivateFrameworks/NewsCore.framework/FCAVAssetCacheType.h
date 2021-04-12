/*
* Generated on Thursday, January 14, 2021 at 2:21:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/


@protocol FCAVAssetCacheType <NSObject>
@required
-(void)adoptFileAtURL:(id)arg1 forAssetIdentifier:(id)arg2 remoteURL:(id)arg3 contentKeyIdentifiers:(id)arg4 extension:(id)arg5;
-(id)cachedFileURLForAssetIdentifier:(id)arg1;
-(id)interestTokenForAssetIdentifier:(id)arg1;
-(id)contentKeyIdentifiersForAllAssets;
-(BOOL)containsAssetWithIdentifier:(id)arg1;
-(id)contentKeyIdentifiersForAssetIdentifier:(id)arg1;

@end

