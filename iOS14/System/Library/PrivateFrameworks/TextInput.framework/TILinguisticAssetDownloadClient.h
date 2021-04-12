/*
* Generated on Thursday, January 14, 2021 at 2:20:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
*/

#import <libobjc.A.dylib/TILinguisticAssetDownloading.h>

@interface TILinguisticAssetDownloadClient : NSObject <TILinguisticAssetDownloading>
+(id)_dispatchQueue;
+(/*^block*/id)_internalHandlerForHandler:(/*^block*/id)arg1 connection:(id)arg2 ;
-(void)addLinguisticAssetsAssertionForLanguage:(id)arg1 assertionID:(id)arg2 region:(id)arg3 clientID:(id)arg4 withHandler:(/*^block*/id)arg5 ;
-(void)removeLinguisticAssetsAssertionWithIdentifier:(id)arg1 forClientID:(id)arg2 withHandler:(/*^block*/id)arg3 ;
-(void)requestLinguisticAssetsForLanguage:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)_newXPCConnection;
@end

