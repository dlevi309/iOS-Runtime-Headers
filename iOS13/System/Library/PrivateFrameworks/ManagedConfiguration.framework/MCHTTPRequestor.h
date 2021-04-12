/*
* Generated on Monday, March 1, 2021 at 2:30:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSString *)password;
-(void)setPassword:(NSString *)arg1 ;
-(void)URLSession:(id)arg1 task:(id)arg2 didReceiveChallenge:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(NSString *)username;
-(void)setUsername:(NSString *)arg1 ;
-(void)setAnchorCertificates:(NSArray *)arg1 ;
-(void)setSelfReference:(id)arg1 ;
-(void)setDidFailDueToMissingCredentials:(BOOL)arg1 ;
-(BOOL)didFailDueToMissingCredentials;
-(NSArray *)anchorCertificates;
-(void)startWithRequest:(id)arg1 username:(id)arg2 password:(id)arg3 anchorCertificates:(id)arg4 completionBlock:(/*^block*/id)arg5 ;
-(id)selfReference;
@end

