/*
* Generated on Monday, March 1, 2021 at 2:30:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
*/

#import <libobjc.A.dylib/NSURLSessionDelegate.h>
#import <libobjc.A.dylib/NSURLSessionTaskDelegate.h>

@class NSString;

@interface PACURLSessionDelegate : NSObject <NSURLSessionDelegate, NSURLSessionTaskDelegate> {

	NSString* _username;
	NSString* _password;

}

@property (retain) NSString * username;                             //@synthesize username=_username - In the implementation block
@property (retain) NSString * password;                             //@synthesize password=_password - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(NSString *)password;
-(void)setPassword:(NSString *)arg1 ;
-(void)URLSession:(id)arg1 didReceiveChallenge:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)URLSession:(id)arg1 task:(id)arg2 didReceiveChallenge:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(NSString *)username;
-(void)setUsername:(NSString *)arg1 ;
-(id)initWithUsername:(id)arg1 password:(id)arg2 ;
@end

