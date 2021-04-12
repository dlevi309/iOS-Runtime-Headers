/*
* Generated on Thursday, January 14, 2021 at 2:21:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
*/

#import <libobjc.A.dylib/NSURLSessionDataDelegate.h>

@class NSString, NSArray;

@interface MCHTTPRequestor : NSObject <NSURLSessionDataDelegate> {

	BOOL _didFailDueToMissingCredentials;
	NSString* _username;
	NSString* _password;
	NSArray* _anchorCertificates;
	id _selfReference;

}

@property (nonatomic,copy) NSString * username;                                //@synthesize username=_username - In the implementation block
@property (nonatomic,copy) NSString * password;                                //@synthesize password=_password - In the implementation block
@property (nonatomic,retain) NSArray * anchorCertificates;                     //@synthesize anchorCertificates=_anchorCertificates - In the implementation block
@property (nonatomic,retain) id selfReference;                                 //@synthesize selfReference=_selfReference - In the implementation block
@property (assign,nonatomic) BOOL didFailDueToMissingCredentials;              //@synthesize didFailDueToMissingCredentials=_didFailDueToMissingCredentials - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)URLSession:(id)arg1 task:(id)arg2 didReceiveChallenge:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)setUsername:(NSString *)arg1 ;
-(NSString *)password;
-(NSString *)username;
-(void)setPassword:(NSString *)arg1 ;
-(id)selfReference;
-(void)setAnchorCertificates:(NSArray *)arg1 ;
-(void)setSelfReference:(id)arg1 ;
-(NSArray *)anchorCertificates;
-(void)setDidFailDueToMissingCredentials:(BOOL)arg1 ;
-(BOOL)didFailDueToMissingCredentials;
-(void)startWithRequest:(id)arg1 username:(id)arg2 password:(id)arg3 anchorCertificates:(id)arg4 completionBlock:(/*^block*/id)arg5 ;
@end

