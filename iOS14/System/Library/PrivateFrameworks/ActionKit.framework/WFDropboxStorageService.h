/*
* Generated on Thursday, January 14, 2021 at 2:27:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
*/

#import <libobjc.A.dylib/WFFileStorageService.h>

@class NSString, WFContentAttributionSet;

@interface WFDropboxStorageService : NSObject <WFFileStorageService>

@property (nonatomic,readonly) Class objectRepresentationClass; 
@property (nonatomic,readonly) Class accessResourceClass; 
@property (nonatomic,readonly) NSString * storageLocationPrefix; 
@property (nonatomic,readonly) BOOL hasPublicURLs; 
@property (nonatomic,readonly) BOOL supportsJumpingToSubdirectoryInUI; 
@property (nonatomic,readonly) NSString * associatedAppBundleIdentifier; 
@property (nonatomic,readonly) WFContentAttributionSet * contentAttributionSet; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)serviceName;
+(Class)resultItemClass;
-(NSString *)associatedAppBundleIdentifier;
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
@end

