/*
* Generated on Monday, March 1, 2021 at 2:34:22 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/AssetsLibrary.framework/AssetsLibrary
*/

#import <libobjc.A.dylib/ALAssetsLibraryAsset.h>

@protocol PLSidecar;
@class ALAssetsLibrary, PLManagedAsset, NSString, PLPhotoLibrary;

@interface ALAssetRepresentationPrivate : NSObject <ALAssetsLibraryAsset> {

	ALAssetsLibrary* _library;
	BOOL _isValid;
	PLManagedAsset* _photo;
	id<PLSidecar> _sidecar;
	NSString* _extension;
	PLPhotoLibrary* _photoLibrary;

}

@property (nonatomic,retain) PLManagedAsset * photo;                      //@synthesize photo=_photo - In the implementation block
@property (nonatomic,retain) PLPhotoLibrary * _photoLibrary;              //@synthesize photoLibrary=_photoLibrary - In the implementation block
@property (nonatomic,retain) id<PLSidecar> sidecar;                       //@synthesize sidecar=_sidecar - In the implementation block
@property (nonatomic,copy) NSString * extension;                          //@synthesize extension=_extension - In the implementation block
@property (assign,nonatomic) ALAssetsLibrary * library; 
@property (assign,nonatomic) BOOL isValid;                                //@synthesize isValid=_isValid - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)_setupFileDescriptorQueue;
+(int)_fileDescriptorForPersistentURL:(id)arg1 ;
+(int)_updateFileDescriptor:(int)arg1 forPersistentURL:(id)arg2 ;
+(void)_clearFileDescriptorQueue;
-(void)dealloc;
-(BOOL)isValid;
-(void)setExtension:(NSString *)arg1 ;
-(NSString *)extension;
-(ALAssetsLibrary *)library;
-(PLManagedAsset *)photo;
-(void)setPhoto:(PLManagedAsset *)arg1 ;
-(PLPhotoLibrary *)_photoLibrary;
-(void)_performBlockAndWait:(/*^block*/id)arg1 ;
-(BOOL)_isVideo;
-(void)setLibrary:(ALAssetsLibrary *)arg1 ;
-(BOOL)_isImage;
-(void)setIsValid:(BOOL)arg1 ;
-(id)initWithManagedAsset:(id)arg1 sidecar:(id)arg2 extension:(id)arg3 library:(id)arg4 ;
-(void)libraryDidChange;
-(id<PLSidecar>)sidecar;
-(void)setSidecar:(id<PLSidecar>)arg1 ;
-(void)set_photoLibrary:(PLPhotoLibrary *)arg1 ;
@end

