/*
* Generated on Monday, March 1, 2021 at 2:34:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
*/

#import <libobjc.A.dylib/WFFileStorageService.h>

@class NSString, WFContentSource;

@interface WFDropboxStorageService : NSObject <WFFileStorageService>

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
@property (nonatomic,readonly) WFContentSource * contentSource; 
+(id)serviceName;
+(Class)resultItemClass;
-(NSString *)associatedAppBundleIdentifier;
-(WFContentSource *)contentSource;
-(void)retrieveFilesAtPath:(id)arg1 options:(unsigned long long)arg2 progress:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(id)saveFiles:(id)arg1 toPath:(id)arg2 options:(unsigned long long)arg3 progress:(id)arg4 completionHandler:(/*^block*/id)arg5 ;
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
-(void)finishRetrievalWithContentsOfFolderAtPath:(id)arg1 sessionManager:(id)arg2 retrievalHandler:(/*^block*/id)arg3 ;
@end

