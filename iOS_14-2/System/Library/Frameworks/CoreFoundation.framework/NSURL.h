/*
* Generated on Thursday, January 14, 2021 at 2:20:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
*/

#import <CoreFoundation/CoreFoundation-Structs.h>
#import <libobjc.A.dylib/NSItemProviderReading.h>
#import <libobjc.A.dylib/NSItemProviderWriting.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray, NSString, NSData, NSNumber;

@interface NSURL : NSObject <NSItemProviderReading, NSItemProviderWriting, NSSecureCoding, NSCopying> {

	NSString* _urlString;
	NSURL* _baseURL;
	void* _clients;
	void* _reserved;

}

@property (setter=ls_setPreferredLocalizations:,retain) NSArray * ls_preferredLocalizations; 
@property (getter=isiWorkURL,readonly) BOOL iWorkURL; 
@property (copy,readonly) NSArray * pathComponents; 
@property (copy,readonly) NSString * lastPathComponent; 
@property (copy,readonly) NSString * pathExtension; 
@property (copy,readonly) NSURL * URLByDeletingLastPathComponent; 
@property (copy,readonly) NSURL * URLByDeletingPathExtension; 
@property (copy,readonly) NSURL * URLByStandardizingPath; 
@property (copy,readonly) NSURL * URLByResolvingSymlinksInPath; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSArray * writableTypeIdentifiersForItemProvider; 
@property (copy,readonly) NSData * dataRepresentation; 
@property (copy,readonly) NSString * absoluteString; 
@property (copy,readonly) NSString * relativeString; 
@property (copy,readonly) NSURL * baseURL; 
@property (copy,readonly) NSURL * absoluteURL; 
@property (copy,readonly) NSString * scheme; 
@property (copy,readonly) NSString * resourceSpecifier; 
@property (copy,readonly) NSString * host; 
@property (copy,readonly) NSNumber * port; 
@property (copy,readonly) NSString * user; 
@property (copy,readonly) NSString * password; 
@property (copy,readonly) NSString * path; 
@property (copy,readonly) NSString * fragment; 
@property (copy,readonly) NSString * parameterString; 
@property (copy,readonly) NSString * query; 
@property (copy,readonly) NSString * relativePath; 
@property (readonly) BOOL hasDirectoryPath; 
@property (readonly) const char* fileSystemRepresentation; 
@property (getter=isFileURL,readonly) BOOL fileURL; 
@property (copy,readonly) NSURL * standardizedURL; 
@property (copy,readonly) NSURL * filePathURL; 
+(id)fileURLWithFileSystemRepresentation:(const char*)arg1 isDirectory:(BOOL)arg2 relativeToURL:(id)arg3 ;
+(id)URLByResolvingAliasFileAtURL:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3 ;
+(id)URLByResolvingBookmarkData:(id)arg1 options:(unsigned long long)arg2 relativeToURL:(id)arg3 bookmarkDataIsStale:(BOOL*)arg4 error:(id*)arg5 ;
+(id)_fileURLWithPath:(id)arg1 cachingResourceValuesForKeys:(id)arg2 error:(id*)arg3 ;
+(id)objectWithItemProviderData:(id)arg1 typeIdentifier:(id)arg2 error:(id*)arg3 ;
+(id)absoluteURLWithDataRepresentation:(id)arg1 relativeToURL:(id)arg2 ;
+(id)fileURLWithPath:(id)arg1 isDirectory:(BOOL)arg2 ;
+(id)URLWithString:(id)arg1 ;
+(id)URLWithDataRepresentation:(id)arg1 relativeToURL:(id)arg2 ;
+(id)fileURLWithPath:(id)arg1 isDirectory:(BOOL)arg2 relativeToURL:(id)arg3 ;
+(id)fileURLWithPath:(id)arg1 ;
+(id)_URLWithDataAsString:(id)arg1 relativeToURL:(id)arg2 ;
+(id)writableTypeIdentifiersForItemProvider;
+(id)readableTypeIdentifiersForItemProvider;
+(id)_web_URLWithString:(id)arg1 relativeToURL:(id)arg2 ;
+(id)fileURLWithPath:(id)arg1 relativeToURL:(id)arg2 ;
+(id)allocWithZone:(NSZone*)arg1 ;
+(id)URLWithString:(id)arg1 relativeToURL:(id)arg2 ;
+(id)_URLWithData:(id)arg1 relativeToURL:(id)arg2 ;
+(id)fileURLWithPathComponents:(id)arg1 ;
+(id)_web_URLWithComponents:(SCD_Struct_NS25)arg1 ;
+(BOOL)automaticallyNotifiesObserversForKey:(id)arg1 ;
+(id)__unurl;
+(id)resourceValuesForKeys:(id)arg1 fromBookmarkData:(id)arg2 ;
+(BOOL)supportsSecureCoding;
+(id)bookmarkDataWithContentsOfURL:(id)arg1 error:(id*)arg2 ;
+(BOOL)writeBookmarkData:(id)arg1 toURL:(id)arg2 options:(unsigned long long)arg3 error:(id*)arg4 ;
-(id)fmipURL;
-(id)fmfURL;
-(id)photosURL;
-(BOOL)isiWorkURL;
-(BOOL)conformsToOverridePatternWithKey:(id)arg1 ;
-(void)ls_setPreferredLocalizations:(id)arg1 ;
-(id)iTunesStoreURL;
-(id)iWorkDocumentName;
-(id)keynoteLiveURL;
-(id)iCloudSharingURL;
-(NSArray *)ls_preferredLocalizations;
-(id)keynoteLiveURL_noFragment;
-(id)iWorkApplicationName;
-(id)iCloudEmailPrefsURL;
-(id)iCloudSharingURL_noFragment;
-(id)mapsURL;
-(CFURLRef)_cfurl;
-(NSURL *)absoluteURL;
-(NSString *)parameterString;
-(BOOL)isFileURL;
-(NSString *)relativeString;
-(NSString *)query;
-(id)initFileURLWithPath:(id)arg1 ;
-(id)initFileURLWithFileSystemRepresentation:(const char*)arg1 isDirectory:(BOOL)arg2 relativeToURL:(id)arg3 ;
-(id)initFileURLWithPath:(id)arg1 isDirectory:(BOOL)arg2 ;
-(NSNumber *)port;
-(id)initByResolvingBookmarkData:(id)arg1 options:(unsigned long long)arg2 relativeToURL:(id)arg3 bookmarkDataIsStale:(BOOL*)arg4 error:(id*)arg5 ;
-(const char*)fileSystemRepresentation;
-(NSString *)scheme;
-(NSString *)host;
-(id)URLByAppendingPathComponent:(id)arg1 isDirectory:(BOOL)arg2 ;
-(id)initWithString:(id)arg1 ;
-(id)URLByAppendingPathExtension:(id)arg1 ;
-(id)initFileURLWithPath:(id)arg1 isDirectory:(BOOL)arg2 relativeToURL:(id)arg3 ;
-(oneway void)release;
-(NSString *)absoluteString;
-(id)loadDataWithTypeIdentifier:(id)arg1 forItemProviderCompletionHandler:(/*^block*/id)arg2 ;
-(NSData *)dataRepresentation;
-(id)URLByAppendingPathComponent:(id)arg1 ;
-(id)initWithString:(id)arg1 relativeToURL:(id)arg2 ;
-(BOOL)getFileSystemRepresentation:(char*)arg1 maxLength:(unsigned long long)arg2 ;
-(unsigned long long)_cfTypeID;
-(BOOL)hasDirectoryPath;
-(NSURL *)URLByDeletingLastPathComponent;
-(NSURL *)URLByResolvingSymlinksInPath;
-(id)_initFileURLWithPath:(id)arg1 cachingResourceValuesForKeys:(id)arg2 error:(id*)arg3 ;
-(NSURL *)baseURL;
-(id)initAbsoluteURLWithDataRepresentation:(id)arg1 relativeToURL:(id)arg2 ;
-(id)init;
-(id)_web_URLByRemovingUserAndQueryAndFragment_nowarn;
-(BOOL)_tryRetain;
-(id)initWithDataRepresentation:(id)arg1 relativeToURL:(id)arg2 ;
-(BOOL)checkPromisedItemIsReachableAndReturnError:(id*)arg1 ;
-(id)promisedItemResourceValuesForKeys:(id)arg1 error:(id*)arg2 ;
-(id)initByResolvingAliasFileAtURL:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3 ;
-(BOOL)getPromisedItemResourceValue:(out id*)arg1 forKey:(id)arg2 error:(out id*)arg3 ;
-(id)_web_URLByRemovingLastPathComponent_nowarn;
-(id)retain;
-(NSString *)fragment;
-(NSURL *)URLByDeletingPathExtension;
-(NSString *)lastPathComponent;
-(BOOL)_isDeallocating;
-(id)initFileURLWithPath:(id)arg1 relativeToURL:(id)arg2 ;
-(id)_web_URLByRemovingUserAndPath_nowarn;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isKindOfClass:(Class)arg1 ;
-(NSArray *)writableTypeIdentifiersForItemProvider;
-(id)_web_suggestedFilenameWithMIMEType:(id)arg1 ;
-(id)_URLByEscapingSpacesAndControlChars;
-(id)_valueFromFaultDictionary:(id)arg1 forKey:(id)arg2 ;
-(NSString *)path;
-(BOOL)_isAbsolute;
-(id)_hostString;
-(id)_URLArchive;
-(NSString *)password;
-(void)_freeClients;
-(NSString *)relativePath;
-(BOOL)isMemberOfClass:(Class)arg1 ;
-(void)_promiseExtensionRelease:(long long)arg1 ;
-(NSArray *)pathComponents;
-(long long)_promiseExtensionConsume;
-(void)_performWithPhysicalURL:(/*^block*/id)arg1 ;
-(NSString *)description;
-(CFDictionaryRef)_clientsCreatingIfNecessary:(BOOL)arg1 ;
-(NSString *)resourceSpecifier;
-(id)initWithScheme:(id)arg1 host:(id)arg2 path:(id)arg3 ;
-(BOOL)_web_isJavaScriptURL;
-(id)_web_scriptIfJavaScriptURL;
-(id)_fixedUpSideFaultError:(id)arg1 ;
-(unsigned long long)retainCount;
-(NSURL *)URLByStandardizingPath;
-(NSString *)user;
-(SCD_Struct_NS25)_web_URLComponents;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)pathExtension;
-(NSURL *)standardizedURL;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
-(BOOL)_isSafeFileForBackgroundUpload:(int)arg1 withToken:(SCD_Struct_NS27)arg2 ;
-(BOOL)_isSafeDirectoryForDownloads:(int)arg1 withToken:(SCD_Struct_NS27)arg2 ;
-(BOOL)_isSafeFileForBackgroundUploadForMe;
-(id)bookmarkDataWithOptions:(unsigned long long)arg1 includingResourceValuesForKeys:(id)arg2 relativeToURL:(id)arg3 error:(id*)arg4 ;
-(NSURL *)filePathURL;
-(BOOL)isFileReferenceURL;
-(id)resourceValuesForKeys:(id)arg1 error:(id*)arg2 ;
-(id)fileReferenceURL;
-(BOOL)setResourceValues:(id)arg1 error:(id*)arg2 ;
-(void)stopAccessingSecurityScopedResource;
-(void)removeAllCachedResourceValues;
-(BOOL)startAccessingSecurityScopedResource;
-(BOOL)getResourceValue:(out id*)arg1 forKey:(id)arg2 error:(out id*)arg3 ;
-(BOOL)setResourceValue:(id)arg1 forKey:(id)arg2 error:(id*)arg3 ;
-(void)setTemporaryResourceValue:(id)arg1 forKey:(id)arg2 ;
-(void)removeCachedResourceValueForKey:(id)arg1 ;
-(BOOL)checkResourceIsReachableAndReturnError:(id*)arg1 ;
@end

