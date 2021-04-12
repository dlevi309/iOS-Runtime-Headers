/*
* Generated on Thursday, January 14, 2021 at 2:25:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
*/

#import <iTunesStoreUI/SUScriptObject.h>

@class MPMediaItem;

@interface SUScriptMediaItem : SUScriptObject

@property (nonatomic,readonly) MPMediaItem * nativeItem; 
+(void)initialize;
+(id)webScriptNameForSelector:(SEL)arg1 ;
+(id)scriptMediaTypeForNativeMediaType:(unsigned long long)arg1 ;
+(id)copyScriptMediaTypesForNativeMediaTypes:(unsigned long long)arg1 ;
+(unsigned long long)nativeMediaTypesForScriptMediaTypes:(id)arg1 ;
-(id)valueForProperty:(id)arg1 ;
-(id)_className;
-(id)imageURLWithWidth:(id)arg1 height:(id)arg2 ;
-(MPMediaItem *)nativeItem;
@end

