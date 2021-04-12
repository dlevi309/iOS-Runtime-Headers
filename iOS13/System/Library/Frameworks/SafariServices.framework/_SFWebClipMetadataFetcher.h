/*
* Generated on Monday, March 1, 2021 at 2:31:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)initWithInjectedJavascriptController:(id)arg1 ;
-(void)fetchMetadataWithConsumer:(/*^block*/id)arg1 ;
-(void)_startFetchingMetadata;
-(id)_webClipLinkTagWithDictionary:(id)arg1 ;
@end

