/*
* Generated on Monday, March 1, 2021 at 2:30:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)takeRegistrationLists;
-(void)clearRegistrationLists;
-(void)stageRegistrationLists:(id)arg1;
-(long long)numberOfFiles;
-(id)fileUploadURLsAtIndex:(unsigned long long)arg1 fileTypes:(id*)arg2;
-(void)updateSupportedTypeIdentifiers:(id)arg1;
-(NSArray *)allDroppedFileURLs;

@required
-(long long)changeCount;
-(NSArray *)itemProviders;
-(void)setItemProviders:(id)arg1;
-(long long)numberOfItems;
-(id)pasteboardTypes;
-(id)dataForPasteboardType:(id)arg1;
-(id)valuesForPasteboardType:(id)arg1 inItemSet:(id)arg2;
-(id)dataForPasteboardType:(id)arg1 inItemSet:(id)arg2;

@end

