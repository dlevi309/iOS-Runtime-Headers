/*
* Generated on Thursday, January 14, 2021 at 2:27:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Twitter.framework/Twitter
*/


@class ACAccount, NSURL, NSDictionary;

@interface TWRequest : NSObject

@property (nonatomic,retain) ACAccount * account; 
@property (nonatomic,readonly) long long requestMethod; 
@property (nonatomic,readonly) NSURL * URL; 
@property (nonatomic,readonly) NSDictionary * parameters; 
-(NSDictionary *)parameters;
-(ACAccount *)account;
-(void)setAccount:(ACAccount *)arg1 ;
-(NSURL *)URL;
-(long long)requestMethod;
-(void)performRequestWithHandler:(/*^block*/id)arg1 ;
-(void)dealloc;
-(void)addMultiPartData:(id)arg1 withName:(id)arg2 type:(id)arg3 ;
-(id)initWithURL:(id)arg1 parameters:(id)arg2 requestMethod:(long long)arg3 ;
-(id)signedURLRequest;
@end

