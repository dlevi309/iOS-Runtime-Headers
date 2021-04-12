/*
* Generated on Thursday, January 14, 2021 at 2:27:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsUI.framework/CloudDocsUI
*/


@protocol OS_dispatch_queue;
@class NSObject, NSMutableArray, NSOperationQueue, NSArray;

@interface _UIDocumentPickerContainerModel : NSObject {

	NSObject*<OS_dispatch_queue> _underlyingQueue;
	int _sortOrder;
	NSMutableArray* _updateHandlers;
	NSOperationQueue* _thumbnailQueue;

}

@property (nonatomic,retain) NSMutableArray * updateHandlers;                //@synthesize updateHandlers=_updateHandlers - In the implementation block
@property (nonatomic,retain) NSOperationQueue * thumbnailQueue;              //@synthesize thumbnailQueue=_thumbnailQueue - In the implementation block
@property (nonatomic,readonly) NSArray * modelObjects; 
@property (nonatomic,copy,readonly) NSArray * pickableTypes; 
@property (nonatomic,readonly) unsigned long long pickerMode; 
@property (assign,nonatomic) int sortOrder;                                  //@synthesize sortOrder=_sortOrder - In the implementation block
@property (nonatomic,readonly) BOOL afterInitialUpdate; 
-(int)sortOrder;
-(id)init;
-(id)displayTitle;
-(void)setSortOrder:(int)arg1 ;
-(NSArray *)modelObjects;
-(NSMutableArray *)updateHandlers;
-(void)setUpdateHandlers:(NSMutableArray *)arg1 ;
-(void)dealloc;
-(NSOperationQueue *)thumbnailQueue;
-(void)setThumbnailQueue:(NSOperationQueue *)arg1 ;
-(void)startMonitoringChanges;
-(void)stopMonitoringChanges;
-(NSArray *)pickableTypes;
-(unsigned long long)pickerMode;
-(BOOL)afterInitialUpdate;
-(void)updateSortDescriptors;
-(void)refreshItem:(id)arg1 thumbnailOnly:(BOOL)arg2 ;
@end

