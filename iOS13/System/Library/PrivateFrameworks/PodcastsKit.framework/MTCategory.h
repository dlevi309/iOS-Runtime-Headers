/*
* Generated on Monday, March 1, 2021 at 2:35:12 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PodcastsKit.framework/PodcastsKit
*/

#import <CoreData/NSManagedObject.h>

@class NSString;

@interface MTCategory : NSManagedObject

@property (nonatomic,retain) NSString * name; 
@property (assign,nonatomic) long long parentStoreId; 
@property (nonatomic,retain) NSString * parentUuid; 
@property (assign,nonatomic) long long storeId; 
@property (nonatomic,retain) NSString * uuid; 
+(id)categoryForName:(id)arg1 managedObjectContext:(id)arg2 insertIfNeeded:(BOOL)arg3 ;
+(id)categoryUuidForName:(id)arg1 managedObjectContext:(id)arg2 ;
+(id)rootCategoriesInManagedObjectContext:(id)arg1 ;
-(void)setParentUuid:(NSString *)arg1 ;
-(id)podcastUuids;
-(void)addPodcastUuid:(id)arg1 ;
-(id)subCategoryIds;
-(id)parentId;
@end

