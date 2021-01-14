/*
* Generated on Thursday, January 14, 2021 at 2:22:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
*/


@class NSOrderedSet, NSManagedObjectContext, PLPhotoLibrary, NSArray, NSString;

@interface PHChangeValidationController : NSObject {

	BOOL _didPrepare;
	BOOL _confirmationRequired;
	NSOrderedSet* _insertRequests;
	NSOrderedSet* _updateRequests;
	NSOrderedSet* _deleteRequests;
	NSManagedObjectContext* _managedObjectContext;
	PLPhotoLibrary* _photoLibrary;
	NSArray* _renderedContentURLs;
	NSArray* _assetsToChangeContent;
	NSArray* _assetsToRevert;
	NSArray* _assetsToHide;
	NSArray* _assetsToDelete;
	NSArray* _albumsToDelete;
	NSArray* _foldersToDelete;
	NSString* _clientName;

}

@property (nonatomic,readonly) NSArray * renderedContentURLs;                              //@synthesize renderedContentURLs=_renderedContentURLs - In the implementation block
@property (nonatomic,readonly) NSArray * assetsToChangeContent;                            //@synthesize assetsToChangeContent=_assetsToChangeContent - In the implementation block
@property (nonatomic,readonly) NSArray * assetsToRevert;                                   //@synthesize assetsToRevert=_assetsToRevert - In the implementation block
@property (nonatomic,readonly) NSArray * assetsToHide;                                     //@synthesize assetsToHide=_assetsToHide - In the implementation block
@property (nonatomic,readonly) NSArray * assetsToDelete;                                   //@synthesize assetsToDelete=_assetsToDelete - In the implementation block
@property (nonatomic,readonly) NSArray * albumsToDelete;                                   //@synthesize albumsToDelete=_albumsToDelete - In the implementation block
@property (nonatomic,readonly) NSArray * foldersToDelete;                                  //@synthesize foldersToDelete=_foldersToDelete - In the implementation block
@property (nonatomic,copy,readonly) NSString * clientName;                                 //@synthesize clientName=_clientName - In the implementation block
@property (nonatomic,readonly) BOOL confirmationRequired;                                  //@synthesize confirmationRequired=_confirmationRequired - In the implementation block
@property (nonatomic,readonly) NSOrderedSet * insertRequests;                              //@synthesize insertRequests=_insertRequests - In the implementation block
@property (nonatomic,readonly) NSOrderedSet * updateRequests;                              //@synthesize updateRequests=_updateRequests - In the implementation block
@property (nonatomic,readonly) NSOrderedSet * deleteRequests;                              //@synthesize deleteRequests=_deleteRequests - In the implementation block
@property (nonatomic,readonly) NSManagedObjectContext * managedObjectContext;              //@synthesize managedObjectContext=_managedObjectContext - In the implementation block
@property (nonatomic,readonly) PLPhotoLibrary * photoLibrary;                              //@synthesize photoLibrary=_photoLibrary - In the implementation block
-(BOOL)validateWithError:(id*)arg1 ;
-(NSManagedObjectContext *)managedObjectContext;
-(NSArray *)assetsToRevert;
-(BOOL)_prepareWithError:(id*)arg1 ;
-(NSString *)clientName;
-(PLPhotoLibrary *)photoLibrary;
-(NSArray *)assetsToHide;
-(BOOL)_promptForUserConfirmationWithTitle:(id)arg1 message:(id)arg2 defaultButtonTitle:(id)arg3 alternateButtonTitle:(id)arg4 extensionItem:(id)arg5 ;
-(NSArray *)assetsToDelete;
-(NSArray *)foldersToDelete;
-(id)initWithInsertRequests:(id)arg1 updateRequests:(id)arg2 deleteRequests:(id)arg3 context:(id)arg4 photoLibrary:(id)arg5 ;
-(BOOL)_recordObjectID:(id)arg1 withSimpleDeleteValidators:(id)arg2 ;
-(BOOL)promptForUserConfirmationWithTitle:(id)arg1 message:(id)arg2 defaultButtonTitle:(id)arg3 alternateButtonTitle:(id)arg4 renderedContentURLs:(id)arg5 ;
-(NSArray *)albumsToDelete;
-(BOOL)confirmationRequired;
-(NSOrderedSet *)updateRequests;
-(NSArray *)assetsToChangeContent;
-(BOOL)promptForUserConfirmationWithTitle:(id)arg1 message:(id)arg2 defaultButtonTitle:(id)arg3 alternateButtonTitle:(id)arg4 previewAssetLocalIdentifiers:(id)arg5 revertToOriginal:(BOOL)arg6 ;
-(NSArray *)renderedContentURLs;
-(BOOL)promptForUserConfirmationWithTitle:(id)arg1 message:(id)arg2 defaultButtonTitle:(id)arg3 alternateButtonTitle:(id)arg4 ;
-(NSOrderedSet *)insertRequests;
-(NSOrderedSet *)deleteRequests;
-(BOOL)_validateSimpleDeletionsWithValidators:(id)arg1 requestsByObjectID:(id)arg2 error:(id*)arg3 ;
-(id)_simpleDeleteValidatorsWithManagedObjectContext:(id)arg1 ;
@end

