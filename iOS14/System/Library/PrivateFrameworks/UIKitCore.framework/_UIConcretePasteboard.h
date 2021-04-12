/*
* Generated on Thursday, January 14, 2021 at 2:20:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIPasteboard.h>

@class NSString;

@interface _UIConcretePasteboard : UIPasteboard {

	NSString* _name;

}

@property (nonatomic,copy) NSString * name;              //@synthesize name=_name - In the implementation block
+(void)_detectValuesForPatterns:(id)arg1 atIndex:(unsigned long long)arg2 itemCollection:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
+(id)generalPasteboard;
+(id)pasteboardWithUniqueName;
+(void)_detectPatternsForPatterns:(id)arg1 atIndex:(unsigned long long)arg2 itemCollection:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
+(id)_pasteboardWithName:(id)arg1 create:(BOOL)arg2 ;
+(id)pasteboardWithName:(id)arg1 create:(BOOL)arg2 ;
+(void)_clearPinnedItemProvidersForPasteboardNamed:(id)arg1 ;
+(void)removePasteboardWithName:(id)arg1 ;
+(id)_pasteboardWithUniqueName;
+(void)_pinItemProviders:(id)arg1 forPasteboardNamed:(id)arg2 withExpirationDate:(id)arg3 ;
+(id)_pasteboardNamed:(id)arg1 createIfNotFound:(BOOL)arg2 ;
+(void)_asynchronouslyEnumerateItemSet:(id)arg1 itemsCompletionHandler:(/*^block*/id)arg2 usingItemBlock:(/*^block*/id)arg3 ;
-(long long)changeCount;
-(id)colors;
-(void)setColors:(id)arg1 ;
-(void)setObjects:(id)arg1 ;
-(BOOL)isPersistent;
-(id)strings;
-(BOOL)_pasteboardCacheQueue_saveItemCollection:(id)arg1 currentNotificationState:(unsigned long long)arg2 outNewNotificationState:(unsigned long long*)arg3 ;
-(BOOL)_pasteboardCacheQueue_setPersistent:(BOOL)arg1 currentNotificationState:(unsigned long long)arg2 outNewNotificationState:(unsigned long long*)arg3 ;
-(void)setImage:(id)arg1 ;
-(void)setItems:(id)arg1 ;
-(long long)numberOfItems;
-(BOOL)hasURLs;
-(BOOL)hasStrings;
-(id)color;
-(void)setImages:(id)arg1 ;
-(void)setURL:(id)arg1 ;
-(void)addItems:(id)arg1 ;
-(BOOL)hasImages;
-(BOOL)hasColors;
-(id)availableTypes;
-(id)image;
-(id)pasteboardTypes;
-(id)items;
-(id)dataForPasteboardType:(id)arg1 ;
-(id)valueForPasteboardType:(id)arg1 ;
-(BOOL)containsPasteboardTypes:(id)arg1 ;
-(long long)_changeCountIgnoringPinningActivity;
-(void)setValue:(id)arg1 forPasteboardType:(id)arg2 ;
-(void)setData:(id)arg1 forPasteboardType:(id)arg2 ;
-(id)pasteboardTypesForItemSet:(id)arg1 ;
-(BOOL)containsPasteboardTypes:(id)arg1 inItemSet:(id)arg2 ;
-(id)itemSetWithPasteboardTypes:(id)arg1 ;
-(id)valuesForPasteboardType:(id)arg1 inItemSet:(id)arg2 ;
-(void)setItems:(id)arg1 options:(id)arg2 ;
-(id)dataForPasteboardType:(id)arg1 inItemSet:(id)arg2 ;
-(void)setItemProviders:(id)arg1 options:(id)arg2 ;
-(void)setItemProviders:(id)arg1 localOnly:(BOOL)arg2 expirationDate:(id)arg3 ;
-(void)setObjects:(id)arg1 options:(id)arg2 ;
-(void)setObjects:(id)arg1 localOnly:(BOOL)arg2 expirationDate:(id)arg3 ;
-(BOOL)canInstantiateObjectsOfClass:(Class)arg1 ;
-(id)itemProvidersForInstantiatingObjectsOfClass:(Class)arg1 ;
-(id)_detectedPasteboardTypesForTypes:(id)arg1 ;
-(id)_detectedPasteboardTypeStringsForTypes:(id)arg1 ;
-(id)_itemsCoercibleToClass:(Class)arg1 ;
-(NSString *)name;
-(void)detectPatternsForPatterns:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_setPersistent:(BOOL)arg1 ;
-(void)detectPatternsForPatterns:(id)arg1 inItemSet:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)detectValuesForPatterns:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)detectValuesForPatterns:(id)arg1 inItemSet:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(BOOL)_pasteboardCacheQueue_isPersistent;
-(id)itemProvidersWithRetryBehavior:(BOOL)arg1 ;
-(void)_setItemsAndSave:(id)arg1 options:(id)arg2 coerceStringsToURLs:(BOOL)arg3 ;
-(void)_pinItemCollection:(id)arg1 ;
-(void)_setItemsAndSave:(id)arg1 options:(id)arg2 ;
-(void)_saveItemCollection:(id)arg1 ;
-(void)_sendPasteboardTypesChangedNotificationOldTypes:(id)arg1 newTypes:(id)arg2 ;
-(void)_setItemsAndSaveFromObjects:(id)arg1 ofClass:(Class)arg2 ;
-(void)setColor:(id)arg1 ;
-(id)URLs;
-(id)URL;
-(void)setStrings:(id)arg1 ;
-(id)itemProviders;
-(id)string;
-(id)images;
-(void)setName:(NSString *)arg1 ;
-(void)setItemProviders:(id)arg1 ;
-(id)_initWithName:(id)arg1 ;
-(void)setString:(id)arg1 ;
-(void)setPersistent:(BOOL)arg1 ;
-(void)_clearPinnedItemProviders;
-(void)setURLs:(id)arg1 ;
-(void)_pinItemProviders:(id)arg1 expirationDate:(id)arg2 ;
@end

