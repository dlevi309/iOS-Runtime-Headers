/*
* Generated on Thursday, January 14, 2021 at 2:27:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
*/

#import <UIKit/UIDocumentPickerDelegate.h>
#import <UIKit/UIAdaptivePresentationControllerDelegate.h>
#import <libobjc.A.dylib/WFFileStorageService.h>

@protocol OS_dispatch_queue;
@class NSMapTable, NSObject, NSProgress, NSString, WFContentAttributionSet;

@interface WFiCloudStorageService : NSObject <UIDocumentPickerDelegate, UIAdaptivePresentationControllerDelegate, WFFileStorageService> {

	NSMapTable* _documentPickerCompletionTable;
	NSObject*<OS_dispatch_queue> _documentPickerDownloadQueue;
	NSProgress* _progress;

}

@property (nonatomic,readonly) NSMapTable * documentPickerCompletionTable;                            //@synthesize documentPickerCompletionTable=_documentPickerCompletionTable - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> documentPickerDownloadQueue;              //@synthesize documentPickerDownloadQueue=_documentPickerDownloadQueue - In the implementation block
@property (assign,nonatomic,__weak) NSProgress * progress;                                            //@synthesize progress=_progress - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) Class objectRepresentationClass; 
@property (nonatomic,readonly) Class accessResourceClass; 
@property (nonatomic,readonly) NSString * storageLocationPrefix; 
@property (nonatomic,readonly) BOOL hasPublicURLs; 
@property (nonatomic,readonly) BOOL supportsJumpingToSubdirectoryInUI; 
@property (nonatomic,readonly) NSString * associatedAppBundleIdentifier; 
@property (nonatomic,readonly) WFContentAttributionSet * contentAttributionSet; 
+(id)containerIdentifier;
+(id)serviceName;
+(id)containerName;
+(Class)resultItemClass;
+(void)createDocumentsDirectoryIfNecessary;
+(id)documentsDirectoryWithError:(id*)arg1 ;
-(NSProgress *)progress;
-(void)setProgress:(NSProgress *)arg1 ;
-(void)presentationControllerDidDismiss:(id)arg1 ;
-(void)documentPickerWasCancelled:(id)arg1 ;
-(void)documentPicker:(id)arg1 didPickDocumentsAtURLs:(id)arg2 ;
-(NSString *)associatedAppBundleIdentifier;
-(void)retrieveFilesWithUserInterface:(id)arg1 initialDirectoryPath:(id)arg2 consumingBundleID:(id)arg3 options:(unsigned long long)arg4 progress:(id)arg5 completionHandler:(/*^block*/id)arg6 ;
-(id)saveFiles:(id)arg1 withManagedLevel:(unsigned long long)arg2 userInterface:(id)arg3 consumingBundleID:(id)arg4 options:(unsigned long long)arg5 progress:(id)arg6 completionHandler:(/*^block*/id)arg7 ;
-(void)retrieveFilesAtPath:(id)arg1 options:(unsigned long long)arg2 progress:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(id)saveFiles:(id)arg1 withManagedLevel:(unsigned long long)arg2 toPath:(id)arg3 options:(unsigned long long)arg4 progress:(id)arg5 completionHandler:(/*^block*/id)arg6 ;
-(void)getSharingURLsForFiles:(id)arg1 usePublicURLs:(BOOL)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)deleteFiles:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)createFolderAtPath:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)appendText:(id)arg1 toPath:(id)arg2 options:(unsigned long long)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)searchFiles:(id)arg1 inPath:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(Class)objectRepresentationClass;
-(Class)accessResourceClass;
-(NSString *)storageLocationPrefix;
-(BOOL)hasPublicURLs;
-(BOOL)supportsJumpingToSubdirectoryInUI;
-(WFContentAttributionSet *)contentAttributionSet;
-(id)saveFiles:(id)arg1 toPath:(id)arg2 options:(unsigned long long)arg3 progress:(id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)retrieveFilesForAppendingAtPath:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(/*^block*/id)completionHandlerForDocumentPicker:(id)arg1 ;
-(void)setCompletionHandler:(/*^block*/id)arg1 forDocumentPicker:(id)arg2 ;
-(void)presentDocumentPicker:(id)arg1 withUserInterface:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)completeOperationForDocumentPicker:(id)arg1 withFileURLs:(id)arg2 error:(id)arg3 ;
-(NSMapTable *)documentPickerCompletionTable;
-(NSObject*<OS_dispatch_queue>)documentPickerDownloadQueue;
-(id)supportedPickerContentTypes;
@end
