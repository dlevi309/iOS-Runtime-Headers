/*
* Generated on Monday, March 1, 2021 at 2:32:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
*/

#import <iTunesStoreUI/SUScriptObject.h>

@class SUScriptAppleAccount;

@interface SUScriptFacebookSession : SUScriptObject {

	SUScriptAppleAccount* _account;

}

@property (readonly) id hasAccounts; 
@property (readonly) unsigned long long likeStatusFlagFriendCount; 
@property (readonly) unsigned long long likeStatusFlagFriends; 
@property (readonly) unsigned long long likeStatusFlagGlobalCount; 
@property (readonly) unsigned long long likeStatusFlagMe; 
+(void)initialize;
+(id)webScriptNameForSelector:(SEL)arg1 ;
+(id)webScriptNameForKeyName:(id)arg1 ;
-(void)dealloc;
-(id)_className;
-(id)attributeKeys;
-(id)hasAccounts;
-(id)scriptAttributeKeys;
-(void)fetchLikeStatusForURL:(id)arg1 flags:(id)arg2 completionFunction:(id)arg3 ;
-(void)likeURL:(id)arg1 completionFunction:(id)arg2 ;
-(void)unlikeURL:(id)arg1 completionFunction:(id)arg2 ;
-(id)initWithAppleAccount:(id)arg1 ;
-(unsigned long long)likeStatusFlagFriendCount;
-(unsigned long long)likeStatusFlagFriends;
-(unsigned long long)likeStatusFlagGlobalCount;
-(unsigned long long)likeStatusFlagMe;
@end

