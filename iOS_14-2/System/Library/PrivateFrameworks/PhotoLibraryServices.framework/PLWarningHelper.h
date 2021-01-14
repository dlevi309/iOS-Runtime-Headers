/*
* Generated on Thursday, January 14, 2021 at 2:22:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/


@class NSArray, NSString, PLPhotoLibrary;

@interface PLWarningHelper : NSObject {

	NSArray* __assets;
	NSArray* __additionalPhotoStreamAssets;
	NSString* __clientName;
	long long __style;
	PLPhotoLibrary* _photoLibrary;

}

@property (nonatomic,retain) NSArray * _assets;                                   //@synthesize _assets=__assets - In the implementation block
@property (nonatomic,retain) NSArray * _additionalPhotoStreamAssets;              //@synthesize _additionalPhotoStreamAssets=__additionalPhotoStreamAssets - In the implementation block
@property (nonatomic,retain) NSString * _clientName;                              //@synthesize _clientName=__clientName - In the implementation block
@property (assign,nonatomic) long long _style;                                    //@synthesize _style=__style - In the implementation block
@property (nonatomic,retain) PLPhotoLibrary * photoLibrary;                       //@synthesize photoLibrary=_photoLibrary - In the implementation block
-(long long)_style;
-(id)initWithPhotoLibrary:(id)arg1 ;
-(PLPhotoLibrary *)photoLibrary;
-(void)setPhotoLibrary:(PLPhotoLibrary *)arg1 ;
-(NSString *)_clientName;
-(NSArray *)_assets;
-(void)getDeletionWarningTitle:(id*)arg1 message:(id*)arg2 buttonTitle:(id*)arg3 forAlbums:(id)arg4 folders:(id)arg5 clientName:(id)arg6 style:(long long)arg7 ;
-(void)getDeletionWarningTitle:(id*)arg1 message:(id*)arg2 buttonTitle:(id*)arg3 forAssets:(id)arg4 additionalPhotoStreamAssets:(id)arg5 clientName:(id)arg6 style:(long long)arg7 ;
-(void)getWarningTitle:(id*)arg1 message:(id*)arg2 buttonTitle:(id*)arg3 forAssets:(id)arg4 operation:(long long)arg5 clientName:(id)arg6 ;
-(void)set_assets:(NSArray *)arg1 ;
-(void)_getWarningTitle:(id*)arg1 message:(id*)arg2 buttonTitle:(id*)arg3 forItemSuffix:(id)arg4 count:(unsigned long long)arg5 operation:(long long)arg6 clientName:(id)arg7 ;
-(void)_getDeletionWarningTitle:(id*)arg1 message:(id*)arg2 buttonTitle:(id*)arg3 ;
-(void)getExpungeWarningMessage:(id*)arg1 buttonTitle:(id*)arg2 forAssets:(id)arg3 ;
-(void)getAvalancheDeleteWarning:(id*)arg1 actualDeletionCount:(long long*)arg2 forAssets:(id)arg3 ;
-(id)_cloudSharedWarningTextForAssets:(id)arg1 ;
-(id)allWarningMessageCombinations;
-(id)_usedElsewhereWarningTextForAssets:(id)arg1 additionalPhotoStreamAssets:(id)arg2 actualDeletionCount:(long long)arg3 ;
-(NSArray *)_additionalPhotoStreamAssets;
-(void)set_additionalPhotoStreamAssets:(NSArray *)arg1 ;
-(id)_usedElsewhereWarningTextForAssetCount:(long long)arg1 inLibraryScopeCount:(long long)arg2 inPhotoStreamCount:(long long)arg3 iniPhotoCount:(long long)arg4 inSomeAlbumCount:(long long)arg5 affectedLocalAlbumsCount:(long long)arg6 itemKindSuffix:(id)arg7 actualDeletionCount:(long long)arg8 ;
-(void)set_clientName:(NSString *)arg1 ;
-(void)set_style:(long long)arg1 ;
@end

