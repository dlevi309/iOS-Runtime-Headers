/*
* Generated on Monday, March 1, 2021 at 2:35:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Health/Plugins/HealthRecordsPlugin.bundle/HealthRecordsPlugin
*/


@interface HDProviderServiceSpecification : NSObject
+(void)initialize;
+(id)_baseURL;
+(id)defaultSessionConfiguration;
+(long long)currentServiceEnvironment;
+(id)URLForSearchQuery:(id)arg1 supportedCountryCodes:(id)arg2 searchSessionID:(id)arg3 latitude:(id)arg4 longitude:(id)arg5 from:(long long)arg6 error:(id*)arg7 ;
+(id)URLForProvidersWithBatchID:(id)arg1 searchSessionID:(id)arg2 error:(id*)arg3 ;
+(void)providerAndGatewaysFromFetchedJSONObject:(id)arg1 matchingProviderExternalID:(id)arg2 completion:(/*^block*/id)arg3 ;
+(id)URLForGatewaysWithBatchID:(id)arg1 error:(id*)arg2 ;
+(id)gatewayFromFetchedJSONObject:(id)arg1 matchingExternalID:(id)arg2 error:(id*)arg3 ;
+(id)gatewaysFromFetchedJSONObject:(id)arg1 matchingExternalIDs:(id)arg2 error:(id*)arg3 ;
+(id)URLForBrandLogosWithBatchID:(id)arg1 scaleKey:(id)arg2 error:(id*)arg3 ;
+(id)brandLogosFromFetchedJSONObject:(id)arg1 error:(id*)arg2 ;
+(id)URLForFeaturedBrandLogosAtScaleKey:(id)arg1 error:(id*)arg2 ;
+(id)_searchHostForEnvironment:(long long)arg1 ;
+(id)_baseSearchURL;
+(id)languageAndRegionQueryParameter;
+(id)_URLForListOfType:(long long)arg1 batchID:(id)arg2 searchSessionID:(id)arg3 error:(id*)arg4 ;
+(id)_dictionaryFromJSONObject:(id)arg1 error:(id*)arg2 ;
+(id)_resultsArrayFromJSONObject:(id)arg1 error:(id*)arg2 ;
+(id)_searchResultsFromFetchedJSONObject:(id)arg1 error:(id*)arg2 ;
+(id)_providerDictionaryFromJSONObject:(id)arg1 matchingExternalID:(id)arg2 error:(id*)arg3 ;
+(id)_gatewaysFromProviderDictionary:(id)arg1 error:(id*)arg2 ;
+(id)_encodedBrandLogosFromFetchedJSONObject:(id)arg1 error:(id*)arg2 ;
+(id)_baseURLForEnvironment:(long long)arg1 useSearchHost:(BOOL)arg2 ;
+(id)_hostForEnvironment:(long long)arg1 ;
+(BOOL)addAuthorizationHeadersToRequest:(id)arg1 error:(id*)arg2 ;
+(id)_resultsDictionaryFromJSONObject:(id)arg1 error:(id*)arg2 ;
+(id)searchResultsPageFromFetchedJSONObject:(id)arg1 error:(id*)arg2 ;
@end

