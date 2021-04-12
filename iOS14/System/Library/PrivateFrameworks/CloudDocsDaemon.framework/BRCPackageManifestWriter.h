/*
* Generated on Thursday, January 14, 2021 at 2:26:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
*/


@class BRCClientZone, NSString, PBMessageStreamWriter, NSOutputStream, NSURL, NSError;

@interface BRCPackageManifestWriter : NSObject {

	BRCClientZone* _clientZone;
	NSString* _stageID;
	PBMessageStreamWriter* _writer;
	NSOutputStream* _stream;
	NSURL* _url;
	NSError* _error;

}

@property (nonatomic,readonly) NSError * error;              //@synthesize error=_error - In the implementation block
@property (nonatomic,readonly) NSURL * url;                  //@synthesize url=_url - In the implementation block
-(BOOL)addItem:(id)arg1 ;
-(BOOL)done;
-(NSURL *)url;
-(NSError *)error;
-(void)_handleStreamError;
-(void)_applyQuarantineMetadataWithManifestItem:(id)arg1 fd:(int)arg2 ;
-(unsigned short)_computedFileModeForPackageItem:(id)arg1 ;
-(BOOL)_packageItem:(id)arg1 matchesMode:(unsigned short)arg2 ;
-(void)_applyFileMetadataWithManifestItem:(id)arg1 packageRootFD:(int)arg2 ;
-(void)_applyDirectoryMetadataWithManifestItem:(id)arg1 packageRootFD:(int)arg2 ;
-(BOOL)_stageExistingPackageItem:(id)arg1 withLiveFd:(int)arg2 stageFd:(int)arg3 ;
-(BOOL)addLocalItem:(id)arg1 ;
-(id)initWithZone:(id)arg1 stageID:(id)arg2 url:(id)arg3 ;
-(BOOL)stagePackageWithReader:(id)arg1 package:(id)arg2 xattrsPackage:(id)arg3 stageItemURL:(id)arg4 livefd:(int)arg5 recordName:(id)arg6 ;
@end

