/*
* Generated on Monday, March 1, 2021 at 2:32:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
*/

#import <iTunesStoreUI/SUScriptObject.h>

@class SLRequest, SUScriptAppleAccount, NSURL;

@interface SUScriptFacebookRequest : SUScriptObject {

	SLRequest* _request;
	long long _requestMethod;
	SUScriptAppleAccount* _scriptAccount;
	NSURL* _url;

}

@property (retain) SUScriptAppleAccount * account; 
@property (readonly) long long requestMethod; 
@property (copy,readonly) NSURL * URL; 
@property (readonly) long long requestMethodDelete; 
@property (readonly) long long requestMethodGet; 
@property (readonly) long long requestMethodPost; 
+(void)initialize;
+(id)webScriptNameForSelector:(SEL)arg1 ;
+(id)webScriptNameForKeyName:(id)arg1 ;
-(void)dealloc;
-(NSURL *)URL;
-(id)_className;
-(SUScriptAppleAccount *)account;
-(void)setAccount:(SUScriptAppleAccount *)arg1 ;
-(void)setParameters:(id)arg1 ;
-(id)attributeKeys;
-(long long)requestMethod;
-(void)addMultiPartData:(id)arg1 withName:(id)arg2 type:(id)arg3 ;
-(id)scriptAttributeKeys;
-(long long)requestMethodGet;
-(long long)requestMethodPost;
-(long long)requestMethodDelete;
-(BOOL)_isRequestAllowed:(id*)arg1 ;
-(void)_performRequest:(id)arg1 withScriptFunction:(id)arg2 ;
-(void)addParameterWithKey:(id)arg1 value:(id)arg2 ;
-(void)performRequestWithFunction:(id)arg1 ;
-(id)initWithURL:(id)arg1 requestMethod:(id)arg2 ;
@end

