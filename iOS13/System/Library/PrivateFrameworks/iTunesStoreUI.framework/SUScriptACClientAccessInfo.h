/*
* Generated on Monday, March 1, 2021 at 2:32:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
*/

#import <iTunesStoreUI/SUScriptObject.h>

@class SUScriptAppleAccountType, NSMutableDictionary, NSDictionary, NSString;

@interface SUScriptACClientAccessInfo : SUScriptObject {

	SUScriptAppleAccountType* _accountType;
	NSMutableDictionary* _dictionary;

}

@property (readonly) NSDictionary * accessInfoDictionary; 
@property (retain) SUScriptAppleAccountType * accountType; 
@property (readonly) NSString * accessKeyFacebookAppID; 
@property (readonly) NSString * accessKeyFacebookPermissions; 
@property (readonly) NSString * accessKeyPurposeStatement; 
+(void)initialize;
+(id)webScriptNameForSelector:(SEL)arg1 ;
+(id)webScriptNameForKeyName:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(id)_className;
-(SUScriptAppleAccountType *)accountType;
-(void)setAccountType:(SUScriptAppleAccountType *)arg1 ;
-(id)attributeKeys;
-(id)scriptAttributeKeys;
-(NSDictionary *)accessInfoDictionary;
-(id)valueForAccessKey:(id)arg1 ;
-(void)setValue:(id)arg1 forAccessKey:(id)arg2 ;
-(NSString *)accessKeyFacebookAppID;
-(NSString *)accessKeyFacebookPermissions;
-(NSString *)accessKeyPurposeStatement;
@end

