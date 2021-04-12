/*
* Generated on Monday, March 1, 2021 at 2:33:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/


@class NSMapTable;

@interface SXRelatedWebViewCache : NSObject {

	NSMapTable* _cache;

}

@property (nonatomic,readonly) NSMapTable * cache;              //@synthesize cache=_cache - In the implementation block
-(id)init;
-(NSMapTable *)cache;
-(id)relatedWebViewForBaseURL:(id)arg1 ;
-(void)storeRelatedWebView:(id)arg1 baseURL:(id)arg2 ;
@end

