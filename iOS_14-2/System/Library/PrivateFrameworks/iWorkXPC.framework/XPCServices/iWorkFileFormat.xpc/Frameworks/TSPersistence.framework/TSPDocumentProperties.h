/*
* Generated on Thursday, January 14, 2021 at 2:28:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iWorkXPC.framework/XPCServices/iWorkFileFormat.xpc/Frameworks/TSPersistence.framework/TSPersistence
*/

#import <TSPersistence/TSPersistence-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSUUID, TSPDocumentRevision, NSDictionary;

@interface TSPDocumentProperties : NSObject <NSCopying> {

	NSUUID* _shareUUID;
	NSUUID* _documentUUID;
	NSUUID* _versionUUID;
	unsigned long long _fileFormatVersion;
	TSPDocumentRevision* _revision;
	NSDictionary* _additionalProperties;

}

@property (nonatomic,copy) NSUUID * documentUUID;                               //@synthesize documentUUID=_documentUUID - In the implementation block
@property (assign,nonatomic) unsigned long long fileFormatVersion;              //@synthesize fileFormatVersion=_fileFormatVersion - In the implementation block
@property (nonatomic,copy) TSPDocumentRevision * revision;                      //@synthesize revision=_revision - In the implementation block
@property (nonatomic,copy) NSDictionary * additionalProperties;                 //@synthesize additionalProperties=_additionalProperties - In the implementation block
@property (nonatomic,readonly) NSUUID * versionUUID; 
@property (nonatomic,readonly) NSUUID * shareUUID; 
+(id)keychainGenericItemForDocumentUUID:(id)arg1 ;
+(id)documentPropertiesRelativePath;
+(id)shareIdentifierRelativePath;
+(id)documentRevisionAtURL:(id)arg1 ;
+(id)documentUUIDAtURL:(id)arg1 ;
+(BOOL)documentIsEncryptedAtURL:(id)arg1 ;
-(NSUUID *)shareUUID;
-(id)init;
-(void)setAdditionalProperties:(NSDictionary *)arg1 ;
-(void)setRevision:(TSPDocumentRevision *)arg1 ;
-(id)description;
-(NSDictionary *)additionalProperties;
-(id)copyWithZone:(NSZone*)arg1 ;
-(TSPDocumentRevision *)revision;
-(NSUUID *)documentUUID;
-(NSUUID *)versionUUID;
-(unsigned long long)fileFormatVersion;
-(void)setDocumentUUID:(NSUUID *)arg1 ;
-(void)updateVersionUUID;
-(void)updateDocumentAndShareUUID;
-(void)setFileFormatVersion:(unsigned long long)arg1 ;
-(BOOL)writeToPackageWriter:(id)arg1 error:(id*)arg2 ;
-(void)updateDocumentUUID;
-(id)initWithDocumentURL:(id)arg1 allowMissingPropertyList:(BOOL)arg2 error:(id*)arg3 ;
-(id)initWithDocumentURL:(id)arg1 error:(id*)arg2 ;
-(BOOL)writeToDocumentBundleURL:(id)arg1 error:(id*)arg2 ;
-(id)initWithDocumentBundleURL:(id)arg1 allowMissingPropertyList:(BOOL)arg2 error:(id*)arg3 ;
-(id)initWithDocumentFileURL:(id)arg1 allowMissingPropertyList:(BOOL)arg2 error:(id*)arg3 ;
-(void)readDocumentPropertiesFromDictionary:(id)arg1 ;
-(id)initWithFilePackageURL:(id)arg1 zipArchive:(id)arg2 allowMissingPropertyList:(BOOL)arg3 error:(id*)arg4 ;
-(id)UUIDFromDocumentProperties:(id)arg1 key:(id)arg2 ;
-(id)encodedPropertyListWithError:(id*)arg1 ;
-(BOOL)writeToDocumentURL:(id)arg1 writerBlock:(/*^block*/id)arg2 error:(id*)arg3 ;
-(id)initWithPropertiesURL:(id)arg1 error:(id*)arg2 ;
-(BOOL)writeToPropertiesURL:(id)arg1 error:(id*)arg2 ;
@end

