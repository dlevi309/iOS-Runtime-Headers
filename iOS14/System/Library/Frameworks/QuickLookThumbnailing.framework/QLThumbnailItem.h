/*
* Generated on Thursday, January 14, 2021 at 2:27:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)initWithData:(id)arg1 contentType:(id)arg2 ;
-(id)initWithURL:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSURL *)url;
-(NSData *)data;
-(void)setNeedsAccessToExternalResources:(BOOL)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)downloadStatus;
-(BOOL)needsDownload;
-(void)setDownloadStatus:(unsigned long long)arg1 ;
-(BOOL)needsAccessToExternalResources;
-(void)dealloc;
-(NSString *)overriddenContentType;
-(id)initWithURL:(id)arg1 URLWrapperForExtension:(id)arg2 URLWrapperForParentDirectory:(id)arg3 ;
-(void)setOverriddenContentType:(NSString *)arg1 ;
-(void)issueFileExtension;
-(FPSandboxingURLWrapper *)urlWrapperForExtension;
-(void)consumeFileExtension;
-(id)initWithURL:(id)arg1 URLWrapperForExtension:(id)arg2 ;
-(NSString *)computedContentType;
-(void)setComputedContentType:(NSString *)arg1 ;
-(FPSandboxingURLWrapper *)urlWrapperForParentDirectory;
@end

