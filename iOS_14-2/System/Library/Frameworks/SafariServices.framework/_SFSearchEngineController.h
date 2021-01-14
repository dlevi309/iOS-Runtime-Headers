/*
* Generated on Thursday, January 14, 2021 at 2:23:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
*/


@protocol OS_dispatch_queue;
@class NSArray, NSObject, _SFSearchEngineInfo, NSString, NSDictionary;

@interface _SFSearchEngineController : NSObject {

	NSArray* _searchEngines;
	unsigned long long _defaultSearchEngineIndex;
	NSObject*<OS_dispatch_queue> _searchEnginesQueue;
	_SFSearchEngineInfo* _defaultSearchEngine;
	NSString* _countryCode;
	NSDictionary* _templateParameterValues;
	NSDictionary* _carrierTemplateParameterValues;

}

@property (nonatomic,copy,readonly) NSArray * engines; 
@property (nonatomic,copy,readonly) NSArray * enginesAvailableForUnifiedFieldSearching; 
@property (nonatomic,copy,readonly) NSArray * searchEngineNames; 
@property (nonatomic,copy,readonly) NSString * defaultSearchEngineName; 
@property (nonatomic,readonly) _SFSearchEngineInfo * defaultSearchEngineIfPopulated; 
@property (nonatomic,readonly) NSString * countryCode;                                               //@synthesize countryCode=_countryCode - In the implementation block
@property (nonatomic,readonly) NSDictionary * templateParameterValues;                               //@synthesize templateParameterValues=_templateParameterValues - In the implementation block
@property (nonatomic,readonly) NSDictionary * carrierTemplateParameterValues;                        //@synthesize carrierTemplateParameterValues=_carrierTemplateParameterValues - In the implementation block
+(id)sharedInstance;
+(void)_initializeSharedInstance;
+(void)loadSystemLanguageProperties;
+(BOOL)_deviceRegionCodeIsChina;
+(id)sharedInstanceIfAvailable;
-(NSString *)countryCode;
-(id)init;
-(id)safeSearchRequestForSearchRequest:(id)arg1 ;
-(id)engineInfoFor:(id)arg1 ;
-(NSArray *)searchEngineNames;
-(NSString *)defaultSearchEngineName;
-(_SFSearchEngineInfo *)defaultSearchEngineIfPopulated;
-(id)defaultSearchEngine;
-(void)reloadSearchEngines;
-(void)_addAllWebSearchEngineInfosToArray:(id)arg1 andAddUserVisibleWebSearchEngineInfosToArray:(id)arg2 ;
-(void)_setEngines:(id)arg1 defaultSearchEngineIndex:(unsigned long long)arg2 ;
-(void)_addSpecialSearchEnginesToArray:(id)arg1 ;
-(id)_existingEngineInfoFor:(id)arg1 ;
-(NSDictionary *)carrierTemplateParameterValues;
-(id)description;
-(void)_postDefaultSearchEngineDidChange;
-(void)_setDefaultSearchEngine:(id)arg1 ;
-(NSArray *)engines;
-(void)_getEngines:(id*)arg1 defaultSearchEngineIndex:(unsigned long long*)arg2 ;
-(void)setDefaultSearchEngine:(id)arg1 ;
-(id)engineInfoForScriptName:(id)arg1 ;
-(NSArray *)enginesAvailableForUnifiedFieldSearching;
-(void)_populateSearchEngines;
-(void)_loadSystemPropertiesForSearchEngine:(id)arg1 ;
-(NSDictionary *)templateParameterValues;
@end

