/*
* Generated on Thursday, January 14, 2021 at 2:28:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iWorkXPC.framework/XPCServices/iWorkFileFormat.xpc/Frameworks/TSPersistence.framework/TSPersistence
*/

#import <TSPersistence/TSPPasteboard.h>

@class NSArray, NSMutableDictionary;

@interface TSPPasteboardUIPasteboard : TSPPasteboard {

	NSArray* _cachedPasteboardTypes;
	NSMutableDictionary* _pasteboardItemIndexCache;
	unsigned long long _pasteboardItemCount;
	long long _cachedChangeCount;

}
-(id)strings;
-(long long)numberOfItems;
-(id)pasteboardTypes;
-(id)dataForPasteboardType:(id)arg1 ;
-(id)valueForPasteboardType:(id)arg1 ;
-(id)pasteboardTypesForItemSet:(id)arg1 ;
-(id)valuesForPasteboardType:(id)arg1 inItemSet:(id)arg2 ;
-(id)dataForPasteboardType:(id)arg1 inItemSet:(id)arg2 ;
-(long long)clearContents;
-(id)URLs;
-(id)string;
-(oneway void)invalidate;
-(void)setString:(id)arg1 ;
-(id)initWithGeneralPasteboard;
-(id)initWithPasteboardName:(id)arg1 create:(BOOL)arg2 ;
-(id)initWithUniquePasteboardName;
-(id)initWithNativePasteboard:(id)arg1 ;
-(void)addItems:(id)arg1 isSmartCopy:(BOOL)arg2 ;
-(id)richTextStrings;
-(BOOL)canLoadItemsOfClass:(Class)arg1 ;
-(id)stringForPasteboardType:(id)arg1 ;
-(void)addData:(id)arg1 forPasteboardType:(id)arg2 ;
-(id)stringsForPasteboardType:(id)arg1 inItemSet:(id)arg2 ;
-(unsigned long long)pasteboardItemMaxSize;
-(void)addPasteboardItem:(id)arg1 ;
-(void)addPasteboardItem:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(void)addPasteboardItemIndex:(unsigned long long)arg1 forType:(id)arg2 ;
-(void)invalidatePasteboardCache;
-(void)invalidatePasteboardCacheIfNeeded;
-(void)updateCachedChangeCount;
-(void)addPasteboardItemForObject:(id)arg1 type:(id)arg2 ;
-(id)propertyListForValue:(id)arg1 ;
-(void)reloadPasteboardItemIndexCacheIfNeeded;
@end

