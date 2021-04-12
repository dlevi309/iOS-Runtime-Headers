/*
* Generated on Monday, March 1, 2021 at 2:33:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Stocks/StocksCore.framework/StocksCore
*/

#import <NewsCore/FCAssetHandle.h>

@class NSString;

@interface StocksCore.StubAssetHandle : FCAssetHandle {

	 identifier;

}

@property (readonly,nonatomic) id<FCAssetDataProvider> dataProvider; 
@property (readonly,nonatomic) NSString * uniqueKey; 
-(id)init;
-(id<FCAssetDataProvider>)dataProvider;
-(NSString *)uniqueKey;
@end

