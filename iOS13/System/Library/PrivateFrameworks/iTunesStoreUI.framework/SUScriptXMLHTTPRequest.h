/*
* Generated on Monday, March 1, 2021 at 2:31:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
*/

#import <iTunesStoreUI/SUScriptObject.h>

@protocol SUScriptXMLHTTPRequestDelegate;
@class NSMutableDictionary, SUXMLHTTPRequestOperation, SSMutableURLRequestProperties, NSDictionary, NSString, WebScriptObject;

@interface SUScriptXMLHTTPRequest : SUScriptObject {

	id<SUScriptXMLHTTPRequestDelegate> _delegate;
	NSMutableDictionary* _functions;
	SUXMLHTTPRequestOperation* _operation;
	unsigned long long _readyState;
	SSMutableURLRequestProperties* _requestProperties;
	NSDictionary* _responseHeaders;
	NSString* _responseText;
	unsigned long long _status;
	NSString* _statusText;
	unsigned long long _timeout;

}

@property (__weak) id<SUScriptXMLHTTPRequestDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long readyState; 
@property (copy,readonly) NSString * responseText; 
@property (readonly) unsigned long long status; 
@property (copy,readonly) NSString * statusText; 
@property (assign) unsigned long long timeout; 
@property (retain) WebScriptObject * onabort; 
@property (retain) WebScriptObject * onerror; 
@property (retain) WebScriptObject * onload; 
@property (retain) WebScriptObject * onloadend; 
@property (retain) WebScriptObject * onreadystatechange; 
@property (retain) WebScriptObject * ontimeout; 
+(void)initialize;
+(id)webScriptNameForSelector:(SEL)arg1 ;
+(id)webScriptNameForKeyName:(id)arg1 ;
-(void)dealloc;
-(id<SUScriptXMLHTTPRequestDelegate>)delegate;
-(void)setDelegate:(id<SUScriptXMLHTTPRequestDelegate>)arg1 ;
-(unsigned long long)status;
-(unsigned long long)timeout;
-(void)setTimeout:(unsigned long long)arg1 ;
-(id)_className;
-(void)abort;
-(void)setValue:(id)arg1 forHTTPHeaderField:(id)arg2 ;
-(id)initWithDelegate:(id)arg1 ;
-(id)attributeKeys;
-(unsigned long long)readyState;
-(NSString *)statusText;
-(NSString *)responseText;
-(id)getResponseHeader:(id)arg1 ;
-(id)getAllResponseHeaders;
-(id)scriptAttributeKeys;
-(void)_callFunctionWithName:(id)arg1 arguments:(id)arg2 ;
-(id)_scriptObjectForFunctionName:(id)arg1 ;
-(void)_setScriptObject:(id)arg1 forFunctionName:(id)arg2 ;
-(void)openWithHTTPMethod:(id)arg1 URL:(id)arg2 isAsync:(id)arg3 username:(id)arg4 password:(id)arg5 ;
-(void)sendWithBodyData:(id)arg1 ;
-(WebScriptObject *)onabort;
-(WebScriptObject *)onerror;
-(WebScriptObject *)onload;
-(WebScriptObject *)onloadend;
-(WebScriptObject *)onreadystatechange;
-(WebScriptObject *)ontimeout;
-(void)setOnabort:(WebScriptObject *)arg1 ;
-(void)setOnerror:(WebScriptObject *)arg1 ;
-(void)setOnload:(WebScriptObject *)arg1 ;
-(void)setOnloadend:(WebScriptObject *)arg1 ;
-(void)setOnreadystatechange:(WebScriptObject *)arg1 ;
-(void)setOntimeout:(WebScriptObject *)arg1 ;
@end

