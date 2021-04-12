/*
* Generated on Thursday, January 14, 2021 at 2:24:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class FPSandboxingURLWrapper, NSUUID, NSURL, NSString;

@interface QLPreviewItemEditedCopy : NSObject <NSSecureCoding> {

	FPSandboxingURLWrapper* _urlWrapper;
	FPSandboxingURLWrapper* _directoryURLWrapper;
	NSUUID* _uuid;
	unsigned long long _version;

}

@property (nonatomic,retain) FPSandboxingURLWrapper * urlWrapper;                       //@synthesize urlWrapper=_urlWrapper - In the implementation block
@property (nonatomic,retain) FPSandboxingURLWrapper * directoryURLWrapper;              //@synthesize directoryURLWrapper=_directoryURLWrapper - In the implementation block
@property (nonatomic,retain) NSUUID * uuid;                                             //@synthesize uuid=_uuid - In the implementation block
@property (assign,nonatomic) unsigned long long version;                                //@synthesize version=_version - In the implementation block
@property (nonatomic,readonly) NSURL * url; 
@property (nonatomic,readonly) NSURL * createdContainerTemporaryURL; 
@property (nonatomic,readonly) NSString * outputURLContentType; 
+(BOOL)supportsSecureCoding;
-(NSUUID *)uuid;
-(void)bumpVersion;
-(void)encodeWithCoder:(id)arg1 ;
-(FPSandboxingURLWrapper *)urlWrapper;
-(NSURL *)url;
-(id)description;
-(void)removeFromDisk;
-(void)setUrlWrapper:(FPSandboxingURLWrapper *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setVersion:(unsigned long long)arg1 ;
-(NSURL *)createdContainerTemporaryURL;
-(FPSandboxingURLWrapper *)directoryURLWrapper;
-(void)setDirectoryURLWrapper:(FPSandboxingURLWrapper *)arg1 ;
-(void)setUuid:(NSUUID *)arg1 ;
-(unsigned long long)version;
-(BOOL)containerStillExists;
-(NSString *)outputURLContentType;
-(id)initWithEditedCopyURL:(id)arg1 createdContainerTemporaryURL:(id)arg2 ;
-(id)initWithEditedCopyURL:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

