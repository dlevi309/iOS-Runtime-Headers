/*
* Generated on Monday, March 1, 2021 at 2:34:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Twitter.framework/Twitter
*/


@class SLTwitterRequest, ACAccount, NSURL, NSDictionary;

@interface TWRequest : NSObject {

	SLTwitterRequest* _request;

}

@property (nonatomic,retain) ACAccount * account; 
@property (nonatomic,readonly) long long requestMethod; 
@property (nonatomic,readonly) NSURL * URL; 
@property (nonatomic,readonly) NSDictionary * parameters; 
-(void)dealloc;
-(NSURL *)URL;
-(NSDictionary *)parameters;
-(ACAccount *)account;
-(void)setAccount:(ACAccount *)arg1 ;
-(void)performRequestWithHandler:(/*^block*/id)arg1 ;
-(long long)requestMethod;
-(id)initWithURL:(id)arg1 parameters:(id)arg2 requestMethod:(long long)arg3 ;
-(id)signedURLRequest;
-(void)addMultiPartData:(id)arg1 withName:(id)arg2 type:(id)arg3 ;
@end

