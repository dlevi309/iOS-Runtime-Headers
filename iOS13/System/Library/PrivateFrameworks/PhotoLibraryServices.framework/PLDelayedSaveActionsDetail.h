/*
* Generated on Monday, March 1, 2021 at 2:30:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray, NSDictionary, NSSet;

@interface PLDelayedSaveActionsDetail : NSObject <NSSecureCoding> {

	NSArray* _cloudFeedAlbumUpdates;
	NSArray* _cloudFeedAssetInserts;
	NSArray* _cloudFeedAssetUpdates;
	NSArray* _cloudFeedCommentInserts;
	NSArray* _cloudFeedInvitationRecordUpdates;
	NSArray* _cloudFeedDeletionEntries;
	NSArray* _momentInsertsAndUpdates;
	NSDictionary* _momentDeletes;
	NSArray* _updatedAssetIDsForHighlights;
	NSArray* _updatedMomentIDsForHighlights;
	NSArray* _dupeAnalysisNormalInserts;
	NSArray* _dupeAnalysisCloudInserts;
	NSArray* _assetsForFilesystemPersistency;
	NSDictionary* _searchIndexUpdates;
	NSSet* _albumCountsAndDateRangeUpdates;
	NSDictionary* _assetsForAnalysis;
	NSSet* _assetsForDuetDelete;

}

@property (nonatomic,copy) NSArray * cloudFeedAlbumUpdates;                         //@synthesize cloudFeedAlbumUpdates=_cloudFeedAlbumUpdates - In the implementation block
@property (nonatomic,copy) NSArray * cloudFeedAssetInserts;                         //@synthesize cloudFeedAssetInserts=_cloudFeedAssetInserts - In the implementation block
@property (nonatomic,copy) NSArray * cloudFeedAssetUpdates;                         //@synthesize cloudFeedAssetUpdates=_cloudFeedAssetUpdates - In the implementation block
@property (nonatomic,copy) NSArray * cloudFeedCommentInserts;                       //@synthesize cloudFeedCommentInserts=_cloudFeedCommentInserts - In the implementation block
@property (nonatomic,copy) NSArray * cloudFeedInvitationRecordUpdates;              //@synthesize cloudFeedInvitationRecordUpdates=_cloudFeedInvitationRecordUpdates - In the implementation block
@property (nonatomic,copy) NSArray * cloudFeedDeletionEntries;                      //@synthesize cloudFeedDeletionEntries=_cloudFeedDeletionEntries - In the implementation block
@property (nonatomic,copy) NSArray * momentInsertsAndUpdates;                       //@synthesize momentInsertsAndUpdates=_momentInsertsAndUpdates - In the implementation block
@property (nonatomic,copy) NSDictionary * momentDeletes;                            //@synthesize momentDeletes=_momentDeletes - In the implementation block
@property (nonatomic,copy) NSArray * updatedAssetIDsForHighlights;                  //@synthesize updatedAssetIDsForHighlights=_updatedAssetIDsForHighlights - In the implementation block
@property (nonatomic,copy) NSArray * updatedMomentIDsForHighlights;                 //@synthesize updatedMomentIDsForHighlights=_updatedMomentIDsForHighlights - In the implementation block
@property (nonatomic,readonly) BOOL shouldHandleMoments; 
@property (nonatomic,copy) NSArray * dupeAnalysisNormalInserts;                     //@synthesize dupeAnalysisNormalInserts=_dupeAnalysisNormalInserts - In the implementation block
@property (nonatomic,copy) NSArray * dupeAnalysisCloudInserts;                      //@synthesize dupeAnalysisCloudInserts=_dupeAnalysisCloudInserts - In the implementation block
@property (nonatomic,copy) NSArray * assetsForFilesystemPersistency;                //@synthesize assetsForFilesystemPersistency=_assetsForFilesystemPersistency - In the implementation block
@property (nonatomic,copy) NSDictionary * searchIndexUpdates;                       //@synthesize searchIndexUpdates=_searchIndexUpdates - In the implementation block
@property (nonatomic,copy) NSSet * albumCountsAndDateRangeUpdates;                  //@synthesize albumCountsAndDateRangeUpdates=_albumCountsAndDateRangeUpdates - In the implementation block
@property (nonatomic,copy) NSDictionary * assetsForAnalysis;                        //@synthesize assetsForAnalysis=_assetsForAnalysis - In the implementation block
@property (nonatomic,copy) NSSet * assetsForDuetDelete;                             //@synthesize assetsForDuetDelete=_assetsForDuetDelete - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)_decodeMomentDeletes:(id)arg1 urlToObjectID:(/*^block*/id)arg2 ;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)shouldHandleMoments;
-(NSSet *)assetsForDuetDelete;
-(NSDictionary *)assetsForAnalysis;
-(NSSet *)albumCountsAndDateRangeUpdates;
-(NSDictionary *)searchIndexUpdates;
-(NSArray *)assetsForFilesystemPersistency;
-(NSArray *)dupeAnalysisCloudInserts;
-(NSArray *)dupeAnalysisNormalInserts;
-(NSArray *)cloudFeedDeletionEntries;
-(NSArray *)cloudFeedInvitationRecordUpdates;
-(NSArray *)cloudFeedCommentInserts;
-(NSArray *)cloudFeedAssetUpdates;
-(NSArray *)cloudFeedAssetInserts;
-(NSArray *)cloudFeedAlbumUpdates;
-(NSArray *)updatedMomentIDsForHighlights;
-(NSArray *)updatedAssetIDsForHighlights;
-(NSDictionary *)momentDeletes;
-(NSArray *)momentInsertsAndUpdates;
-(void)setAssetsForDuetDelete:(NSSet *)arg1 ;
-(void)setAssetsForAnalysis:(NSDictionary *)arg1 ;
-(void)setAlbumCountsAndDateRangeUpdates:(NSSet *)arg1 ;
-(void)setSearchIndexUpdates:(NSDictionary *)arg1 ;
-(void)setAssetsForFilesystemPersistency:(NSArray *)arg1 ;
-(void)setDupeAnalysisCloudInserts:(NSArray *)arg1 ;
-(void)setDupeAnalysisNormalInserts:(NSArray *)arg1 ;
-(void)setUpdatedMomentIDsForHighlights:(NSArray *)arg1 ;
-(void)setUpdatedAssetIDsForHighlights:(NSArray *)arg1 ;
-(void)setMomentDeletes:(NSDictionary *)arg1 ;
-(void)setMomentInsertsAndUpdates:(NSArray *)arg1 ;
-(void)setCloudFeedDeletionEntries:(NSArray *)arg1 ;
-(void)setCloudFeedInvitationRecordUpdates:(NSArray *)arg1 ;
-(void)setCloudFeedCommentInserts:(NSArray *)arg1 ;
-(void)setCloudFeedAssetUpdates:(NSArray *)arg1 ;
-(void)setCloudFeedAssetInserts:(NSArray *)arg1 ;
-(void)setCloudFeedAlbumUpdates:(NSArray *)arg1 ;
-(id)_encodableMomentDeletes;
@end

