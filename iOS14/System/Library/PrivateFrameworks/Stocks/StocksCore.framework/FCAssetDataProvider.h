/*
* Generated on Thursday, January 14, 2021 at 2:24:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Stocks/StocksCore.framework/StocksCore
*/

@class NSData, NSString;


@protocol FCAssetDataProvider
@property (nonatomic,readonly) NSData * data; 
@property (nonatomic,readonly) NSString * filePath; 
@property (nonatomic,readonly) BOOL isRawFileConsumable; 
@required
-(NSString *)filePath;
-(NSData *)data;
-(BOOL)isRawFileConsumable;

@end

