/*
* Generated on Monday, March 1, 2021 at 2:31:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
+(unsigned long long)_endpointTypeForShortName:(id)arg1 ;
+(int)_resultTypeForShortName:(id)arg1 ;
+(id)engineFromDictionary:(id)arg1 withController:(id)arg2 ;
+(BOOL)shouldIncludeEngineFromDictionary:(id)arg1 withController:(id)arg2 ;
-(id)description;
-(Class)classForCoder;
-(int)resultType;
-(NSString *)displayName;
-(unsigned long long)endpointType;
-(id)initWithName:(id)arg1 scriptName:(id)arg2 searchID:(int)arg3 searchTemplate:(id)arg4 hostSuffixes:(id)arg5 pathPrefixes:(id)arg6 usesSearchTermsFromFragment:(BOOL)arg7 groupIdentifierQueryStringKey:(id)arg8 suggestionsTemplate:(id)arg9 topLevelDomains:(id)arg10 safeSearchSuffix:(id)arg11 safeSearchURLQueryParameters:(id)arg12 carrierInfo:(id)arg13 controller:(id)arg14 ;
-(BOOL)searchShouldUseSafeSearchTemplate;
-(int)searchID;
-(NSString *)scriptName;
@end

