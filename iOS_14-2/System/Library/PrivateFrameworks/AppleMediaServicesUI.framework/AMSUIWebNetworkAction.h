/*
* Generated on Thursday, January 14, 2021 at 2:24:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServicesUI.framework/AppleMediaServicesUI
*/

#import <libobjc.A.dylib/AMSUIWebActionRunnable.h>

@class NSString, ACAccount, NSDictionary, NSURL, AMSUIWebClientContext;

@interface AMSUIWebNetworkAction : NSObject <AMSUIWebActionRunnable> {

	BOOL _includeiCloudTokens;
	NSString* _body;
	ACAccount* _account;
	NSDictionary* _headers;
	NSString* _method;
	NSURL* _URL;
	AMSUIWebClientContext* _context;

}

@property (nonatomic,retain) AMSUIWebClientContext * context;              //@synthesize context=_context - In the implementation block
@property (nonatomic,retain) NSString * body;                              //@synthesize body=_body - In the implementation block
@property (nonatomic,retain) ACAccount * account;                          //@synthesize account=_account - In the implementation block
@property (nonatomic,retain) NSDictionary * headers;                       //@synthesize headers=_headers - In the implementation block
@property (assign,nonatomic) BOOL includeiCloudTokens;                     //@synthesize includeiCloudTokens=_includeiCloudTokens - In the implementation block
@property (nonatomic,retain) NSString * method;                            //@synthesize method=_method - In the implementation block
@property (nonatomic,retain) NSURL * URL;                                  //@synthesize URL=_URL - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setBody:(NSString *)arg1 ;
-(ACAccount *)account;
-(NSString *)body;
-(void)setAccount:(ACAccount *)arg1 ;
-(NSString *)method;
-(void)setURL:(NSURL *)arg1 ;
-(AMSUIWebClientContext *)context;
-(NSURL *)URL;
-(void)setMethod:(NSString *)arg1 ;
-(NSDictionary *)headers;
-(void)setHeaders:(NSDictionary *)arg1 ;
-(void)setContext:(AMSUIWebClientContext *)arg1 ;
-(id)initWithJSObject:(id)arg1 context:(id)arg2 ;
-(id)runAction;
-(BOOL)includeiCloudTokens;
-(void)setIncludeiCloudTokens:(BOOL)arg1 ;
@end

