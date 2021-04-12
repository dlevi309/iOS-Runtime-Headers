/*
* Generated on Thursday, January 14, 2021 at 2:23:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
*/

#import <SafariSharedUI/WBSSearchProvider.h>

@class NSString;

@interface _SFSearchEngineInfo : WBSSearchProvider {

	int _searchID;
	NSString* _scriptName;

}

@property (nonatomic,readonly) int searchID;                                 //@synthesize searchID=_searchID - In the implementation block
@property (nonatomic,readonly) NSString * scriptName;                        //@synthesize scriptName=_scriptName - In the implementation block
@property (nonatomic,readonly) NSString * displayName; 
@property (nonatomic,readonly) int resultType; 
@property (nonatomic,readonly) unsigned long long endpointType; 
+(id)engineFromDictionary:(id)arg1 withController:(id)arg2 ;
+(int)_resultTypeForShortName:(id)arg1 ;
+(unsigned long long)_endpointTypeForShortName:(id)arg1 ;
+(BOOL)shouldIncludeEngineFromDictionary:(id)arg1 withController:(id)arg2 ;
-(id)initWithName:(id)arg1 scriptName:(id)arg2 searchID:(int)arg3 searchTemplate:(id)arg4 hostSuffixes:(id)arg5 pathPrefixes:(id)arg6 usesSearchTermsFromFragment:(BOOL)arg7 groupIdentifierQueryStringKey:(id)arg8 suggestionsTemplate:(id)arg9 topLevelDomains:(id)arg10 safeSearchSuffix:(id)arg11 safeSearchURLQueryParameters:(id)arg12 carrierInfo:(id)arg13 controller:(id)arg14 ;
-(int)searchID;
-(BOOL)searchShouldUseSafeSearchTemplate;
-(int)resultType;
-(NSString *)scriptName;
-(id)description;
-(Class)classForCoder;
-(unsigned long long)endpointType;
-(NSString *)displayName;
@end

