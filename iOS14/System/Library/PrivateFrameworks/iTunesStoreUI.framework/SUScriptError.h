/*
* Generated on Thursday, January 14, 2021 at 2:25:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
*/

#import <iTunesStoreUI/SUScriptObject.h>

@class NSError, NSString;

@interface SUScriptError : SUScriptObject {

	NSError* _error;

}

@property (readonly) long long code; 
@property (readonly) NSString * domain; 
@property (readonly) NSString * localizedDescription; 
@property (readonly) NSString * localizedFailureReason; 
@property (readonly) NSString * localizedRecoverySuggestion; 
+(void)initialize;
+(id)webScriptNameForKeyName:(id)arg1 ;
-(NSString *)localizedFailureReason;
-(NSString *)localizedRecoverySuggestion;
-(id)initWithError:(id)arg1 ;
-(id)attributeKeys;
-(NSString *)domain;
-(NSString *)localizedDescription;
-(long long)code;
-(id)_className;
-(void)dealloc;
-(id)scriptAttributeKeys;
@end

