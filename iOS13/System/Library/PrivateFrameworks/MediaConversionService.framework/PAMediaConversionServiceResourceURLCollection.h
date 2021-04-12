/*
* Generated on Monday, March 1, 2021 at 2:34:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MediaConversionService.framework/MediaConversionService
*/


@class NSMutableDictionary;

@interface PAMediaConversionServiceResourceURLCollection : NSObject {

	NSMutableDictionary* _urlReferencesByRole;

}

@property (retain) NSMutableDictionary * urlReferencesByRole;              //@synthesize urlReferencesByRole=_urlReferencesByRole - In the implementation block
@property (readonly) unsigned long long urlCount; 
@property (readonly) BOOL allURLsAreReadable; 
+(id)collectionWithMainResourceURL:(id)arg1 ;
+(id)collectionForBookmarkDataDictionaryRepresentation:(id)arg1 error:(id*)arg2 ;
-(id)init;
-(void)setResourceURL:(id)arg1 forRole:(id)arg2 ;
-(id)resourceURLForRole:(id)arg1 ;
-(unsigned long long)urlCount;
-(void)setResourceURL:(id)arg1 forRole:(id)arg2 deleteOnDeallocation:(BOOL)arg3 ;
-(void)setShouldDeleteURLOnDeallocation:(BOOL)arg1 forRole:(id)arg2 ;
-(BOOL)containsAllRoles:(id)arg1 ;
-(BOOL)containsAnyRole:(id)arg1 ;
-(id)typeIdentifierForResourceURLWithRole:(id)arg1 ;
-(id)bookmarkDataDictionaryRepresentationWithError:(id*)arg1 ;
-(BOOL)ensureFilesExistWithError:(id*)arg1 ;
-(BOOL)removeExistingEmptyFilesWithError:(id*)arg1 ;
-(BOOL)allURLsAreReadable;
-(id)logMessageSummary;
-(id)fileSizeSummary;
-(void)enumerateResourceURLs:(/*^block*/id)arg1 ;
-(id)urlForDebugDumpWithDirectoryName:(id)arg1 inExistingParentDirectory:(id)arg2 error:(id*)arg3 ;
-(BOOL)copyURL:(id)arg1 forRole:(id)arg2 toDirectory:(id)arg3 error:(id*)arg4 ;
-(NSMutableDictionary *)urlReferencesByRole;
-(void)setUrlReferencesByRole:(NSMutableDictionary *)arg1 ;
@end

