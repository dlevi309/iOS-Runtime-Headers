/*
* Generated on Thursday, January 14, 2021 at 2:22:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setUserQuery:(PLQuery *)arg1 ;
-(id)initWithXPCDict:(id)arg1 request:(id)arg2 clientAuthorization:(id)arg3 ;
-(id)createManagedObjectForInsertIntoPhotoLibrary:(id)arg1 error:(id*)arg2 ;
-(void)setTitle:(NSString *)arg1 ;
-(BOOL)applyMutationsToManagedObject:(id)arg1 photoLibrary:(id)arg2 error:(id*)arg3 ;
-(BOOL)validateInsertIntoPhotoLibrary:(id)arg1 error:(id*)arg2 ;
-(PLQuery *)userQuery;
-(id)description;
-(unsigned)customSortKey;
-(void)setCustomSortKey:(unsigned)arg1 ;
-(BOOL)customSortAscending;
-(void)setCustomSortAscending:(BOOL)arg1 ;
-(PHObjectPlaceholder *)placeholderForCreatedSmartAlbum;
-(void)encodeToXPCDict:(id)arg1 ;
-(id)initWithUUID:(id)arg1 objectID:(id)arg2 ;
-(BOOL)validateMutationsToManagedObject:(id)arg1 error:(id*)arg2 ;
-(id)initForNewObject;
-(BOOL)allowMutationToManagedObject:(id)arg1 propertyKey:(id)arg2 error:(id*)arg3 ;
-(id)managedEntityName;
-(NSString *)title;
@end

