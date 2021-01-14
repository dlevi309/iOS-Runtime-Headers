/*
* Generated on Thursday, January 14, 2021 at 2:20:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
*/


@class NSString, NSURL;

@interface NSHTTPCookie2StorageFilter : NSObject {

	BOOL _isTrusted;
	BOOL _isTrustedCached;
	NSString* _urlScheme;
	BOOL _isTopLevelNavigation;
	BOOL _isSafe;
	BOOL _overwriteHTTPOnlyCookies;
	NSURL* _url;
	NSURL* _mainDocumentURL;
	NSURL* _siteForCookies;
	NSString* _partition;
	unsigned long long _acceptPolicy;

}

@property (nonatomic,retain) NSURL * url;                          //@synthesize url=_url - In the implementation block
@property (nonatomic,retain) NSURL * mainDocumentURL;              //@synthesize mainDocumentURL=_mainDocumentURL - In the implementation block
@property (nonatomic,retain) NSURL * siteForCookies;               //@synthesize siteForCookies=_siteForCookies - In the implementation block
@property (nonatomic,retain) NSString * partition;                 //@synthesize partition=_partition - In the implementation block
@property (assign) BOOL isTopLevelNavigation;                      //@synthesize isTopLevelNavigation=_isTopLevelNavigation - In the implementation block
@property (assign) BOOL isSafe;                                    //@synthesize isSafe=_isSafe - In the implementation block
@property (assign) BOOL overwriteHTTPOnlyCookies;                  //@synthesize overwriteHTTPOnlyCookies=_overwriteHTTPOnlyCookies - In the implementation block
@property (assign) unsigned long long acceptPolicy;                //@synthesize acceptPolicy=_acceptPolicy - In the implementation block
-(BOOL)isSafe;
-(NSString *)partition;
-(void)setIsSafe:(BOOL)arg1 ;
-(void)setPartition:(NSString *)arg1 ;
-(id)init;
-(unsigned long long)acceptPolicy;
-(void)setOverwriteHTTPOnlyCookies:(BOOL)arg1 ;
-(NSURL *)mainDocumentURL;
-(void)setAcceptPolicy:(unsigned long long)arg1 ;
-(void)setIsTopLevelNavigation:(BOOL)arg1 ;
-(NSURL *)siteForCookies;
-(void)setSiteForCookies:(NSURL *)arg1 ;
-(BOOL)overwriteHTTPOnlyCookies;
-(BOOL)isTopLevelNavigation;
-(void)setMainDocumentURL:(NSURL *)arg1 ;
-(NSURL *)url;
-(BOOL)isTrusted;
-(void)setUrl:(NSURL *)arg1 ;
@end

