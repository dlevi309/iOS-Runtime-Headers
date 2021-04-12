/*
* Generated on Monday, March 1, 2021 at 2:30:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
+(id)keyPathsForValuesAffectingValueForKey:(id)arg1 ;
+(id)entityName;
@end

