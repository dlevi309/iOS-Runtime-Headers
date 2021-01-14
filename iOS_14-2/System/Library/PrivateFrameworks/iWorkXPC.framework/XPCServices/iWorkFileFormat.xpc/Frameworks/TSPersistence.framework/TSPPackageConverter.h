/*
* Generated on Thursday, January 14, 2021 at 2:28:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iWorkXPC.framework/XPCServices/iWorkFileFormat.xpc/Frameworks/TSPersistence.framework/TSPersistence
*/


@protocol TSPFileCoordinatorDelegate;
@class TSUExtendedAttributeCollection, TSPPackage, NSURL;

@interface TSPPackageConverter : NSObject {

	id<TSPFileCoordinatorDelegate> _fileCoordinatorDelegate;
	TSUExtendedAttributeCollection* _extendedAttributeCollection;
	BOOL _isCancelled;
	TSPPackage* _package;
	NSURL* _URL;

}

@property (nonatomic,readonly) TSPPackage * package;                  //@synthesize package=_package - In the implementation block
@property (nonatomic,readonly) NSURL * URL;                           //@synthesize URL=_URL - In the implementation block
@property (nonatomic,readonly) BOOL isCancelled;                      //@synthesize isCancelled=_isCancelled - In the implementation block
@property (nonatomic,readonly) long long packageType; 
@property (nonatomic,readonly) BOOL isValid; 
@property (nonatomic,readonly) BOOL isPasswordProtected; 
+(id)newPackageConverterWithURL:(id)arg1 preserveExtendedAttributes:(BOOL)arg2 error:(id*)arg3 ;
+(BOOL)convertDocumentAtURL:(id)arg1 toPackageType:(long long)arg2 removeEntriesMatchingFilter:(id)arg3 error:(id*)arg4 ;
+(id)newPackageConverterWithURL:(id)arg1 error:(id*)arg2 ;
-(id)init;
-(BOOL)isValid;
-(TSPPackage *)package;
-(NSURL *)URL;
-(BOOL)isPasswordProtected;
-(BOOL)isCancelled;
-(long long)packageType;
-(BOOL)checkPassword:(id)arg1 ;
-(BOOL)writeToURL:(id)arg1 packageType:(long long)arg2 removeEntriesMatchingFilter:(id)arg3 error:(id*)arg4 ;
-(id)initWithURL:(id)arg1 package:(id)arg2 fileCoordinatorDelegate:(id)arg3 preserveExtendedAttributes:(BOOL)arg4 error:(id*)arg5 ;
-(BOOL)path:(id)arg1 matchesFilter:(id)arg2 ;
-(BOOL)enumeratePackageEntriesWithZipArchive:(id)arg1 needsReadChannel:(BOOL)arg2 accessor:(/*^block*/id)arg3 ;
-(unsigned long long)progressTotalUnitCountWithZipArchive:(id)arg1 ;
-(id)newWriteChannelAtPath:(id)arg1 lastModificationDate:(id)arg2 size:(unsigned long long)arg3 CRC:(unsigned)arg4 packageWriter:(id)arg5 error:(id*)arg6 ;
-(BOOL)isDataPath:(id)arg1 ;
-(BOOL)isObjectArchivePath:(id)arg1 ;
-(BOOL)isDocumentPropertiesPath:(id)arg1 ;
-(BOOL)hasEntriesMatchingFilter:(id)arg1 ;
@end

