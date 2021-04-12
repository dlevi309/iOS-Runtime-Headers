/*
* Generated on Thursday, January 14, 2021 at 2:25:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSNumber *)itemIdentifier;
-(void)setURL:(NSString *)arg1 ;
-(NSString *)subtitle;
-(void)setTitle:(NSString *)arg1 ;
-(id)attributeKeys;
-(id)initWithDictionary:(id)arg1 ;
-(void)setItemType:(NSString *)arg1 ;
-(void)setItemIdentifier:(NSNumber *)arg1 ;
-(NSNumber *)playableDuration;
-(NSString *)itemType;
-(NSString *)URL;
-(void)setSubtitle:(NSString *)arg1 ;
-(id)_className;
-(NSString *)title;
-(void)dealloc;
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

