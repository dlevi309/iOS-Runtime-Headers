/*
* Generated on Monday, March 1, 2021 at 2:34:31 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/QuickLookThumbnailing.framework/QuickLookThumbnailing
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSURL, FPSandboxingURLWrapper, NSData;

@interface QLThumbnailItem : NSObject <NSSecureCoding> {

	NSString* _fileExtensionToken;
	long long _fileExtensionHandle;
	NSURL* _url;
	FPSandboxingURLWrapper* _urlWrapperForExtension;
	FPSandboxingURLWrapper* _urlWrapperForParentDirectory;
	NSData* _data;
	NSString* _overriddenContentType;
	NSString* _computedContentType;
	unsigned long long _downloadStatus;
	BOOL _needsAccessToExternalResources;

}

@property (nonatomic,readonly) unsigned long long itemType; 
@property (nonatomic,readonly) NSString * contentType; 
@property (readonly) NSURL * url;                                                        //@synthesize url=_url - In the implementation block
@property (readonly) FPSandboxingURLWrapper * urlWrapperForExtension;                    //@synthesize urlWrapperForExtension=_urlWrapperForExtension - In the implementation block
@property (readonly) FPSandboxingURLWrapper * urlWrapperForParentDirectory;              //@synthesize urlWrapperForParentDirectory=_urlWrapperForParentDirectory - In the implementation block
@property (readonly) NSData * data;                                                      //@synthesize data=_data - In the implementation block
@property (nonatomic,copy) NSString * overriddenContentType;                             //@synthesize overriddenContentType=_overriddenContentType - In the implementation block
@property (assign) unsigned long long downloadStatus;                                    //@synthesize downloadStatus=_downloadStatus - In the implementation block
@property (copy) NSString * computedContentType;                                         //@synthesize computedContentType=_computedContentType - In the implementation block
@property (assign) BOOL needsAccessToExternalResources;                                  //@synthesize needsAccessToExternalResources=_needsAccessToExternalResources - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSString *)contentType;
-(unsigned long long)itemType;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithURL:(id)arg1 ;
-(NSData *)data;
-(NSURL *)url;
-(id)initWithData:(id)arg1 contentType:(id)arg2 ;
-(BOOL)needsDownload;
-(unsigned long long)downloadStatus;
-(BOOL)needsAccessToExternalResources;
-(void)setNeedsAccessToExternalResources:(BOOL)arg1 ;
-(id)initWithURL:(id)arg1 URLWrapperForExtension:(id)arg2 ;
-(void)setOverriddenContentType:(NSString *)arg1 ;
-(NSString *)overriddenContentType;
-(id)initWithURL:(id)arg1 URLWrapperForExtension:(id)arg2 URLWrapperForParentDirectory:(id)arg3 ;
-(void)issueFileExtension;
-(FPSandboxingURLWrapper *)urlWrapperForExtension;
-(void)consumeFileExtension;
-(NSString *)computedContentType;
-(void)setComputedContentType:(NSString *)arg1 ;
-(void)setDownloadStatus:(unsigned long long)arg1 ;
-(FPSandboxingURLWrapper *)urlWrapperForParentDirectory;
@end

