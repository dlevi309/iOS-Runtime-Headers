/*
* Generated on Thursday, January 14, 2021 at 2:27:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
*/

#import <VideoSubscriberAccount/VideoSubscriberAccount-Structs.h>
#import <VideoSubscriberAccount/VSAsyncOperation.h>
#import <libobjc.A.dylib/NSURLSessionDelegate.h>

@class NSURL, VSFailable, VSPreferences, NSDictionary, NSString;

@interface VSApplicationBootURLOperation : VSAsyncOperation <NSURLSessionDelegate> {

	BOOL _developer;
	BOOL _test;
	NSURL* _url;
	VSFailable* _urlOrError;
	VSPreferences* _preferences;
	NSDictionary* _trustInfo;

}

@property (nonatomic,retain) VSPreferences * preferences;                    //@synthesize preferences=_preferences - In the implementation block
@property (assign,getter=isForTesting,nonatomic) BOOL test;                  //@synthesize test=_test - In the implementation block
@property (nonatomic,retain) NSDictionary * trustInfo;                       //@synthesize trustInfo=_trustInfo - In the implementation block
@property (nonatomic,retain) NSURL * url;                                    //@synthesize url=_url - In the implementation block
@property (assign,getter=isDeveloper,nonatomic) BOOL developer;              //@synthesize developer=_developer - In the implementation block
@property (nonatomic,retain) VSFailable * urlOrError;                        //@synthesize urlOrError=_urlOrError - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)executionDidBegin;
-(id)init;
-(void)URLSession:(id)arg1 didReceiveChallenge:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(VSPreferences *)preferences;
-(void)setPreferences:(VSPreferences *)arg1 ;
-(NSURL *)url;
-(void)setUrl:(NSURL *)arg1 ;
-(void)setTest:(BOOL)arg1 ;
-(BOOL)isDeveloper;
-(void)setDeveloper:(BOOL)arg1 ;
-(BOOL)isForTesting;
-(void)setUrlOrError:(VSFailable *)arg1 ;
-(id)generateFilePathForURL:(id)arg1 ;
-(void)setTrustInfo:(NSDictionary *)arg1 ;
-(BOOL)verifyExtendedValidationWithTrust:(SecTrustRef)arg1 ;
-(id)initWithBootURL:(id)arg1 isDeveloper:(BOOL)arg2 ;
-(VSFailable *)urlOrError;
-(NSDictionary *)trustInfo;
@end

