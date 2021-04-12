/*
* Generated on Monday, March 1, 2021 at 2:31:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
*/

#import <iTunesStoreUI/SUScriptObject.h>

@class NSString;

@interface SUScriptMenuItem : SUScriptObject {

	BOOL _enabled;
	NSString* _title;
	id _userInfo;

}

@property (assign) BOOL enabled; 
@property (retain) NSString * title; 
@property (retain) id userInfo; 
+(void)initialize;
+(id)webScriptNameForKeyName:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(id)userInfo;
-(BOOL)enabled;
-(void)setEnabled:(BOOL)arg1 ;
-(void)setUserInfo:(id)arg1 ;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(id)_className;
-(id)attributeKeys;
-(id)scriptAttributeKeys;
-(void)_sendDidChange;
@end

