/*
* Generated on Thursday, January 14, 2021 at 2:26:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(ALAssetsLibrary *)library;
-(void)setPhoto:(PLManagedAsset *)arg1 ;
-(PLManagedAsset *)photo;
-(BOOL)_isImage;
-(BOOL)_isVideo;
-(void)setExtension:(NSString *)arg1 ;
-(void)setIsValid:(BOOL)arg1 ;
-(BOOL)isValid;
-(void)setLibrary:(ALAssetsLibrary *)arg1 ;
-(NSString *)extension;
-(void)_performBlockAndWait:(/*^block*/id)arg1 ;
-(PLPhotoLibrary *)_photoLibrary;
-(id<PLSidecar>)sidecar;
-(void)dealloc;
-(id)initWithManagedAsset:(id)arg1 sidecar:(id)arg2 extension:(id)arg3 library:(id)arg4 ;
-(void)libraryDidChange;
-(void)setSidecar:(id<PLSidecar>)arg1 ;
-(void)set_photoLibrary:(PLPhotoLibrary *)arg1 ;
@end

