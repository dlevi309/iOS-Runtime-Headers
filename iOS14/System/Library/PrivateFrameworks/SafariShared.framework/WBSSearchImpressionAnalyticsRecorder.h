/*
* Generated on Thursday, January 14, 2021 at 2:23:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
*/


@class NSArray, WBSSearchProvider;

@interface WBSSearchImpressionAnalyticsRecorder : NSObject {

	NSArray* _searchProviders;
	WBSSearchProvider* _defaultSearchProvider;

}

@property (nonatomic,copy) NSArray * searchProviders;                                //@synthesize searchProviders=_searchProviders - In the implementation block
@property (nonatomic,retain) WBSSearchProvider * defaultSearchProvider;              //@synthesize defaultSearchProvider=_defaultSearchProvider - In the implementation block
+(id)sharedRecorder;
-(NSArray *)searchProviders;
-(id)init;
-(void)setDefaultSearchProvider:(WBSSearchProvider *)arg1 ;
-(id)searchProviderForURL:(id)arg1 ;
-(void)didActualizeImpressionForURL:(id)arg1 provenance:(long long)arg2 ;
-(WBSSearchProvider *)defaultSearchProvider;
-(void)setSearchProviders:(NSArray *)arg1 ;
@end

