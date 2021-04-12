/*
* Generated on Monday, March 1, 2021 at 2:35:15 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ScreenReaderOutput.framework/ScreenReaderOutput
*/


@class NSData;

@interface SCROBrailleDisplayManagerStatus : NSObject {

	BOOL _currentAnnouncementUnread;
	BOOL _anyUnreadAnnouncements;
	int _virtualAlignment;
	NSData* _aggregatedData;
	long long _masterStatusCellIndex;

}

@property (nonatomic,retain) NSData * aggregatedData;                      //@synthesize aggregatedData=_aggregatedData - In the implementation block
@property (assign,nonatomic) int virtualAlignment;                         //@synthesize virtualAlignment=_virtualAlignment - In the implementation block
@property (assign,nonatomic) long long masterStatusCellIndex;              //@synthesize masterStatusCellIndex=_masterStatusCellIndex - In the implementation block
@property (assign,nonatomic) BOOL currentAnnouncementUnread;               //@synthesize currentAnnouncementUnread=_currentAnnouncementUnread - In the implementation block
@property (assign,nonatomic) BOOL anyUnreadAnnouncements;                  //@synthesize anyUnreadAnnouncements=_anyUnreadAnnouncements - In the implementation block
-(void)setMasterStatusCellIndex:(long long)arg1 ;
-(long long)masterStatusCellIndex;
-(NSData *)aggregatedData;
-(void)setAggregatedData:(NSData *)arg1 ;
-(int)virtualAlignment;
-(void)setVirtualAlignment:(int)arg1 ;
-(BOOL)currentAnnouncementUnread;
-(void)setCurrentAnnouncementUnread:(BOOL)arg1 ;
-(BOOL)anyUnreadAnnouncements;
-(void)setAnyUnreadAnnouncements:(BOOL)arg1 ;
@end

