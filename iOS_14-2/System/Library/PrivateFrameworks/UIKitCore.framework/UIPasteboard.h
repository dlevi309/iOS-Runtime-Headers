/*
* Generated on Thursday, January 14, 2021 at 2:20:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@class NSArray, NSString, NSURL, UIImage, UIColor;

@interface UIPasteboard : NSObject

@property (nonatomic,copy,readonly) NSArray * availableTypes; 
@property (nonatomic,readonly) long long _changeCountIgnoringPinningActivity; 
@property (nonatomic,readonly) NSString * name; 
@property (getter=isPersistent,nonatomic,readonly) BOOL persistent; 
@property (nonatomic,readonly) long long changeCount; 
@property (nonatomic,copy) NSArray * itemProviders; 
@property (nonatomic,readonly) NSArray * pasteboardTypes; 
@property (nonatomic,readonly) long long numberOfItems; 
@property (nonatomic,copy) NSArray * items; 
@property (nonatomic,copy) NSString * string; 
@property (nonatomic,copy) NSArray * strings; 
@property (nonatomic,copy) NSURL * URL; 
@property (nonatomic,copy) NSArray * URLs; 
@property (nonatomic,copy) UIImage * image; 
@property (nonatomic,copy) NSArray * images; 
@property (nonatomic,copy) UIColor * color; 
@property (nonatomic,copy) NSArray * colors; 
@property (nonatomic,readonly) BOOL hasStrings; 
@property (nonatomic,readonly) BOOL hasURLs; 
@property (nonatomic,readonly) BOOL hasImages; 
@property (nonatomic,readonly) BOOL hasColors; 
+(id)generalPasteboard;
+(id)pasteboardWithUniqueName;
+(id)_pasteboardWithName:(id)arg1 create:(BOOL)arg2 ;
+(id)pasteboardWithName:(id)arg1 create:(BOOL)arg2 ;
+(void)_clearPinnedItemProvidersForPasteboardNamed:(id)arg1 ;
+(void)removePasteboardWithName:(id)arg1 ;
+(id)_pasteboardWithUniqueName;
+(void)_pinItemProviders:(id)arg1 forPasteboardNamed:(id)arg2 withExpirationDate:(id)arg3 ;
-(long long)changeCount;
-(NSArray *)colors;
-(void)setColors:(NSArray *)arg1 ;
-(void)setObjects:(id)arg1 ;
-(BOOL)isPersistent;
-(NSArray *)strings;
-(void)setImage:(UIImage *)arg1 ;
-(void)setItems:(NSArray *)arg1 ;
-(long long)numberOfItems;
-(BOOL)hasURLs;
-(BOOL)hasStrings;
-(UIColor *)color;
-(void)setImages:(NSArray *)arg1 ;
-(void)setURL:(NSURL *)arg1 ;
-(void)addItems:(id)arg1 ;
-(BOOL)hasImages;
-(BOOL)hasColors;
-(BOOL)_hasStrings;
-(NSArray *)availableTypes;
-(UIImage *)image;
-(NSArray *)pasteboardTypes;
-(NSArray *)items;
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
-(NSString *)name;
-(void)detectPatternsForPatterns:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)detectPatternsForPatterns:(id)arg1 inItemSet:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)detectValuesForPatterns:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)detectValuesForPatterns:(id)arg1 inItemSet:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)setColor:(UIColor *)arg1 ;
-(NSArray *)URLs;
-(NSURL *)URL;
-(void)setStrings:(NSArray *)arg1 ;
-(NSArray *)itemProviders;
-(NSString *)string;
-(NSArray *)images;
-(void)setName:(NSString *)arg1 ;
-(void)setItemProviders:(NSArray *)arg1 ;
-(void)setString:(NSString *)arg1 ;
-(void)setPersistent:(BOOL)arg1 ;
-(void)_clearPinnedItemProviders;
-(void)setURLs:(NSArray *)arg1 ;
-(void)_pinItemProviders:(id)arg1 expirationDate:(id)arg2 ;
@end

