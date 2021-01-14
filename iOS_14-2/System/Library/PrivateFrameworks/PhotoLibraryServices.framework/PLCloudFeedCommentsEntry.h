/*
* Generated on Thursday, January 14, 2021 at 2:22:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/

#import <PhotoLibraryServices/PLCloudFeedEntry.h>

@class NSString, NSOrderedSet, NSMutableOrderedSet;

@interface PLCloudFeedCommentsEntry : PLCloudFeedEntry

@property (nonatomic,retain) NSString * entryCloudAssetGUID; 
@property (nonatomic,retain) NSOrderedSet * entryLikeComments; 
@property (nonatomic,retain) NSOrderedSet * entryComments; 
@property (nonatomic,__weak,readonly) NSMutableOrderedSet * mutableEntryLikeComments; 
@property (nonatomic,__weak,readonly) NSMutableOrderedSet * mutableEntryComments; 
+(id)entityName;
-(BOOL)shouldBeRemovedFromPhotoLibrary:(id)arg1 ;
-(NSMutableOrderedSet *)mutableEntryLikeComments;
-(NSMutableOrderedSet *)mutableEntryComments;
@end

