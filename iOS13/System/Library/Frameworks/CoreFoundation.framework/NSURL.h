/*
* Generated on Monday, March 1, 2021 at 2:30:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
+(id)allocWithZone:(NSZone*)arg1 ;
+(BOOL)automaticallyNotifiesObserversForKey:(id)arg1 ;
+(id)fileURLWithPath:(id)arg1 ;
+(id)fileURLWithPath:(id)arg1 isDirectory:(BOOL)arg2 ;
+(id)fileURLWithFileSystemRepresentation:(const char*)arg1 isDirectory:(BOOL)arg2 relativeToURL:(id)arg3 ;
+(id)objectWithItemProviderData:(id)arg1 typeIdentifier:(id)arg2 error:(id*)arg3 ;
+(id)writableTypeIdentifiersForItemProvider;
+(id)readableTypeIdentifiersForItemProvider;
+(id)URLWithString:(id)arg1 relativeToURL:(id)arg2 ;
+(id)URLWithString:(id)arg1 ;
+(id)URLByResolvingBookmarkData:(id)arg1 options:(unsigned long long)arg2 relativeToURL:(id)arg3 bookmarkDataIsStale:(BOOL*)arg4 error:(id*)arg5 ;
+(id)URLWithDataRepresentation:(id)arg1 relativeToURL:(id)arg2 ;
+(id)absoluteURLWithDataRepresentation:(id)arg1 relativeToURL:(id)arg2 ;
+(id)fileURLWithPath:(id)arg1 isDirectory:(BOOL)arg2 relativeToURL:(id)arg3 ;
+(id)fileURLWithPath:(id)arg1 relativeToURL:(id)arg2 ;
+(id)URLByResolvingAliasFileAtURL:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3 ;
+(id)fileURLWithPathComponents:(id)arg1 ;
+(id)_fileURLWithPath:(id)arg1 cachingResourceValuesForKeys:(id)arg2 error:(id*)arg3 ;
+(id)_URLWithDataAsString:(id)arg1 relativeToURL:(id)arg2 ;
+(id)_web_URLWithString:(id)arg1 relativeToURL:(id)arg2 ;
+(id)_web_URLWithComponents:(SCD_Struct_NS30)arg1 ;
+(id)_URLWithData:(id)arg1 relativeToURL:(id)arg2 ;
+(BOOL)supportsSecureCoding;
+(id)__unurl;
+(id)resourceValuesForKeys:(id)arg1 fromBookmarkData:(id)arg2 ;
+(BOOL)writeBookmarkData:(id)arg1 toURL:(id)arg2 options:(unsigned long long)arg3 error:(id*)arg4 ;
+(id)bookmarkDataWithContentsOfURL:(id)arg1 error:(id*)arg2 ;
-(void)ls_setPreferredLocalizations:(id)arg1 ;
-(NSArray *)ls_preferredLocalizations;
-(BOOL)isiWorkURL;
-(BOOL)conformsToOverridePatternWithKey:(id)arg1 ;
-(id)iWorkApplicationName;
-(id)iWorkDocumentName;
-(id)mapsURL;
-(id)fmfURL;
-(id)fmipURL;
-(id)iTunesStoreURL;
-(id)iCloudEmailPrefsURL;
-(id)photosURL;
-(id)keynoteLiveURL;
-(id)keynoteLiveURL_noFragment;
-(id)iCloudSharingURL;
-(id)iCloudSharingURL_noFragment;
-(id)init;
-(unsigned long long)retainCount;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)isKindOfClass:(Class)arg1 ;
-(BOOL)isMemberOfClass:(Class)arg1 ;
-(id)retain;
-(oneway void)release;
-(unsigned long long)hash;
-(NSString *)description;
-(BOOL)_tryRetain;
-(BOOL)_isDeallocating;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)user;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)_cfTypeID;
-(id)initFileURLWithPath:(id)arg1 ;
-(NSURL *)absoluteURL;
-(NSString *)relativeString;
-(NSURL *)baseURL;
-(NSString *)scheme;
-(NSString *)host;
-(NSNumber *)port;
-(NSString *)password;
-(CFURLRef)_cfurl;
-(NSString *)parameterString;
-(NSString *)query;
-(NSString *)fragment;
-(id)initWithString:(id)arg1 ;
-(const char*)fileSystemRepresentation;
-(NSString *)lastPathComponent;
-(NSURL *)URLByDeletingLastPathComponent;
-(NSString *)absoluteString;
-(NSString *)path;
-(BOOL)isFileURL;
-(id)initFileURLWithPath:(id)arg1 isDirectory:(BOOL)arg2 ;
-(BOOL)getFileSystemRepresentation:(char*)arg1 maxLength:(unsigned long long)arg2 ;
-(NSString *)pathExtension;
-(NSArray *)pathComponents;
-(long long)_promiseExtensionConsume;
-(void)_promiseExtensionRelease:(long long)arg1 ;
-(id)_fixedUpSideFaultError:(id)arg1 ;
-(void)_performWithPhysicalURL:(/*^block*/id)arg1 ;
-(id)_valueFromFaultDictionary:(id)arg1 forKey:(id)arg2 ;
-(BOOL)checkPromisedItemIsReachableAndReturnError:(id*)arg1 ;
-(BOOL)getPromisedItemResourceValue:(out id*)arg1 forKey:(id)arg2 error:(out id*)arg3 ;
-(id)promisedItemResourceValuesForKeys:(id)arg1 error:(id*)arg2 ;
-(NSArray *)writableTypeIdentifiersForItemProvider;
-(id)loadDataWithTypeIdentifier:(id)arg1 forItemProviderCompletionHandler:(/*^block*/id)arg2 ;
-(NSURL *)standardizedURL;
-(void)_freeClients;
-(BOOL)_isAbsolute;
-(id)initWithString:(id)arg1 relativeToURL:(id)arg2 ;
-(id)initWithDataRepresentation:(id)arg1 relativeToURL:(id)arg2 ;
-(id)initAbsoluteURLWithDataRepresentation:(id)arg1 relativeToURL:(id)arg2 ;
-(id)initFileURLWithPath:(id)arg1 isDirectory:(BOOL)arg2 relativeToURL:(id)arg3 ;
-(id)initFileURLWithPath:(id)arg1 relativeToURL:(id)arg2 ;
-(id)initFileURLWithFileSystemRepresentation:(const char*)arg1 isDirectory:(BOOL)arg2 relativeToURL:(id)arg3 ;
-(id)initByResolvingBookmarkData:(id)arg1 options:(unsigned long long)arg2 relativeToURL:(id)arg3 bookmarkDataIsStale:(BOOL*)arg4 error:(id*)arg5 ;
-(id)initByResolvingAliasFileAtURL:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3 ;
-(CFDictionaryRef)_clientsCreatingIfNecessary:(BOOL)arg1 ;
-(NSString *)resourceSpecifier;
-(id)initWithScheme:(id)arg1 host:(id)arg2 path:(id)arg3 ;
-(NSData *)dataRepresentation;
-(NSString *)relativePath;
-(BOOL)hasDirectoryPath;
-(id)URLByAppendingPathComponent:(id)arg1 isDirectory:(BOOL)arg2 ;
-(NSURL *)URLByStandardizingPath;
-(NSURL *)URLByResolvingSymlinksInPath;
-(id)URLByAppendingPathComponent:(id)arg1 ;
-(id)URLByAppendingPathExtension:(id)arg1 ;
-(NSURL *)URLByDeletingPathExtension;
-(id)_initFileURLWithPath:(id)arg1 cachingResourceValuesForKeys:(id)arg2 error:(id*)arg3 ;
-(id)_URLArchive;
-(BOOL)_web_isJavaScriptURL;
-(SCD_Struct_NS30)_web_URLComponents;
-(id)_hostString;
-(id)_web_scriptIfJavaScriptURL;
-(id)_web_suggestedFilenameWithMIMEType:(id)arg1 ;
-(id)_web_URLByRemovingLastPathComponent_nowarn;
-(id)_web_URLByRemovingUserAndPath_nowarn;
-(id)_web_URLByRemovingUserAndQueryAndFragment_nowarn;
-(id)_URLByEscapingSpacesAndControlChars;
-(BOOL)_isSafeFileForBackgroundUpload:(int)arg1 withToken:(SCD_Struct_NS31)arg2 ;
-(BOOL)_isSafeFileForBackgroundUploadForMe;
-(BOOL)_isSafeDirectoryForDownloads:(int)arg1 withToken:(SCD_Struct_NS31)arg2 ;
-(BOOL)isFileReferenceURL;
-(BOOL)getResourceValue:(out id*)arg1 forKey:(id)arg2 error:(out id*)arg3 ;
-(id)resourceValuesForKeys:(id)arg1 error:(id*)arg2 ;
-(BOOL)setResourceValue:(id)arg1 forKey:(id)arg2 error:(id*)arg3 ;
-(BOOL)setResourceValues:(id)arg1 error:(id*)arg2 ;
-(void)removeCachedResourceValueForKey:(id)arg1 ;
-(void)removeAllCachedResourceValues;
-(void)setTemporaryResourceValue:(id)arg1 forKey:(id)arg2 ;
-(BOOL)checkResourceIsReachableAndReturnError:(id*)arg1 ;
-(id)fileReferenceURL;
-(NSURL *)filePathURL;
-(id)bookmarkDataWithOptions:(unsigned long long)arg1 includingResourceValuesForKeys:(id)arg2 relativeToURL:(id)arg3 error:(id*)arg4 ;
-(id)bookmarkDataWithAliasRecord:(id)arg1 ;
-(BOOL)startAccessingSecurityScopedResource;
-(void)stopAccessingSecurityScopedResource;
@end

