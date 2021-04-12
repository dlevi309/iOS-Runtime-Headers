/*
* Generated on Thursday, January 14, 2021 at 2:29:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Health/Plugins/HealthRecordsPlugin.bundle/HealthRecordsPlugin
*/

#import <Foundation/NSOperation.h>

@class NSURLRequest, NSURLSession, HKClinicalProviderSearchResultsPage, NSError;

@interface HDCPSSearchOperation : NSOperation {

	NSURLRequest* _request;
	NSURLSession* _session;
	HKClinicalProviderSearchResultsPage* _page;
	NSError* _error;

}

@property (nonatomic,copy,readonly) NSURLRequest * request;                         //@synthesize request=_request - In the implementation block
@property (nonatomic,readonly) NSURLSession * session;                              //@synthesize session=_session - In the implementation block
@property (nonatomic,copy) HKClinicalProviderSearchResultsPage * page;              //@synthesize page=_page - In the implementation block
@property (nonatomic,copy) NSError * error;                                         //@synthesize error=_error - In the implementation block
-(void)setPage:(HKClinicalProviderSearchResultsPage *)arg1 ;
-(HKClinicalProviderSearchResultsPage *)page;
-(NSURLSession *)session;
-(void)setError:(NSError *)arg1 ;
-(NSURLRequest *)request;
-(NSError *)error;
-(void)main;
-(id)initWithRequest:(id)arg1 session:(id)arg2 ;
@end

