/*
* Generated on Thursday, January 14, 2021 at 2:22:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/


@class NSMutableDictionary;

@interface PXAssetAnalyzer : NSObject {

	NSMutableDictionary* _analyzerUUIDToRequest;

}
-(void)analyzeAsset:(id)arg1 forWorkerType:(long long)arg2 ;
-(id)init;
-(BOOL)canAnalyzeAsset:(id)arg1 forWorkerType:(long long)arg2 ;
-(void)_handleResultForRequest:(id)arg1 success:(BOOL)arg2 ;
-(id)_keyForAssetUUID:(id)arg1 forWorkerType:(long long)arg2 ;
@end

