/*
* Generated on Thursday, January 14, 2021 at 2:25:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
*/

#import <iTunesStoreUI/SUScriptMediaItemCollection.h>

@class MPMediaPlaylist;

@interface SUScriptMediaPlaylist : SUScriptMediaItemCollection

@property (nonatomic,readonly) MPMediaPlaylist * nativePlaylist; 
+(void)initialize;
+(id)webScriptNameForSelector:(SEL)arg1 ;
+(unsigned long long)nativePlaylistAttributesForScriptPlaylistAttributes:(id)arg1 ;
+(id)scriptPlaylistAttributesForNativePlaylistAttributes:(unsigned long long)arg1 ;
-(id)valueForProperty:(id)arg1 ;
-(id)_className;
-(MPMediaPlaylist *)nativePlaylist;
@end

