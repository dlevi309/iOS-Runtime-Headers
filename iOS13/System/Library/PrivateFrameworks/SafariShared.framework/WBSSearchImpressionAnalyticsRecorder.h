/*
* Generated on Monday, March 1, 2021 at 2:33:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(WBSSearchProvider *)defaultSearchProvider;
-(void)setSearchProviders:(NSArray *)arg1 ;
-(void)setDefaultSearchProvider:(WBSSearchProvider *)arg1 ;
-(id)_searchProviderForURL:(id)arg1 ;
-(void)didActualizeImpressionForURL:(id)arg1 isFromUnifiedField:(BOOL)arg2 ;
-(NSArray *)searchProviders;
@end

