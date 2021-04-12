/*
* Generated on Monday, March 1, 2021 at 2:32:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(id)description;
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(id)initWithIdentifier:(id)arg1 ;
-(NSURLRequest *)currentRequest;
-(NSHTTPURLResponse *)redirectResponse;
-(void)setRedirectResponse:(NSHTTPURLResponse *)arg1 ;
-(void)loader:(id)arg1 willLoadRequest:(id)arg2 redirectResponse:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(id)loader:(id)arg1 willLoadRequest:(id)arg2 redirectResponse:(id)arg3 ;
-(void)loader:(id)arg1 didFinishLoadWithError:(id)arg2 ;
-(void)loader:(id)arg1 didReceiveHTTPResponse:(id)arg2 ;
-(void)loader:(id)arg1 didReceiveChallenge:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)loader:(id)arg1 connection:(id)arg2 willSendRequest:(id)arg3 redirectResponse:(id)arg4 ;
-(void)_loader:(id)arg1 didReceiveChallenge:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
@end

