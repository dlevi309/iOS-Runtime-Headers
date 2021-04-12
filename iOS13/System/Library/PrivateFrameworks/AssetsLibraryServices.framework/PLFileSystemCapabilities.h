/*
* Generated on Monday, March 1, 2021 at 2:32:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AssetsLibraryServices.framework/AssetsLibraryServices
*/


@class NSError, NSString;

@interface PLFileSystemCapabilities : NSObject {

	unsigned _interfacesCapabilities;
	unsigned _nativeCommonAttributes;
	char _fstypename[16];
	BOOL _isReadOnly;
	BOOL _isLocalVolume;
	BOOL _isInternalVolume;
	BOOL _isRootFileSystemVolume;
	BOOL _isValid;
	NSError* _error;

}

@property (readonly) BOOL isReadOnly;                                                       //@synthesize isReadOnly=_isReadOnly - In the implementation block
@property (readonly) BOOL isCloneCapable; 
@property (readonly) BOOL isWholeFileLockCapable; 
@property (readonly) BOOL isGenCountCapable; 
@property (readonly) BOOL isSecludeRenameCapable; 
@property (readonly) BOOL isLocalVolume;                                                    //@synthesize isLocalVolume=_isLocalVolume - In the implementation block
@property (readonly) BOOL isInternalVolume;                                                 //@synthesize isInternalVolume=_isInternalVolume - In the implementation block
@property (readonly) BOOL isRootFileSystemVolume;                                           //@synthesize isRootFileSystemVolume=_isRootFileSystemVolume - In the implementation block
@property (readonly) NSString * fileSystemTypeName; 
@property (readonly) BOOL isNetworkVolume; 
@property (readonly) BOOL isCentralizedCacheDeleteCapable; 
@property (getter=isWholeFileLockCapable,readonly) BOOL isCoreDataCapable; 
@property (getter=isGenCountCapable,readonly) BOOL isCloudPhotoLibraryCapable; 
@property (readonly) BOOL isValid;                                                          //@synthesize isValid=_isValid - In the implementation block
@property (readonly) NSError * error;                                                       //@synthesize error=_error - In the implementation block
+(unsigned long long)minimumAvailableBytesRequiredForLibraryOpen;
+(id)capabilitiesWithURL:(id)arg1 ;
-(id)description;
-(BOOL)isValid;
-(NSError *)error;
-(BOOL)isReadOnly;
-(BOOL)isCentralizedCacheDeleteCapable;
-(BOOL)isRootFileSystemVolume;
-(BOOL)isCloneCapable;
-(BOOL)isWholeFileLockCapable;
-(BOOL)isGenCountCapable;
-(BOOL)isSecludeRenameCapable;
-(NSString *)fileSystemTypeName;
-(BOOL)isNetworkVolume;
-(BOOL)determineCapabilitiesWithURL:(id)arg1 error:(id*)arg2 ;
-(BOOL)isLocalVolume;
-(BOOL)isInternalVolume;
@end

