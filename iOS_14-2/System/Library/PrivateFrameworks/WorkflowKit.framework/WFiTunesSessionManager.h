/*
* Generated on Thursday, January 14, 2021 at 2:26:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
*/


@class NSURLSession, NSURL;

@interface WFiTunesSessionManager : NSObject {

	NSURLSession* _session;
	NSURL* _baseURL;

}

@property (nonatomic,copy,readonly) NSURL * baseURL;                //@synthesize baseURL=_baseURL - In the implementation block
@property (nonatomic,readonly) NSURLSession * session;              //@synthesize session=_session - In the implementation block
-(NSURL *)baseURL;
-(id)init;
-(NSURLSession *)session;
-(id)initWithSessionConfiguration:(id)arg1 ;
-(void)searchForMediaOfType:(id)arg1 limitedToEntityType:(id)arg2 withTerm:(id)arg3 forAttribute:(id)arg4 countryCode:(id)arg5 limit:(unsigned long long)arg6 completion:(/*^block*/id)arg7 ;
-(void)lookupMediaWithIdentifiers:(id)arg1 countryCode:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)lookupMediaWithBundleIdentifier:(id)arg1 countryCode:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)lookupMediaWithUPC:(unsigned long long)arg1 completion:(/*^block*/id)arg2 ;
-(void)lookupMediaWithISBN:(unsigned long long)arg1 completion:(/*^block*/id)arg2 ;
-(void)getMediaWithURL:(id)arg1 completion:(/*^block*/id)arg2 ;
@end

