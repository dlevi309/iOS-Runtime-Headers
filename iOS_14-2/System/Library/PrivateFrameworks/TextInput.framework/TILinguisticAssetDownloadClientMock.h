/*
* Generated on Thursday, January 14, 2021 at 2:20:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
*/

#import <libobjc.A.dylib/TILinguisticAssetDownloading.h>

@class NSError;

@interface TILinguisticAssetDownloadClientMock : NSObject <TILinguisticAssetDownloading> {

	long long _result;
	NSError* _error;

}

@property (nonatomic,readonly) long long result;              //@synthesize result=_result - In the implementation block
@property (nonatomic,readonly) NSError * error;               //@synthesize error=_error - In the implementation block
-(void)addLinguisticAssetsAssertionForLanguage:(id)arg1 assertionID:(id)arg2 region:(id)arg3 clientID:(id)arg4 withHandler:(/*^block*/id)arg5 ;
-(void)removeLinguisticAssetsAssertionWithIdentifier:(id)arg1 forClientID:(id)arg2 withHandler:(/*^block*/id)arg3 ;
-(id)init;
-(void)requestLinguisticAssetsForLanguage:(id)arg1 completion:(/*^block*/id)arg2 ;
-(NSError *)error;
-(long long)result;
-(id)initWithResult:(long long)arg1 error:(id)arg2 ;
@end

