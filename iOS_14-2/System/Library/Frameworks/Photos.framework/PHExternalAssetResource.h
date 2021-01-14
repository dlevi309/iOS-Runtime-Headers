/*
* Generated on Thursday, January 14, 2021 at 2:22:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
*/

#import <libobjc.A.dylib/PHCPLAssetResource.h>

@class PHAssetResourceCreationOptions, NSData, NSURL, NSString;

@interface PHExternalAssetResource : NSObject <PHCPLAssetResource> {

	long long _sandboxExtensionHandle;
	BOOL _duplicateAllowsReadAccess;
	BOOL _isLibraryAssetResource;
	long long _resourceType;
	PHAssetResourceCreationOptions* _creationOptions;
	unsigned long long _cplResourceType;
	NSData* _data;
	NSURL* _fileURL;
	long long _pixelWidth;
	long long _pixelHeight;

}

@property (nonatomic,readonly) long long type;                                                                  //@synthesize resourceType=_resourceType - In the implementation block
@property (nonatomic,retain) NSData * data;                                                                     //@synthesize data=_data - In the implementation block
@property (nonatomic,copy) PHAssetResourceCreationOptions * creationOptions;                                    //@synthesize creationOptions=_creationOptions - In the implementation block
@property (nonatomic,readonly) BOOL isLibraryAssetResource;                                                     //@synthesize isLibraryAssetResource=_isLibraryAssetResource - In the implementation block
@property (assign,setter=_setDuplicateAllowsReadAccess:,nonatomic) BOOL duplicateAllowsReadAccess;              //@synthesize duplicateAllowsReadAccess=_duplicateAllowsReadAccess - In the implementation block
@property (nonatomic,copy) NSURL * fileURL;                                                                     //@synthesize fileURL=_fileURL - In the implementation block
@property (assign,nonatomic) long long pixelWidth;                                                              //@synthesize pixelWidth=_pixelWidth - In the implementation block
@property (assign,nonatomic) long long pixelHeight;                                                             //@synthesize pixelHeight=_pixelHeight - In the implementation block
@property (nonatomic,readonly) NSString * originalFilename; 
@property (nonatomic,readonly) NSString * uniformTypeIdentifier; 
@property (nonatomic,readonly) unsigned long long cplResourceType;                                              //@synthesize cplResourceType=_cplResourceType - In the implementation block
+(unsigned long long)probableCPLResourceTypeFromAssetResourceType:(long long)arg1 ;
+(id)assetResourceForDuplicatingAssetResource:(id)arg1 asData:(BOOL)arg2 error:(id*)arg3 ;
-(void)setFileURL:(NSURL *)arg1 ;
-(id)initWithPropertyListRepresentation:(id)arg1 ;
-(id)propertyListRepresentation;
-(id)init;
-(void)_releaseSandboxExtension;
-(NSString *)uniformTypeIdentifier;
-(unsigned long long)cplResourceType;
-(void)setData:(NSData *)arg1 ;
-(void)setPixelHeight:(long long)arg1 ;
-(NSURL *)fileURL;
-(void)setPixelWidth:(long long)arg1 ;
-(long long)pixelHeight;
-(NSData *)data;
-(long long)type;
-(PHAssetResourceCreationOptions *)creationOptions;
-(NSString *)originalFilename;
-(void)_consumeSandboxExtension:(id)arg1 ;
-(id)initWithResourceType:(long long)arg1 ;
-(BOOL)duplicateAllowsReadAccess;
-(void)_setDuplicateAllowsReadAccess:(BOOL)arg1 ;
-(void)setCreationOptions:(PHAssetResourceCreationOptions *)arg1 ;
-(BOOL)isLibraryAssetResource;
-(id)_issueSandboxExtension;
-(void)dealloc;
-(long long)pixelWidth;
@end

