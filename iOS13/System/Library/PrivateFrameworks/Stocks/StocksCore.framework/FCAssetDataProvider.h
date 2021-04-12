/*
* Generated on Monday, March 1, 2021 at 2:33:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Stocks/StocksCore.framework/StocksCore
*/

@class NSData, NSString;


@protocol FCAssetDataProvider
@property (nonatomic,readonly) NSData * data; 
@property (nonatomic,readonly) NSString * filePath; 
@property (nonatomic,readonly) BOOL isRawFileConsumable; 
@required
-(NSData *)data;
-(NSString *)filePath;
-(BOOL)isRawFileConsumable;

@end

