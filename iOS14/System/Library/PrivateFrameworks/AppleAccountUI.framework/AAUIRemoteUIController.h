/*
* Generated on Thursday, January 14, 2021 at 2:25:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppleAccountUI.framework/AppleAccountUI
*/

#import <RemoteUI/RemoteUIController.h>

@class NSString, NSURLRequest, NSHTTPURLResponse;

@interface AAUIRemoteUIController : RemoteUIController {

	NSString* _identifier;
	NSURLRequest* _currentRequest;
	NSHTTPURLResponse* _redirectResponse;

}

@property (nonatomic,copy) NSString * identifier;                               //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) NSURLRequest * currentRequest;                   //@synthesize currentRequest=_currentRequest - In the implementation block
@property (nonatomic,retain) NSHTTPURLResponse * redirectResponse;              //@synthesize redirectResponse=_redirectResponse - In the implementation block
-(NSURLRequest *)currentRequest;
-(id)init;
-(void)loader:(id)arg1 didFinishLoadWithError:(id)arg2 ;
-(void)loader:(id)arg1 didReceiveHTTPResponse:(id)arg2 ;
-(void)loader:(id)arg1 didReceiveChallenge:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)loader:(id)arg1 willLoadRequest:(id)arg2 redirectResponse:(id)arg3 ;
-(void)loader:(id)arg1 willLoadRequest:(id)arg2 redirectResponse:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(id)description;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSString *)identifier;
-(id)initWithIdentifier:(id)arg1 ;
-(void)setRedirectResponse:(NSHTTPURLResponse *)arg1 ;
-(id)loader:(id)arg1 connection:(id)arg2 willSendRequest:(id)arg3 redirectResponse:(id)arg4 ;
-(void)_loader:(id)arg1 didReceiveChallenge:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(NSHTTPURLResponse *)redirectResponse;
@end

