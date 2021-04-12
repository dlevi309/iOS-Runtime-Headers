/*
* Generated on Monday, March 1, 2021 at 2:32:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
*/

#import <iTunesStoreUI/SUScriptObject.h>

@class SUMediaPlayerItem, NSString, NSNumber;

@interface SUScriptMediaPlayerItem : SUScriptObject {

	SUMediaPlayerItem* _mediaItem;

}

@property (copy) NSString * backgroundImageURL; 
@property (copy) NSString * bookmarkIdentifier; 
@property (copy) NSString * initialOrientation; 
@property (retain) NSNumber * itemIdentifier; 
@property (copy) NSString * itemType; 
@property (retain) NSNumber * playableDuration; 
@property (copy) NSString * subtitle; 
@property (copy) NSString * title; 
@property (copy) NSString * URL; 
+(id)webScriptNameForKey:(const char*)arg1 ;
-(void)dealloc;
-(id)initWithDictionary:(id)arg1 ;
-(NSNumber *)itemIdentifier;
-(void)setItemIdentifier:(NSNumber *)arg1 ;
-(void)setURL:(NSString *)arg1 ;
-(NSString *)URL;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(id)_className;
-(NSString *)subtitle;
-(void)setSubtitle:(NSString *)arg1 ;
-(id)attributeKeys;
-(NSString *)itemType;
-(void)setItemType:(NSString *)arg1 ;
-(NSNumber *)playableDuration;
-(id)scriptAttributeKeys;
-(void)setBackgroundImageURL:(NSString *)arg1 ;
-(NSString *)backgroundImageURL;
-(NSString *)bookmarkIdentifier;
-(void)setBookmarkIdentifier:(NSString *)arg1 ;
-(NSString *)initialOrientation;
-(void)setInitialOrientation:(NSString *)arg1 ;
-(void)setPlayableDuration:(NSNumber *)arg1 ;
-(id)copyNativeMediaPlayerItem;
@end

