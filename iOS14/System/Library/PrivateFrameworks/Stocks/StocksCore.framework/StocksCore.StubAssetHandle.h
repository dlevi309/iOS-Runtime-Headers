/*
* Generated on Thursday, January 14, 2021 at 2:24:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Stocks/StocksCore.framework/StocksCore
*/

#import <NewsCore/FCAssetHandle.h>

@class NSString;

@interface StocksCore.StubAssetHandle : FCAssetHandle {

	 identifier;

}

@property (readonly,nonatomic) id<FCAssetDataProvider> dataProvider; 
@property (readonly,nonatomic) NSString * uniqueKey; 
-(NSString *)uniqueKey;
-(id)init;
-(id<FCAssetDataProvider>)dataProvider;
@end

