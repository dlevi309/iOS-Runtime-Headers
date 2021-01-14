/*
* Generated on Thursday, January 14, 2021 at 2:23:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
*/


@class NSDictionary, NSArray, NSMutableArray, _SFInjectedJavaScriptController;

@interface _SFWebClipMetadataFetcher : NSObject {

	NSDictionary* _metaTags;
	NSArray* _linkTags;
	NSMutableArray* _metadataConsumers;
	BOOL _fetchingCompleted;
	_SFInjectedJavaScriptController* _jsController;

}
+(id)metadataFetcherScriptSource;
-(void)_startFetchingMetadata;
-(id)_webClipLinkTagWithDictionary:(id)arg1 ;
-(id)initWithInjectedJavascriptController:(id)arg1 ;
-(void)fetchMetadataWithConsumer:(/*^block*/id)arg1 ;
@end

