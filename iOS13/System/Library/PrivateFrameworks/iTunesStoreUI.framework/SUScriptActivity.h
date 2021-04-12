/*
* Generated on Monday, March 1, 2021 at 2:32:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
*/

#import <iTunesStoreUI/SUScriptObject.h>

@class SUScriptFunction, SUActivity, WebScriptObject, NSString;

@interface SUScriptActivity : SUScriptObject {

	SUScriptFunction* _actionFunction;

}

@property (nonatomic,readonly) SUActivity * nativeActivity; 
@property (retain) WebScriptObject * actionFunction; 
@property (copy) NSString * activityTitle; 
@property (copy) NSString * activityType; 
@property (readonly) NSString * activityImageNameGiftAppStore; 
@property (readonly) NSString * activityImageNameGiftMusicStore; 
@property (readonly) NSString * activityImageNamePingAppStore; 
@property (readonly) NSString * activityImageNamePingMusicStore; 
@property (readonly) NSString * activityImageNameWishlistAppStore; 
@property (readonly) NSString * activityImageNameWishlistMusicStore; 
+(void)initialize;
+(id)webScriptNameForSelector:(SEL)arg1 ;
+(id)webScriptNameForKeyName:(id)arg1 ;
-(void)dealloc;
-(NSString *)activityType;
-(id)_className;
-(void)setActivityType:(NSString *)arg1 ;
-(id)attributeKeys;
-(NSString *)activityTitle;
-(void)setActivityTitle:(NSString *)arg1 ;
-(id)scriptAttributeKeys;
-(SUActivity *)nativeActivity;
-(id)_nativeActivity;
-(void)setActivityImageWithName:(id)arg1 ;
-(void)setActivityImageWithURL:(id)arg1 scale:(id)arg2 ;
-(WebScriptObject *)actionFunction;
-(void)setActionFunction:(WebScriptObject *)arg1 ;
-(NSString *)activityImageNameGiftAppStore;
-(NSString *)activityImageNameGiftMusicStore;
-(NSString *)activityImageNamePingAppStore;
-(NSString *)activityImageNamePingMusicStore;
-(NSString *)activityImageNameWishlistAppStore;
-(NSString *)activityImageNameWishlistMusicStore;
-(void)_performActionFunctionWithItems:(id)arg1 ;
@end

