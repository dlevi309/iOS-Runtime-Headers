/*
* Generated on Thursday, January 14, 2021 at 2:20:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
*/


@class NSString, NSDate, NSURL;

@interface NSHTTPCookie2LookupFilter : NSObject {

	BOOL _secure;
	BOOL _httpOnly;
	BOOL _ignoreHostOnlyFlag;
	BOOL _ignoreHTTPOnlyCookie;
	BOOL _ignoreSecureFlag;
	BOOL _isTopLevelNavigation;
	BOOL _isSafe;
	NSString* _name;
	NSString* _value;
	NSString* _domain;
	NSString* _path;
	NSString* _partition;
	long long _sameSite;
	NSDate* _newerThanCreationDate;
	NSDate* _newerThanExpirationDate;
	NSDate* _newerThanLastAccess;
	NSDate* _olderThanCreationDate;
	NSDate* _olderThanExpirationDate;
	NSDate* _olderThanLastAccess;
	NSURL* _inURL;
	NSURL* _mainDocumentURL;
	NSURL* _siteForCookies;
	unsigned long long _acceptPolicy;

}

@property (nonatomic,copy) NSString * name;                               //@synthesize name=_name - In the implementation block
@property (nonatomic,copy) NSString * value;                              //@synthesize value=_value - In the implementation block
@property (nonatomic,copy) NSString * domain;                             //@synthesize domain=_domain - In the implementation block
@property (nonatomic,copy) NSString * path;                               //@synthesize path=_path - In the implementation block
@property (nonatomic,copy) NSString * partition;                          //@synthesize partition=_partition - In the implementation block
@property (assign) long long sameSite;                                    //@synthesize sameSite=_sameSite - In the implementation block
@property (nonatomic,copy) NSDate * newerThanCreationDate;                //@synthesize newerThanCreationDate=_newerThanCreationDate - In the implementation block
@property (nonatomic,copy) NSDate * newerThanExpirationDate;              //@synthesize newerThanExpirationDate=_newerThanExpirationDate - In the implementation block
@property (nonatomic,copy) NSDate * newerThanLastAccess;                  //@synthesize newerThanLastAccess=_newerThanLastAccess - In the implementation block
@property (nonatomic,copy) NSDate * olderThanCreationDate;                //@synthesize olderThanCreationDate=_olderThanCreationDate - In the implementation block
@property (nonatomic,copy) NSDate * olderThanExpirationDate;              //@synthesize olderThanExpirationDate=_olderThanExpirationDate - In the implementation block
@property (nonatomic,copy) NSDate * olderThanLastAccess;                  //@synthesize olderThanLastAccess=_olderThanLastAccess - In the implementation block
@property (assign) BOOL secure;                                           //@synthesize secure=_secure - In the implementation block
@property (assign) BOOL httpOnly;                                         //@synthesize httpOnly=_httpOnly - In the implementation block
@property (assign) BOOL ignoreHostOnlyFlag;                               //@synthesize ignoreHostOnlyFlag=_ignoreHostOnlyFlag - In the implementation block
@property (assign) BOOL ignoreHTTPOnlyCookie;                             //@synthesize ignoreHTTPOnlyCookie=_ignoreHTTPOnlyCookie - In the implementation block
@property (assign) BOOL ignoreSecureFlag;                                 //@synthesize ignoreSecureFlag=_ignoreSecureFlag - In the implementation block
@property (nonatomic,copy) NSURL * inURL;                                 //@synthesize inURL=_inURL - In the implementation block
@property (nonatomic,copy) NSURL * mainDocumentURL;                       //@synthesize mainDocumentURL=_mainDocumentURL - In the implementation block
@property (nonatomic,copy) NSURL * siteForCookies;                        //@synthesize siteForCookies=_siteForCookies - In the implementation block
@property (assign) BOOL isTopLevelNavigation;                             //@synthesize isTopLevelNavigation=_isTopLevelNavigation - In the implementation block
@property (assign) BOOL isSafe;                                           //@synthesize isSafe=_isSafe - In the implementation block
@property (assign) unsigned long long acceptPolicy;                       //@synthesize acceptPolicy=_acceptPolicy - In the implementation block
-(long long)_flags;
-(NSURL *)inURL;
-(BOOL)secure;
-(BOOL)isSafe;
-(void)setSecure:(BOOL)arg1 ;
-(BOOL)httpOnly;
-(long long)sameSite;
-(NSString *)partition;
-(void)setInURL:(NSURL *)arg1 ;
-(void)setIsSafe:(BOOL)arg1 ;
-(void)setSameSite:(long long)arg1 ;
-(void)setHttpOnly:(BOOL)arg1 ;
-(void)setPartition:(NSString *)arg1 ;
-(BOOL)matchCookie:(id)arg1 ;
-(unsigned long long)acceptPolicy;
-(NSURL *)mainDocumentURL;
-(void)setAcceptPolicy:(unsigned long long)arg1 ;
-(void)setIsTopLevelNavigation:(BOOL)arg1 ;
-(void)setNewerThanExpirationDate:(NSDate *)arg1 ;
-(void)setOlderThanExpirationDate:(NSDate *)arg1 ;
-(NSDate *)newerThanCreationDate;
-(NSDate *)olderThanCreationDate;
-(NSURL *)siteForCookies;
-(id)initWithCookie:(id)arg1 ;
-(BOOL)ignoreSecureFlag;
-(void)setNewerThanCreationDate:(NSDate *)arg1 ;
-(void)setSiteForCookies:(NSURL *)arg1 ;
-(void)setOlderThanCreationDate:(NSDate *)arg1 ;
-(void)setIgnoreHTTPOnlyCookie:(BOOL)arg1 ;
-(void)setIgnoreHostOnlyFlag:(BOOL)arg1 ;
-(BOOL)ignoreHTTPOnlyCookie;
-(BOOL)ignoreHostOnlyFlag;
-(void)setIgnoreSecureFlag:(BOOL)arg1 ;
-(BOOL)isTopLevelNavigation;
-(void)setMainDocumentURL:(NSURL *)arg1 ;
-(NSDate *)newerThanLastAccess;
-(NSDate *)olderThanLastAccess;
-(NSDate *)newerThanExpirationDate;
-(void)setNewerThanLastAccess:(NSDate *)arg1 ;
-(NSDate *)olderThanExpirationDate;
-(void)setOlderThanLastAccess:(NSDate *)arg1 ;
-(void)setPath:(NSString *)arg1 ;
-(NSString *)path;
-(void)setDomain:(NSString *)arg1 ;
-(NSString *)domain;
-(NSString *)name;
-(void)setValue:(NSString *)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(NSString *)value;
@end

