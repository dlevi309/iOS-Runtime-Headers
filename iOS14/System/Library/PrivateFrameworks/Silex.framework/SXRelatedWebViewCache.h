/*
* Generated on Thursday, January 14, 2021 at 2:24:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/


@class NSMapTable;

@interface SXRelatedWebViewCache : NSObject {

	NSMapTable* _cache;

}

@property (nonatomic,readonly) NSMapTable * cache;              //@synthesize cache=_cache - In the implementation block
-(NSMapTable *)cache;
-(id)init;
-(id)relatedWebViewForBaseURL:(id)arg1 ;
-(void)storeRelatedWebView:(id)arg1 baseURL:(id)arg2 ;
@end

