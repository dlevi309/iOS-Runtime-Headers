/*
* Generated on Thursday, January 14, 2021 at 2:21:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
*/

@class NSArray;


@protocol AbstractPasteboard <NSObject>
@property (nonatomic,readonly) long long numberOfItems; 
@property (nonatomic,copy) NSArray * itemProviders; 
@property (nonatomic,readonly) long long numberOfFiles; 
@property (nonatomic,readonly) NSArray * allDroppedFileURLs; 
@optional
-(void)setItems:(id)arg1;
-(long long)numberOfFiles;
-(id)fileUploadURLsAtIndex:(unsigned long long)arg1 fileTypes:(id*)arg2;
-(void)updateSupportedTypeIdentifiers:(id)arg1;
-(void)clearRegistrationLists;
-(void)stageRegistrationLists:(id)arg1;
-(NSArray *)allDroppedFileURLs;
-(id)takeRegistrationLists;

@required
-(long long)changeCount;
-(long long)numberOfItems;
-(id)pasteboardTypes;
-(id)dataForPasteboardType:(id)arg1;
-(id)valuesForPasteboardType:(id)arg1 inItemSet:(id)arg2;
-(id)dataForPasteboardType:(id)arg1 inItemSet:(id)arg2;
-(NSArray *)itemProviders;
-(void)setItemProviders:(id)arg1;

@end

