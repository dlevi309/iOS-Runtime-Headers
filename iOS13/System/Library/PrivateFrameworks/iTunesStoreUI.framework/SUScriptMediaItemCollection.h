/*
* Generated on Monday, March 1, 2021 at 2:31:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(long long)count;
-(id)_className;
-(NSArray *)items;
-(SUScriptMediaItem *)representativeItem;
-(id)initWithItems:(id)arg1 ;
-(NSArray *)mediaTypes;
-(id)attributeKeys;
-(id)scriptAttributeKeys;
-(void)_libraryChangedNotification:(id)arg1 ;
-(void)_beginWatchingLibraryIfNecessary;
-(MPMediaItemCollection *)nativeCollection;
@end

