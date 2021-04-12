/*
* Generated on Thursday, January 14, 2021 at 2:27:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/QuickLookThumbnailing.framework/QuickLookThumbnailing
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSURL;

@interface QLURLHandler : NSObject <NSSecureCoding> {

	const char* _sandboxType;
	BOOL _isAccessingSecurityScope;
	BOOL _needsAccessToExternalResources;
	NSString* _fileExtensionToken;
	long long _fileExtensionHandle;
	NSString* _physicalFileExtensionToken;
	long long _physicalFileExtensionHandle;
	NSString* _externalResourcesToken;
	long long _externalResourcesHandle;
	NSURL* _fileURL;

}

@property (nonatomic,retain) NSString * fileExtensionToken;                      //@synthesize fileExtensionToken=_fileExtensionToken - In the implementation block
@property (assign,nonatomic) long long fileExtensionHandle;                      //@synthesize fileExtensionHandle=_fileExtensionHandle - In the implementation block
@property (nonatomic,retain) NSString * physicalFileExtensionToken;              //@synthesize physicalFileExtensionToken=_physicalFileExtensionToken - In the implementation block
@property (assign,nonatomic) long long physicalFileExtensionHandle;              //@synthesize physicalFileExtensionHandle=_physicalFileExtensionHandle - In the implementation block
@property (nonatomic,copy) NSString * externalResourcesToken;                    //@synthesize externalResourcesToken=_externalResourcesToken - In the implementation block
@property (assign,nonatomic) long long externalResourcesHandle;                  //@synthesize externalResourcesHandle=_externalResourcesHandle - In the implementation block
@property (retain) NSURL * fileURL;                                              //@synthesize fileURL=_fileURL - In the implementation block
@property (assign,nonatomic) BOOL needsAccessToExternalResources;                //@synthesize needsAccessToExternalResources=_needsAccessToExternalResources - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setFileURL:(NSURL *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSURL *)fileURL;
-(id)initWithURL:(id)arg1 sandboxType:(const char*)arg2 ;
-(void)setNeedsAccessToExternalResources:(BOOL)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)needsAccessToExternalResources;
-(void)dealloc;
-(void)sandboxExtensionRelease:(long long)arg1 ;
-(id)_issueFileExtensionForURL:(id)arg1 ;
-(void)_issueExternalResourcesExtensionForURL:(id)arg1 ;
-(long long)sandboxExtensionConsume:(const char*)arg1 ;
-(void)setExternalResourcesHandle:(long long)arg1 ;
-(void)setExternalResourcesToken:(NSString *)arg1 ;
-(char*)sandboxExtensionIssueFileWithClass:(const char*)arg1 path:(const char*)arg2 flags:(unsigned)arg3 ;
-(void)_issueFileExtension;
-(NSString *)externalResourcesToken;
-(void)_consumeFileExtension;
-(long long)fileExtensionHandle;
-(void)setFileExtensionHandle:(long long)arg1 ;
-(long long)physicalFileExtensionHandle;
-(void)setPhysicalFileExtensionHandle:(long long)arg1 ;
-(NSString *)fileExtensionToken;
-(void)setFileExtensionToken:(NSString *)arg1 ;
-(NSString *)physicalFileExtensionToken;
-(void)setPhysicalFileExtensionToken:(NSString *)arg1 ;
-(long long)externalResourcesHandle;
@end

