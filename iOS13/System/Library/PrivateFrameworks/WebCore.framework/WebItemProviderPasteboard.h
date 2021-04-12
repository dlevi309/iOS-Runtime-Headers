/*
* Generated on Monday, March 1, 2021 at 2:30:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
*/

#import <WebCore/WebCore-Structs.h>
#import <libobjc.A.dylib/AbstractPasteboard.h>

@class NSArray, NSString;

@interface WebItemProviderPasteboard : NSObject <AbstractPasteboard> {

	RetainPtr<NSArray>* _itemProviders;
	RetainPtr<NSArray>* _supportedTypeIdentifiers;
	RetainPtr<NSArray<WebItemProviderRegistrationInfoList *> >* _stagedRegistrationInfoLists;
	Vector<WTF::RetainPtr<WebItemProviderLoadResult>, 0, WTF::CrashOnOverflow, 16, WTF::FastMalloc>* _loadResults;
	long long _numberOfItems;
	long long _changeCount;
	long long _pendingOperationCount;

}

@property (assign,nonatomic) long long numberOfItems;                      //@synthesize numberOfItems=_numberOfItems - In the implementation block
@property (assign,nonatomic) long long changeCount;                        //@synthesize changeCount=_changeCount - In the implementation block
@property (assign,nonatomic) long long pendingOperationCount;              //@synthesize pendingOperationCount=_pendingOperationCount - In the implementation block
@property (nonatomic,copy) NSArray * itemProviders; 
@property (nonatomic,readonly) NSArray * allDroppedFileURLs; 
@property (nonatomic,readonly) BOOL hasPendingOperation; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) long long numberOfFiles; 
+(id)sharedInstance;
-(id)init;
-(long long)changeCount;
-(NSArray *)itemProviders;
-(void)setItemProviders:(NSArray *)arg1 ;
-(long long)numberOfItems;
-(void)setChangeCount:(long long)arg1 ;
-(id)pasteboardTypes;
-(id)dataForPasteboardType:(id)arg1 ;
-(id)valuesForPasteboardType:(id)arg1 inItemSet:(id)arg2 ;
-(id)dataForPasteboardType:(id)arg1 inItemSet:(id)arg2 ;
-(id)takeRegistrationLists;
-(BOOL)hasPendingOperation;
-(void)decrementPendingOperationCount;
-(void)incrementPendingOperationCount;
-(void)doAfterLoadingProvidedContentIntoFileURLs:(/*^block*/id)arg1 synchronousTimeout:(double)arg2 ;
-(void)doAfterLoadingProvidedContentIntoFileURLs:(/*^block*/id)arg1 ;
-(void)clearRegistrationLists;
-(void)stageRegistrationLists:(id)arg1 ;
-(long long)numberOfFiles;
-(id)fileUploadURLsAtIndex:(unsigned long long)arg1 fileTypes:(id*)arg2 ;
-(void)updateSupportedTypeIdentifiers:(id)arg1 ;
-(id)typeIdentifiersToLoad:(id)arg1 ;
-(NSArray *)allDroppedFileURLs;
-(id)_preLoadedDataConformingToType:(id)arg1 forItemProviderAtIndex:(unsigned long long)arg2 ;
-(id)itemProviderAtIndex:(unsigned long long)arg1 ;
-(void)enumerateItemProvidersWithBlock:(/*^block*/id)arg1 ;
-(void)setNumberOfItems:(long long)arg1 ;
-(long long)pendingOperationCount;
-(void)setPendingOperationCount:(long long)arg1 ;
@end

