/*
* Generated on Thursday, January 14, 2021 at 2:28:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iWorkXPC.framework/XPCServices/iWorkFileFormat.xpc/Frameworks/TSPersistence.framework/TSPersistence
*/

#import <TSPersistence/TSPDecoder.h>

@class UIPasteboard, NSString, NSArray;

@interface TSPPasteboard : NSObject <TSPDecoder> {

	UIPasteboard* _pasteboard;

}

@property (nonatomic,readonly) unsigned long long pasteboardItemMaxSize; 
@property (nonatomic,copy) NSString * string; 
@property (nonatomic,readonly) NSArray * strings; 
@property (nonatomic,readonly) NSArray * richTextStrings; 
@property (nonatomic,readonly) NSArray * URLs; 
@property (nonatomic,readonly) long long numberOfItems; 
@property (nonatomic,readonly) NSString * name; 
@property (nonatomic,readonly) long long changeCount; 
@property (nonatomic,readonly) BOOL isSmartCopy; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)generalPasteboard;
+(id)pasteboardWithUniqueName;
+(id)pasteboardWithName:(id)arg1 create:(BOOL)arg2 ;
+(id)activePasteboardsQueue;
+(id)activePasteboards;
+(Class)pasteboardClass;
+(id)activePasteboardForName:(id)arg1 ;
+(id)pasteboardWithPasteboard:(id)arg1 ;
-(long long)changeCount;
-(NSArray *)strings;
-(long long)numberOfItems;
-(void)addItems:(id)arg1 ;
-(id)pasteboardTypes;
-(id)dataForPasteboardType:(id)arg1 ;
-(id)valueForPasteboardType:(id)arg1 ;
-(BOOL)containsPasteboardTypes:(id)arg1 ;
-(id)pasteboardTypesForItemSet:(id)arg1 ;
-(id)valuesForPasteboardType:(id)arg1 inItemSet:(id)arg2 ;
-(id)dataForPasteboardType:(id)arg1 inItemSet:(id)arg2 ;
-(NSString *)name;
-(NSString *)description;
-(long long)clearContents;
-(NSArray *)URLs;
-(NSString *)string;
-(oneway void)invalidate;
-(void)setString:(NSString *)arg1 ;
-(id)newReadChannelForMetadata;
-(id)newReadChannelForRootObjectComponent;
-(id)newReadChannelForDataWithIdentifier:(long long)arg1 info:(id)arg2 ;
-(id)initWithGeneralPasteboard;
-(id)initWithPasteboardName:(id)arg1 create:(BOOL)arg2 ;
-(id)initWithUniquePasteboardName;
-(id)initWithNativePasteboard:(id)arg1 ;
-(void)addItems:(id)arg1 isSmartCopy:(BOOL)arg2 ;
-(id)importableRichTextTypes;
-(BOOL)containsAnyPasteboardTypeInArray:(id)arg1 ;
-(NSArray *)richTextStrings;
-(BOOL)canLoadItemsOfClass:(Class)arg1 ;
-(id)stringForPasteboardType:(id)arg1 ;
-(void)addData:(id)arg1 forPasteboardType:(id)arg2 ;
-(id)stringsForPasteboardType:(id)arg1 inItemSet:(id)arg2 ;
-(id)importableImageTypes;
-(BOOL)containsNativePasteboardTypes;
-(BOOL)containsImportableRichTextTypes;
-(BOOL)containsImportableTextTypes;
-(BOOL)isSmartCopy;
-(unsigned long long)pasteboardItemMaxSize;
@end

