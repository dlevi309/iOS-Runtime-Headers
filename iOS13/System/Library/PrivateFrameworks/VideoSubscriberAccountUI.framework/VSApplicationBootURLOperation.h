/*
* Generated on Monday, March 1, 2021 at 2:35:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VideoSubscriberAccountUI.framework/VideoSubscriberAccountUI
*/

#import <VideoSubscriberAccountUI/VideoSubscriberAccountUI-Structs.h>
#import <VideoSubscriberAccount/VSAsyncOperation.h>
#import <libobjc.A.dylib/NSURLSessionDelegate.h>

@class NSURL, VSFailable, VSPreferences, NSString;

@interface VSApplicationBootURLOperation : VSAsyncOperation <NSURLSessionDelegate> {

	BOOL _isDeveloper;
	NSURL* _url;
	VSFailable* _urlOrError;
	VSPreferences* _preferences;

}

@property (nonatomic,retain) VSPreferences * preferences;              //@synthesize preferences=_preferences - In the implementation block
@property (nonatomic,retain) NSURL * url;                              //@synthesize url=_url - In the implementation block
@property (assign,nonatomic) BOOL isDeveloper;                         //@synthesize isDeveloper=_isDeveloper - In the implementation block
@property (nonatomic,retain) VSFailable * urlOrError;                  //@synthesize urlOrError=_urlOrError - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(NSURL *)url;
-(void)URLSession:(id)arg1 didReceiveChallenge:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)setUrl:(NSURL *)arg1 ;
-(void)setPreferences:(VSPreferences *)arg1 ;
-(VSPreferences *)preferences;
-(void)executionDidBegin;
-(BOOL)isDeveloper;
-(void)setIsDeveloper:(BOOL)arg1 ;
-(id)initWithBootURL:(id)arg1 isDeveloper:(BOOL)arg2 ;
-(VSFailable *)urlOrError;
-(void)setUrlOrError:(VSFailable *)arg1 ;
-(id)generateFilePathForURL:(id)arg1 ;
-(BOOL)verifyExtendedValidationWithTrust:(SecTrustRef)arg1 ;
@end

