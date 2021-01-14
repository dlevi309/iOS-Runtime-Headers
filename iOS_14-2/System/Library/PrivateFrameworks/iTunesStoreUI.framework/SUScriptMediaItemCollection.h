/*
* Generated on Thursday, January 14, 2021 at 2:25:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
*/

#import <iTunesStoreUI/SUScriptObject.h>

@class NSArray, SUScriptMediaItem, MPMediaItemCollection;

@interface SUScriptMediaItemCollection : SUScriptObject {

	NSArray* _items;
	SUScriptMediaItem* _representativeItem;
	BOOL _watchingLibrary;

}

@property (nonatomic,readonly) MPMediaItemCollection * nativeCollection; 
@property (readonly) long long count; 
@property (readonly) NSArray * items; 
@property (readonly) NSArray * mediaTypes; 
@property (readonly) SUScriptMediaItem * representativeItem; 
+(void)initialize;
+(id)webScriptNameForKeyName:(id)arg1 ;
-(id)initWithItems:(id)arg1 ;
-(long long)count;
-(id)attributeKeys;
-(NSArray *)items;
-(SUScriptMediaItem *)representativeItem;
-(NSArray *)mediaTypes;
-(id)_className;
-(void)dealloc;
-(id)scriptAttributeKeys;
-(void)_libraryChangedNotification:(id)arg1 ;
-(void)_beginWatchingLibraryIfNecessary;
-(MPMediaItemCollection *)nativeCollection;
@end

