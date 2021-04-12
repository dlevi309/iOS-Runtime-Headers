/*
* Generated on Thursday, January 14, 2021 at 2:22:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

