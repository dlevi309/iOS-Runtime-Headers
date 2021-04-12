/*
* Generated on Monday, March 1, 2021 at 2:31:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(NSError *)error;
-(long long)result;
-(void)requestLinguisticAssetsForLanguage:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)initWithResult:(long long)arg1 error:(id)arg2 ;
@end

