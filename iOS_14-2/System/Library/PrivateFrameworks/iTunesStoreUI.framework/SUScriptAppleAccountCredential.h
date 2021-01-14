/*
* Generated on Thursday, January 14, 2021 at 2:25:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
*/

#import <iTunesStoreUI/SUScriptObject.h>

@class ACAccountCredential, NSString;

@interface SUScriptAppleAccountCredential : SUScriptObject {

	ACAccountCredential* _credential;

}

@property (readonly) NSString * oauthToken; 
+(void)initialize;
+(id)webScriptNameForKeyName:(id)arg1 ;
-(id)attributeKeys;
-(NSString *)oauthToken;
-(id)_className;
-(void)dealloc;
-(id)scriptAttributeKeys;
-(id)initWithACAccountCredential:(id)arg1 ;
@end

