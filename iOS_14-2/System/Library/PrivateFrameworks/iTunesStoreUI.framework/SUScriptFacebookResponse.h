/*
* Generated on Thursday, January 14, 2021 at 2:25:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
*/

#import <iTunesStoreUI/SUScriptObject.h>

@class NSString, SUScriptError;

@interface SUScriptFacebookResponse : SUScriptObject {

	NSString* _bodyData;
	SUScriptError* _error;
	long long _statusCode;

}

@property (readonly) NSString * bodyData; 
@property (readonly) SUScriptError * error; 
@property (readonly) long long HTTPStatusCode; 
+(void)initialize;
+(id)webScriptNameForKeyName:(id)arg1 ;
-(long long)HTTPStatusCode;
-(id)attributeKeys;
-(SUScriptError *)error;
-(NSString *)bodyData;
-(id)_className;
-(void)dealloc;
-(id)scriptAttributeKeys;
-(id)initWithData:(id)arg1 response:(id)arg2 error:(id)arg3 ;
@end

