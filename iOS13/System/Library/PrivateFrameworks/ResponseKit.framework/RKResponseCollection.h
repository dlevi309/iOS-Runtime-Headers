/*
* Generated on Monday, March 1, 2021 at 2:32:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ResponseKit.framework/ResponseKit
*/


@protocol RKDisplayStringsProvider;
@class NSMutableDictionary, NSURL;

@interface RKResponseCollection : NSObject {

	NSMutableDictionary* _responseCatalog;
	NSMutableDictionary* _personalizersByLanguageID;
	NSURL* _dynamicDataURL;
	id<RKDisplayStringsProvider> _displayStringsProvider;

}

@property (retain) NSMutableDictionary * responseCatalog;                              //@synthesize responseCatalog=_responseCatalog - In the implementation block
@property (retain) NSMutableDictionary * personalizersByLanguageID;                    //@synthesize personalizersByLanguageID=_personalizersByLanguageID - In the implementation block
@property (readonly) NSURL * dynamicDataURL;                                           //@synthesize dynamicDataURL=_dynamicDataURL - In the implementation block
@property (readonly) id<RKDisplayStringsProvider> displayStringsProvider;              //@synthesize displayStringsProvider=_displayStringsProvider - In the implementation block
+(id)speechActsForCategory:(unsigned long long)arg1 platform:(id)arg2 ;
+(id)responsesForFixedPhrase:(id)arg1 withLanguage:(id)arg2 ;
+(id)responsesForFullScreenMoments:(id)arg1 ;
+(id)responsesForFullScreenMoments:(id)arg1 withLanguage:(id)arg2 ;
-(NSMutableDictionary *)personalizersByLanguageID;
-(void)flushDynamicData;
-(NSURL *)dynamicDataURL;
-(NSMutableDictionary *)responseCatalog;
-(void)setResponseCatalog:(NSMutableDictionary *)arg1 ;
-(id<RKDisplayStringsProvider>)displayStringsProvider;
-(id)personalizerForLanguageID:(id)arg1 ;
-(id)standardResponsesByCategoryForLanguageIdentifier:(id)arg1 andUsage:(id)arg2 ;
-(id)initWithDynamicDataURL:(id)arg1 displayStringsProvider:(id)arg2 ;
-(void)resetRegisteredResponses;
-(id)cannedResponsesForCategory:(id)arg1 withLanguage:(id)arg2 options:(unsigned long long)arg3 ;
-(id)responsesForCategory:(unsigned long long)arg1 gender:(unsigned long long)arg2 maximumResponses:(unsigned long long)arg3 withLanguage:(id)arg4 context:(id)arg5 options:(unsigned long long)arg6 ;
-(void)registerResponse:(id)arg1 forMessage:(id)arg2 withLanguage:(id)arg3 context:(id)arg4 effectiveDate:(id)arg5 ;
-(void)setPersonalizersByLanguageID:(NSMutableDictionary *)arg1 ;
@end

