/*
* Generated on Thursday, January 14, 2021 at 2:25:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(BOOL)enabled;
-(void)setUserInfo:(id)arg1 ;
-(id)userInfo;
-(id)init;
-(void)setEnabled:(BOOL)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(id)attributeKeys;
-(id)_className;
-(NSString *)title;
-(void)dealloc;
-(id)scriptAttributeKeys;
-(void)_sendDidChange;
@end

