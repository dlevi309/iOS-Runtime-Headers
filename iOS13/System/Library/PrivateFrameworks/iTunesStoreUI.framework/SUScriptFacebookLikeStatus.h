/*
* Generated on Monday, March 1, 2021 at 2:32:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
*/

#import <iTunesStoreUI/SUScriptObject.h>

@class NSDictionary, NSArray;

@interface SUScriptFacebookLikeStatus : SUScriptObject {

	NSDictionary* _dictionary;

}

@property (readonly) unsigned long long friendLikeCount; 
@property (readonly) NSArray * friends; 
@property (readonly) unsigned long long globalLikeCount; 
@property (getter=isLikedByMe,readonly) id likedByMe; 
+(void)initialize;
+(id)webScriptNameForKeyName:(id)arg1 ;
-(void)dealloc;
-(id)_className;
-(id)attributeKeys;
-(unsigned long long)globalLikeCount;
-(unsigned long long)friendLikeCount;
-(id)scriptAttributeKeys;
-(id)initWithLikeStatusDictionary:(id)arg1 ;
-(NSArray *)friends;
-(id)isLikedByMe;
@end

