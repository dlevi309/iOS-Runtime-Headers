/*
* Generated on Monday, March 1, 2021 at 2:30:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
*/

#import <Photos/PHChangeRequest.h>

@class PLQuery, NSString, PHObjectPlaceholder;

@interface PHSmartAlbumChangeRequest : PHChangeRequest {

	PLQuery* _userQuery;

}

@property (nonatomic,copy) PLQuery * userQuery;                                                    //@synthesize userQuery=_userQuery - In the implementation block
@property (nonatomic,retain) NSString * title; 
@property (nonatomic,readonly) PHObjectPlaceholder * placeholderForCreatedSmartAlbum; 
@property (assign,nonatomic) unsigned customSortKey; 
@property (assign,nonatomic) BOOL customSortAscending; 
+(id)validateSmartAlbumTitle:(id)arg1 error:(id*)arg2 ;
+(id)_changeRequestForSmartAlbum:(id)arg1 userQuery:(id)arg2 ;
+(id)changeRequestForSmartAlbum:(id)arg1 ;
+(id)creationRequestForSmartAlbumWithTitle:(id)arg1 userQuery:(id)arg2 ;
+(id)creationRequestForSmartAlbumCopyFromSmartAlbum:(id)arg1 ;
+(void)deleteSmartAlbumsFromAssetCollection:(id)arg1 ;
+(void)expungeSmartAlbumsFromAssetCollection:(id)arg1 ;
+(void)undeleteSmartAlbumsFromAssetCollection:(id)arg1 ;
+(void)_deleteSmartAlbums:(id)arg1 withOperation:(long long)arg2 topLevelSelector:(SEL)arg3 ;
-(id)description;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(BOOL)customSortAscending;
-(unsigned)customSortKey;
-(void)setCustomSortAscending:(BOOL)arg1 ;
-(void)setCustomSortKey:(unsigned)arg1 ;
-(BOOL)allowMutationToManagedObject:(id)arg1 propertyKey:(id)arg2 error:(id*)arg3 ;
-(BOOL)validateMutationsToManagedObject:(id)arg1 error:(id*)arg2 ;
-(BOOL)applyMutationsToManagedObject:(id)arg1 photoLibrary:(id)arg2 error:(id*)arg3 ;
-(id)initWithUUID:(id)arg1 objectID:(id)arg2 ;
-(void)encodeToXPCDict:(id)arg1 ;
-(id)initWithXPCDict:(id)arg1 request:(id)arg2 clientAuthorization:(id)arg3 ;
-(BOOL)prepareForServicePreflightCheck:(id*)arg1 ;
-(BOOL)prepareForPhotoLibraryCheck:(id)arg1 error:(id*)arg2 ;
-(id)managedEntityName;
-(id)initForNewObject;
-(BOOL)validateInsertIntoPhotoLibrary:(id)arg1 error:(id*)arg2 ;
-(id)createManagedObjectForInsertIntoPhotoLibrary:(id)arg1 error:(id*)arg2 ;
-(PHObjectPlaceholder *)placeholderForCreatedSmartAlbum;
-(PLQuery *)userQuery;
-(void)setUserQuery:(PLQuery *)arg1 ;
@end

