/*
* Generated on Monday, March 1, 2021 at 2:34:22 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/AssetsLibrary.framework/AssetsLibrary
*/


@class ALAssetsLibrary, PLPhotoLibrary, NSHashTable, NSMutableDictionary;

@interface ALAssetsLibraryPrivate : NSObject {

	ALAssetsLibrary* _assetsLibrary;
	PLPhotoLibrary* _photoLibrary;
	NSHashTable* _assetGroupInternals;
	NSMutableDictionary* _groupURLSByAlbumOID;
	BOOL _isValid;

}

@property (assign,nonatomic) ALAssetsLibrary * assetsLibrary;                     //@synthesize assetsLibrary=_assetsLibrary - In the implementation block
@property (nonatomic,retain,readonly) PLPhotoLibrary * photoLibrary;              //@synthesize photoLibrary=_photoLibrary - In the implementation block
@property (assign,nonatomic) BOOL isValid;                                        //@synthesize isValid=_isValid - In the implementation block
-(void)dealloc;
-(BOOL)isValid;
-(PLPhotoLibrary *)photoLibrary;
-(void)photoLibraryDidChange:(id)arg1 ;
-(void)setIsValid:(BOOL)arg1 ;
-(ALAssetsLibrary *)assetsLibrary;
-(void)registerAlbum:(id)arg1 assetGroupPrivate:(id)arg2 ;
-(void)setAssetsLibrary:(ALAssetsLibrary *)arg1 ;
-(id)initWithAssetsLibrary:(id)arg1 ;
@end

