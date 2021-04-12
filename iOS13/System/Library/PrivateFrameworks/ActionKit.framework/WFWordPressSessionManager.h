/*
* Generated on Monday, March 1, 2021 at 2:34:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
*/


@class NSString, NSURL, NSNumber, NSURLSession;

@interface WFWordPressSessionManager : NSObject {

	NSString* _username;
	NSString* _password;
	NSURL* _endpointURL;
	NSNumber* _blogId;
	NSURLSession* _session;

}

@property (nonatomic,readonly) NSURLSession * session;              //@synthesize session=_session - In the implementation block
@property (nonatomic,copy) NSString * username;                     //@synthesize username=_username - In the implementation block
@property (nonatomic,copy) NSString * password;                     //@synthesize password=_password - In the implementation block
@property (nonatomic,copy) NSURL * endpointURL;                     //@synthesize endpointURL=_endpointURL - In the implementation block
@property (nonatomic,copy) NSNumber * blogId;                       //@synthesize blogId=_blogId - In the implementation block
-(id)init;
-(NSString *)password;
-(void)setPassword:(NSString *)arg1 ;
-(NSURLSession *)session;
-(NSString *)username;
-(NSURL *)endpointURL;
-(void)setUsername:(NSString *)arg1 ;
-(void)sendRequest:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)setEndpointURL:(NSURL *)arg1 ;
-(id)initWithSessionConfiguration:(id)arg1 ;
-(NSNumber *)blogId;
-(void)getBlogsWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)getTermsForTaxonomy:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)getPostTypesWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)getPostFormatsWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)getPostStatusesWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)getPageTemplatesWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)createPostWithTitle:(id)arg1 content:(id)arg2 type:(id)arg3 date:(id)arg4 format:(id)arg5 status:(id)arg6 allowingComments:(BOOL)arg7 name:(id)arg8 excerpt:(id)arg9 template:(id)arg10 tags:(id)arg11 categories:(id)arg12 thumbnailId:(id)arg13 customFields:(id)arg14 completionHandler:(/*^block*/id)arg15 ;
-(void)createPostWithContent:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)getPost:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)uploadFile:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)sendRequestWithMethod:(id)arg1 parameters:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)setBlogId:(NSNumber *)arg1 ;
@end

