/*
* Generated on Thursday, January 14, 2021 at 2:22:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/

#import <PhotoLibraryServices/PLManagedObject.h>

@class NSNumber, NSMutableSet, PLManagedFolder, PLManagedAsset;

@interface _PLGenericAlbum : PLManagedObject

@property (assign,nonatomic) int pendingItemsCount; 
@property (assign,nonatomic) int pendingItemsType; 
@property (nonatomic,retain) NSNumber * kind; 
@property (nonatomic,retain) NSMutableSet * albumLists; 
@property (nonatomic,retain) PLManagedFolder * parentFolder; 
@property (assign,nonatomic) long long syncEventOrderKey; 
@property (assign,nonatomic) int customSortKey; 
@property (assign,nonatomic) BOOL customSortAscending; 
@property (nonatomic,retain) PLManagedAsset * customKeyAsset; 
@property (assign,nonatomic) int cachedCount; 
@property (assign,nonatomic) int cachedPhotosCount; 
@property (assign,nonatomic) int cachedVideosCount; 
+(id)entityName;
+(id)keyPathsForValuesAffectingValueForKey:(id)arg1 ;
@end

