/*
* Generated on Thursday, January 14, 2021 at 2:25:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSArray *)friends;
-(id)attributeKeys;
-(id)_className;
-(void)dealloc;
-(id)scriptAttributeKeys;
-(id)initWithLikeStatusDictionary:(id)arg1 ;
-(unsigned long long)friendLikeCount;
-(unsigned long long)globalLikeCount;
-(id)isLikedByMe;
@end

