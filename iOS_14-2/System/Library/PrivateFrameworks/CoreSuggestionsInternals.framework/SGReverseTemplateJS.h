/*
* Generated on Thursday, January 14, 2021 at 2:25:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
*/

#import <libobjc.A.dylib/SGReverseTemplateJS.h>

@protocol SGReverseTemplateJS
@required
-(void)shouldDownloadFull:(id)arg1 reply:(/*^block*/id)arg2;
-(void)emailToOutput:(id)arg1 reply:(/*^block*/id)arg2;
-(void)textMessageToOutput:(id)arg1 reply:(/*^block*/id)arg2;
-(void)schemaOrgToOutput:(id)arg1 reply:(/*^block*/id)arg2;
-(void)emailToJsonLd:(id)arg1 reply:(/*^block*/id)arg2;
-(void)eventClassificationForEntity:(id)arg1 reply:(/*^block*/id)arg2;
-(void)resolveCandidatesForJSDict:(id)arg1 reply:(/*^block*/id)arg2;
-(void)diffSchemas:(id)arg1 withExpectedSchemas:(id)arg2 reply:(/*^block*/id)arg3;
-(void)parseHTML:(id)arg1 reply:(/*^block*/id)arg2;

@end


@protocol OS_dispatch_queue, OS_dispatch_source;
@class JSVirtualMachine, NSMutableArray, JSContext, SGReverseTemplatesJSDataDetectors, _PASNotificationToken, NSURL, NSString, NSObject, NSISO8601DateFormatter;

@interface SGReverseTemplateJS : NSObject <SGReverseTemplateJS> {

	JSVirtualMachine* _jsVM;
	NSMutableArray* _memoryMappedFiles;
	NSMutableArray* _memoryMappedFileNames;
	JSContext* _jsContext;
	SGReverseTemplatesJSDataDetectors* _dd;
	_PASNotificationToken* _assetUpdateToken;
	NSURL* _assetPath;
	NSString* _localeIdentifier;
	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_queue> _memoryPressureQueue;
	NSObject*<OS_dispatch_source> _memoryPressureSource;
	NSISO8601DateFormatter* _dateFormatter;

}
+(id)fakeFlightInformationWithAirlineCode:(id)arg1 flightNumber:(id)arg2 flightDate:(id)arg3 ;
-(id)init;
-(BOOL)shouldDownloadFull:(id)arg1 ;
-(void)setAssetPath:(id)arg1 ;
-(void)dealloc;
-(void)shouldDownloadFull:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)emailToOutput:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)textMessageToOutput:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)schemaOrgToOutput:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)emailToJsonLd:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)eventClassificationForEntity:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)resolveCandidatesForJSDict:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)diffSchemas:(id)arg1 withExpectedSchemas:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)parseHTML:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)_handleMemoryPressureStatus:(unsigned long long)arg1 ;
-(id)_stringFromMemoryPressureStatus:(unsigned long long)arg1 ;
-(id)getJSContext;
-(void)freeJSContext;
-(void)refreshAssetPath;
-(id)processLoadRequestWithFileName:(id)arg1 ;
-(id)loadTrieWithFileName:(id)arg1 ;
-(void)initCurrentAsset;
-(id)mappedArrayBufferForFileName:(id)arg1 ;
-(id)md5Hash:(id)arg1 ;
-(id)flightInformationWithAirlineCode:(id)arg1 flightNumber:(id)arg2 flightDate:(id)arg3 ;
-(id)sfFlightsToDictionnary:(id)arg1 ;
-(id)formattedDate:(id)arg1 withTimezone:(id)arg2 ;
-(id)sfAirportToDictionnary:(id)arg1 ;
-(id)dictionaryFromTimezone:(id)arg1 ;
-(id)sfFlightStatusToString:(int)arg1 ;
-(id)loadJSFromASCIIFile:(id)arg1 ;
-(void)holdXpcTransactionForShortDelay;
-(id)_eventClassificationForEntity:(id)arg1 ;
-(id)_resolveCandidatesForJSDict:(id)arg1 ;
-(id)_diffSchemas:(id)arg1 withExpectedSchemas:(id)arg2 ;
-(id)reverseMapEntity:(id)arg1 forCategory:(id)arg2 withSchemaExpectation:(id)arg3 ;
-(id)payloadToOutputWithEntryPoint:(id)arg1 arguments:(id)arg2 ;
-(void)payloadToOutputWithEntryPoint:(id)arg1 arguments:(id)arg2 reply:(/*^block*/id)arg3 ;
-(id)outputExceptionsFromOutput:(id)arg1 ;
-(id)_prepareEntity:(id)arg1 ;
-(id)_prepareArguments:(id)arg1 ;
@end

