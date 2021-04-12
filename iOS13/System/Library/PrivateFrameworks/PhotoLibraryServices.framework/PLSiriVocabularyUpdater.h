/*
* Generated on Monday, March 1, 2021 at 2:30:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/


@protocol PLSiriVocabularyService;
@class PLPhotoLibrary;

@interface PLSiriVocabularyUpdater : NSObject {

	id<PLSiriVocabularyService> _vocabularyService;
	PLPhotoLibrary* _photoLibrary;

}
+(void)updateAllVocabulariesInLibrary:(id)arg1 withService:(id)arg2 ;
-(id)init;
-(id)initWithVocabularyService:(id)arg1 photoLibrary:(id)arg2 ;
-(void)updateAllVocabularies;
-(void)_updateAlbumsVocabularyInContext:(id)arg1 ;
-(id)_fetchAlbumDictionariesInContext:(id)arg1 ;
-(void)updateAlbumVocabularyFromAlbumDictionaries:(id)arg1 ;
-(id)albumTitlesFromDictionaries:(id)arg1 ;
-(id)localizedTitleForAlbumDictionary:(id)arg1 ;
-(void)_updateContactsVocabularyInContext:(id)arg1 ;
-(id)_fetchPersonDictionariesInContext:(id)arg1 ;
-(void)updateContactVocabularyFromPersonDictionaries:(id)arg1 ;
-(id)personNamesFromDictionaries:(id)arg1 ;
@end

