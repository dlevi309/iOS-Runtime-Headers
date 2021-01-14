/*
* Generated on Thursday, January 14, 2021 at 2:23:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
*/

#import <libobjc.A.dylib/AVTStickerTaskScheduler.h>

@protocol AVTStickerTaskScheduler <AVTTaskScheduler>
@required
-(void)cancelPickerTask:(/*^block*/id)arg1 avatarRecordIdentifier:(id)arg2;
-(void)setSelectedAvatarRecordIdentifier:(id)arg1;
-(void)cancelStickerSheetTasksForAvatarRecordIdentifier:(id)arg1;
-(void)setVisibleIndexPaths:(id)arg1;
-(void)scheduleStickerTask:(id)arg1;

@end


@protocol OS_dispatch_queue, AVTAvatarRecordDataSource, AVTUILogger;
@class NSObject, NSMutableDictionary, NSArray, NSString;

@interface AVTStickerTaskScheduler : NSObject <AVTStickerTaskScheduler> {

	NSObject*<OS_dispatch_queue> _stateLock;
	NSMutableDictionary* _stickerPickerTasks;
	NSMutableDictionary* _stickerSheetPlaceholderTasks;
	NSMutableDictionary* _stickerSheetsTasks;
	id<AVTAvatarRecordDataSource> _recordDataSource;
	NSArray* _allAvatarRecordIdentifiers;
	NSString* _selectedAvatarRecordIdentifier;
	NSArray* _sortedVisibleIndexPaths;
	id<AVTUILogger> _logger;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> stateLock;                          //@synthesize stateLock=_stateLock - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * stickerPickerTasks;                        //@synthesize stickerPickerTasks=_stickerPickerTasks - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * stickerSheetPlaceholderTasks;              //@synthesize stickerSheetPlaceholderTasks=_stickerSheetPlaceholderTasks - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * stickerSheetsTasks;                        //@synthesize stickerSheetsTasks=_stickerSheetsTasks - In the implementation block
@property (nonatomic,readonly) id<AVTAvatarRecordDataSource> recordDataSource;                  //@synthesize recordDataSource=_recordDataSource - In the implementation block
@property (retain) NSArray * allAvatarRecordIdentifiers;                                        //@synthesize allAvatarRecordIdentifiers=_allAvatarRecordIdentifiers - In the implementation block
@property (retain) NSString * selectedAvatarRecordIdentifier;                                   //@synthesize selectedAvatarRecordIdentifier=_selectedAvatarRecordIdentifier - In the implementation block
@property (retain) NSArray * sortedVisibleIndexPaths;                                           //@synthesize sortedVisibleIndexPaths=_sortedVisibleIndexPaths - In the implementation block
@property (nonatomic,readonly) id<AVTUILogger> logger;                                          //@synthesize logger=_logger - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)schedulerWithRecordDataSource:(id)arg1 ;
-(void)startTask:(id)arg1 ;
-(void)performStateWork:(/*^block*/id)arg1 ;
-(void)scheduleTask:(/*^block*/id)arg1 ;
-(void)reloadData;
-(id<AVTUILogger>)logger;
-(id)initWithEnvironment:(id)arg1 recordDataSource:(id)arg2 ;
-(NSMutableDictionary *)stickerPickerTasks;
-(NSMutableDictionary *)stickerSheetPlaceholderTasks;
-(NSMutableDictionary *)stickerSheetsTasks;
-(void)didCompleteTask:(id)arg1 ;
-(id)nextTaskToRunFromStickerPickerTasks:(id)arg1 stickerSheetPlaceholderTasks:(id)arg2 stickerSheetsTasks:(id)arg3 ;
-(void)setSortedVisibleIndexPaths:(NSArray *)arg1 ;
-(void)setAllAvatarRecordIdentifiers:(NSArray *)arg1 ;
-(NSString *)selectedAvatarRecordIdentifier;
-(NSArray *)allAvatarRecordIdentifiers;
-(NSArray *)sortedVisibleIndexPaths;
-(id)selectedPickerThumbnailFromTasksStorage:(id)arg1 selectedAvatarRecordIdentifier:(id)arg2 ;
-(void)cancelPickerTask:(/*^block*/id)arg1 avatarRecordIdentifier:(id)arg2 ;
-(id)selectedSheetPlaceholderFromTasksStorage:(id)arg1 selectedAvatarRecordIdentifier:(id)arg2 ;
-(id)nextVisibleSelectedSheetStickerFromTasksStorage:(id)arg1 selectedAvatarRecordIdentifier:(id)arg2 visibleIndexPaths:(id)arg3 ;
-(id)nextPickerThumbnailFromTasksStorage:(id)arg1 allAvatarRecordIdentifiers:(id)arg2 ;
-(id)nextSelectedSheetStickerFromTasksStorage:(id)arg1 selectedAvatarRecordIdentifier:(id)arg2 ;
-(id)nextSheetPlaceHolderFromTasksStorage:(id)arg1 allAvatarRecordIdentifiers:(id)arg2 ;
-(id)nextSheetStickerFromTasksStorage:(id)arg1 allAvatarRecordIdentifiers:(id)arg2 ;
-(NSObject*<OS_dispatch_queue>)stateLock;
-(void)setSelectedAvatarRecordIdentifier:(NSString *)arg1 ;
-(void)cancelStickerSheetTasksForAvatarRecordIdentifier:(id)arg1 ;
-(void)setVisibleIndexPaths:(id)arg1 ;
-(void)scheduleStickerTask:(id)arg1 ;
-(void)cancelAllTasks;
-(void)cancelTask:(/*^block*/id)arg1 ;
-(void)lowerTaskPriority:(/*^block*/id)arg1 ;
-(id<AVTAvatarRecordDataSource>)recordDataSource;
@end

