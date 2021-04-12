/*
* Generated on Monday, March 1, 2021 at 2:32:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(id)_className;
-(NSString *)oauthToken;
-(id)attributeKeys;
-(id)scriptAttributeKeys;
-(id)initWithACAccountCredential:(id)arg1 ;
@end

