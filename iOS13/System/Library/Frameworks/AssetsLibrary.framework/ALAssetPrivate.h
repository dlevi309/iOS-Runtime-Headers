/*
* Generated on Monday, March 1, 2021 at 2:34:22 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/AssetsLibrary.framework/AssetsLibrary
*/

#import <libobjc.A.dylib/ALAssetsLibraryAsset.h>

@class ALAssetsLibrary, PLManagedAsset, PLPhotoLibrary, NSString;

@interface ALAssetPrivate : NSObject <ALAssetsLibraryAsset> {

	ALAssetsLibrary* _library;
	BOOL _isValid;
	PLManagedAsset* _photo;
	PLPhotoLibrary* _photoLibrary;

}

@property (nonatomic,retain) PLManagedAsset * photo;                           //@synthesize photo=_photo - In the implementation block
@property (nonatomic,retain) PLPhotoLibrary * _photoLibrary;                   //@synthesize photoLibrary=_photoLibrary - In the implementation block
@property (assign,nonatomic) ALAssetsLibrary * library; 
@property (assign,nonatomic) BOOL isValid;                                     //@synthesize isValid=_isValid - In the implementation block
@property (getter=isDeletable,nonatomic,readonly) BOOL deletable; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(BOOL)isValid;
-(BOOL)isDeletable;
-(ALAssetsLibrary *)library;
-(PLManagedAsset *)photo;
-(void)setPhoto:(PLManagedAsset *)arg1 ;
-(PLPhotoLibrary *)_photoLibrary;
-(void)_performBlockAndWait:(/*^block*/id)arg1 ;
-(void)setLibrary:(ALAssetsLibrary *)arg1 ;
-(void)setIsValid:(BOOL)arg1 ;
-(id)initWithManagedAsset:(id)arg1 library:(id)arg2 ;
-(void)libraryDidChange;
-(void)set_photoLibrary:(PLPhotoLibrary *)arg1 ;
@end

