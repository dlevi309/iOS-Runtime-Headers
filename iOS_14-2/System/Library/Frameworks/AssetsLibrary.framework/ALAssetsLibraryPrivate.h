/*
* Generated on Thursday, January 14, 2021 at 2:26:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(PLPhotoLibrary *)photoLibrary;
-(void)setIsValid:(BOOL)arg1 ;
-(void)photoLibraryDidChange:(id)arg1 ;
-(BOOL)isValid;
-(void)dealloc;
-(ALAssetsLibrary *)assetsLibrary;
-(void)registerAlbum:(id)arg1 assetGroupPrivate:(id)arg2 ;
-(void)setAssetsLibrary:(ALAssetsLibrary *)arg1 ;
-(id)initWithAssetsLibrary:(id)arg1 ;
@end

