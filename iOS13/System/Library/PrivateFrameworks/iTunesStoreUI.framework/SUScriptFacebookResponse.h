/*
* Generated on Monday, March 1, 2021 at 2:32:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(SUScriptError *)error;
-(id)_className;
-(NSString *)bodyData;
-(id)attributeKeys;
-(long long)HTTPStatusCode;
-(id)scriptAttributeKeys;
-(id)initWithData:(id)arg1 response:(id)arg2 error:(id)arg3 ;
@end

