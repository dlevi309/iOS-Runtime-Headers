/*
* Generated on Monday, March 1, 2021 at 2:32:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
*/

#import <iTunesCloud/ICRadioResponse.h>

@class NSArray;

@interface ICRadioFetchMetadataResponse : ICRadioResponse

@property (nonatomic,copy,readonly) NSArray * allStorePlatformMetadata; 
-(id)_storePlatformMetadataDictionaryFromRadioMetadataDictionary:(id)arg1 ;
-(NSArray *)allStorePlatformMetadata;
-(id)storePlatformMetadataForStoreAdamID:(long long)arg1 ;
@end

