/*
* Generated on Monday, March 1, 2021 at 2:30:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/

#import <libobjc.A.dylib/PLAssetID.h>

@class NSString;

@interface PLManagedAssetID : NSObject <PLAssetID> {

	unsigned char _bundleScope;
	NSString* _uuid;
	NSString* _filename;
	NSString* _directory;
	NSString* _libraryID;

}

@property (nonatomic,copy) NSString * uuid;                          //@synthesize uuid=_uuid - In the implementation block
@property (nonatomic,copy) NSString * filename;                      //@synthesize filename=_filename - In the implementation block
@property (nonatomic,copy) NSString * directory;                     //@synthesize directory=_directory - In the implementation block
@property (nonatomic,copy) NSString * libraryID;                     //@synthesize libraryID=_libraryID - In the implementation block
@property (assign,nonatomic) unsigned char bundleScope;              //@synthesize bundleScope=_bundleScope - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)directory;
-(NSString *)uuid;
-(NSString *)filename;
-(void)setFilename:(NSString *)arg1 ;
-(void)setUuid:(NSString *)arg1 ;
-(NSString *)libraryID;
-(void)setDirectory:(NSString *)arg1 ;
-(id)initWithManagedAsset:(id)arg1 ;
-(unsigned char)bundleScope;
-(id)initWithUUID:(id)arg1 filename:(id)arg2 directory:(id)arg3 libraryID:(id)arg4 bundleScope:(unsigned char)arg5 ;
-(void)setLibraryID:(NSString *)arg1 ;
-(void)setBundleScope:(unsigned char)arg1 ;
@end

