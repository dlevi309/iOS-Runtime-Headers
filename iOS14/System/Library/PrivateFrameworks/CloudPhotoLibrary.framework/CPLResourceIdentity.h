/*
* Generated on Thursday, January 14, 2021 at 2:24:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
*/

#import <CloudPhotoLibrary/CloudPhotoLibrary-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSURL, NSString;

@interface CPLResourceIdentity : NSObject <NSSecureCoding, NSCopying> {

	BOOL _available;
	NSURL* _fileURL;
	NSString* _fingerPrint;
	unsigned long long _fileSize;
	NSString* _fileUTI;
	CGSize _imageDimensions;

}

@property (nonatomic,copy) NSURL * fileURL;                                  //@synthesize fileURL=_fileURL - In the implementation block
@property (nonatomic,copy) NSString * fingerPrint;                           //@synthesize fingerPrint=_fingerPrint - In the implementation block
@property (assign,nonatomic) unsigned long long fileSize;                    //@synthesize fileSize=_fileSize - In the implementation block
@property (assign,nonatomic) CGSize imageDimensions;                         //@synthesize imageDimensions=_imageDimensions - In the implementation block
@property (assign,getter=isAvailable,nonatomic) BOOL available;              //@synthesize available=_available - In the implementation block
@property (nonatomic,copy) NSString * fileUTI;                               //@synthesize fileUTI=_fileUTI - In the implementation block
+(id)alloc;
+(BOOL)supportsSecureCoding;
+(id)fingerPrintForFileAtURL:(id)arg1 typeIdentifier:(id)arg2 error:(id*)arg3 ;
+(id)allocWithZone:(NSZone*)arg1 ;
+(id)fingerPrintForData:(id)arg1 typeIdentifier:(id)arg2 error:(id*)arg3 ;
+(id)fingerPrintForFD:(int)arg1 typeIdentifier:(id)arg2 error:(id*)arg3 ;
+(id)identityFromStoredIdentity:(id)arg1 ;
+(id)fileUTIForExtension:(id)arg1 ;
+(id)extensionForFileUTI:(id)arg1 ;
+(id)storageNameForFingerPrint:(id)arg1 fileUTI:(id)arg2 bucket:(id*)arg3 ;
+(id)identityForStorageName:(id)arg1 ;
+(void)setResourceIdentityImplementation:(Class)arg1 ;
+(Class)resourceIdentityImplementation;
+(Class)_identityImplementationClass;
-(void)setAvailable:(BOOL)arg1 ;
-(void)setFileURL:(NSURL *)arg1 ;
-(BOOL)isAvailable;
-(unsigned long long)fileSize;
-(NSString *)fileUTI;
-(void)encodeWithCoder:(id)arg1 ;
-(NSURL *)fileURL;
-(id)initWithFileURL:(id)arg1 ;
-(id)description;
-(CGSize)imageDimensions;
-(NSString *)fingerPrint;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(void)setFileSize:(unsigned long long)arg1 ;
-(void)setFingerPrint:(NSString *)arg1 ;
-(void)setFileUTI:(NSString *)arg1 ;
-(void)setImageDimensions:(CGSize)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)identityForStorage;
@end

