/*
* Generated on Thursday, January 14, 2021 at 2:26:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ExposureNotificationDaemon.framework/ExposureNotificationDaemon
*/


@protocol ENRegionHistoryManagerDelegate, OS_dispatch_queue;
@class NSString, ENSecureArchiveFileWrapper, ENRegionHistory, NSObject;

@interface ENRegionHistoryManager : NSObject {

	int _resetToken;
	id<ENRegionHistoryManagerDelegate> _delegate;
	long long _fileStatus;
	NSString* _directoryPath;
	ENSecureArchiveFileWrapper* _regionHistoryFileWrapper;
	ENRegionHistory* _regionHistory;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (nonatomic,copy) NSString * directoryPath;                                             //@synthesize directoryPath=_directoryPath - In the implementation block
@property (nonatomic,retain) ENSecureArchiveFileWrapper * regionHistoryFileWrapper;              //@synthesize regionHistoryFileWrapper=_regionHistoryFileWrapper - In the implementation block
@property (nonatomic,retain) ENRegionHistory * regionHistory;                                    //@synthesize regionHistory=_regionHistory - In the implementation block
@property (assign,nonatomic) int resetToken;                                                     //@synthesize resetToken=_resetToken - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                                 //@synthesize queue=_queue - In the implementation block
@property (assign,nonatomic,__weak) id<ENRegionHistoryManagerDelegate> delegate;                 //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) long long fileStatus;                                               //@synthesize fileStatus=_fileStatus - In the implementation block
+(id)regionHistoryFileStatusToString:(long long)arg1 ;
-(id<ENRegionHistoryManagerDelegate>)delegate;
-(id)initWithDelegate:(id)arg1 queue:(id)arg2 ;
-(int)resetToken;
-(void)setDelegate:(id<ENRegionHistoryManagerDelegate>)arg1 ;
-(void)setDirectoryPath:(NSString *)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSString *)directoryPath;
-(void)dealloc;
-(void)addRegionVisit:(id)arg1 ;
-(ENRegionHistory *)regionHistory;
-(BOOL)purgeAllRegionHistoryWithError:(id*)arg1 ;
-(BOOL)purgeRegionsOlderThanDate:(id)arg1 error:(id*)arg2 ;
-(void)updateFileStatus;
-(long long)fileStatus;
-(id)getAllRegionVisits;
-(id)getAllRegions;
-(id)initWithDelegate:(id)arg1 queue:(id)arg2 directoryPath:(id)arg3 ;
-(void)resetRegionHistory;
-(void)setupPersistedRegionHistory;
-(void)setFileStatus:(long long)arg1 ;
-(void)setRegionHistoryFileWrapper:(ENSecureArchiveFileWrapper *)arg1 ;
-(ENSecureArchiveFileWrapper *)regionHistoryFileWrapper;
-(id)mergeRegionHistoryOnDisk:(id)arg1 inMemory:(id)arg2 ;
-(void)setRegionHistory:(ENRegionHistory *)arg1 ;
-(void)setResetToken:(int)arg1 ;
@end

