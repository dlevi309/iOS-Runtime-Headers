/*
* Generated on Thursday, January 14, 2021 at 2:22:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/


#import <PhotosUICore/PhotosUICore-Structs.h>
@interface PXPeopleBootstrap : NSObject
+(CGSize)preferredBootstrapSize;
+(void)performBootstrapWithSourcePerson:(id)arg1 context:(id)arg2 synchronous:(BOOL)arg3 completion:(/*^block*/id)arg4 ;
+(void)_addToPeopleAlbumWithChangeRequest:(id)arg1 ;
+(void)_favoritePersonWithChangeRequest:(id)arg1 ;
+(void)_unfavoritePersonWithChangeRequest:(id)arg1 ;
+(void)_namePerson:(id)arg1 context:(id)arg2 withChangeRequest:(id)arg3 ;
+(void)_namePerson:(id)arg1 toString:(id)arg2 withChangeRequest:(id)arg3 ;
+(void)_mergePerson:(id)arg1 context:(id)arg2 toPerson:(id)arg3 ;
+(void)_namePerson:(id)arg1 toContact:(id)arg2 withChangeRequest:(id)arg3 ;
@end

