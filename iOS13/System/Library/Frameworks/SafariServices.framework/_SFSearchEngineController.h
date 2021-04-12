/*
* Generated on Monday, March 1, 2021 at 2:31:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
*/


@protocol OS_dispatch_queue;
@class NSArray, NSObject, NSString, NSDictionary;

@interface _SFSearchEngineController : NSObject {

	NSArray* _searchEngines;
	unsigned long long _defaultSearchEngineIndex;
	NSObject*<OS_dispatch_queue> _searchEngineArrayAccessQueue;
	NSString* _countryCode;
	NSDictionary* _templateParameterValues;
	NSDictionary* _carrierTemplateParameterValues;

}

@property (nonatomic,copy,readonly) NSArray * engines; 
@property (nonatomic,copy,readonly) NSArray * enginesAvailableForUnifiedFieldSearching; 
@property (nonatomic,copy,readonly) NSArray * searchEngineNames; 
@property (nonatomic,copy,readonly) NSString * defaultSearchEngineName; 
@property (nonatomic,readonly) NSString * countryCode;                                               //@synthesize countryCode=_countryCode - In the implementation block
@property (nonatomic,readonly) NSDictionary * templateParameterValues;                               //@synthesize templateParameterValues=_templateParameterValues - In the implementation block
@property (nonatomic,readonly) NSDictionary * carrierTemplateParameterValues;                        //@synthesize carrierTemplateParameterValues=_carrierTemplateParameterValues - In the implementation block
+(id)sharedInstance;
+(void)_initializeSharedInstance;
+(BOOL)_deviceRegionCodeIsChina;
+(void)loadSystemLanguageProperties;
+(id)sharedInstanceIfAvailable;
-(id)init;
-(id)description;
-(NSString *)countryCode;
-(NSArray *)engines;
-(NSDictionary *)templateParameterValues;
-(NSDictionary *)carrierTemplateParameterValues;
-(void)_populateSearchEngines;
-(void)_setEngines:(id)arg1 defaultSearchEngineIndex:(unsigned long long)arg2 ;
-(void)_loadSystemProperties;
-(void)_addAllWebSearchEngineInfosToArray:(id)arg1 andAddUserVisibleWebSearchEngineInfosToArray:(id)arg2 ;
-(void)_addSpecialSearchEnginesToArray:(id)arg1 ;
-(void)_setDefaultSearchEngine:(id)arg1 ;
-(void)_postDefaultSearchEngineDidChange;
-(void)_getEngines:(id*)arg1 defaultSearchEngineIndex:(unsigned long long*)arg2 ;
-(id)defaultSearchEngine;
-(id)_existingEngineInfoFor:(id)arg1 ;
-(void)reloadSearchEngines;
-(void)setDefaultSearchEngine:(id)arg1 ;
-(id)engineInfoFor:(id)arg1 ;
-(id)engineInfoForScriptName:(id)arg1 ;
-(id)safeSearchRequestForSearchRequest:(id)arg1 ;
-(NSArray *)enginesAvailableForUnifiedFieldSearching;
-(NSArray *)searchEngineNames;
-(NSString *)defaultSearchEngineName;
@end

