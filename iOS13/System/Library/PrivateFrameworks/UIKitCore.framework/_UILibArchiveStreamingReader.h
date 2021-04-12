/*
* Generated on Monday, March 1, 2021 at 2:30:13 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


#import <UIKitCore/UIKitCore-Structs.h>
@class NSString, NSMutableArray, NSError;

@interface _UILibArchiveStreamingReader : NSObject {

	long long _state;
	ui_archiveRef _laArchive;
	int _laArchiveType;
	NSString* _laArchiveTypeName;
	int _laProcessingState;
	long long _nextLoadedItemEntrySequenceIndex;
	NSMutableArray* _readableLoadedItemEntryQueue;
	NSError* _readError;
	NSString* _archivePath;
	ui_archiveRef _underlyingArchive;
	long long _appleDoubleIdentificationType;

}

@property (nonatomic,readonly) NSString * archivePath;                                    //@synthesize archivePath=_archivePath - In the implementation block
@property (nonatomic,readonly) ui_archiveRef underlyingArchive;                           //@synthesize underlyingArchive=_underlyingArchive - In the implementation block
@property (assign,nonatomic) long long appleDoubleIdentificationType;                     //@synthesize appleDoubleIdentificationType=_appleDoubleIdentificationType - In the implementation block
@property (nonatomic,readonly) NSString * openedArchiveUnderlyingFormatName; 
-(BOOL)open;
-(void)close;
-(id)initForReadingArchivePath:(id)arg1 ;
-(void)setAppleDoubleIdentificationType:(long long)arg1 ;
-(BOOL)readAllItemsWithBlock:(/*^block*/id)arg1 error:(id*)arg2 ;
-(ui_archiveRef)underlyingArchive;
-(NSString *)archivePath;
-(BOOL)_openArchive;
-(void)_closeArchive;
-(BOOL)_readItemsWithShouldVisitBlock:(/*^block*/id)arg1 visitorBlock:(/*^block*/id)arg2 error:(id*)arg3 ;
-(BOOL)_shouldReportAsLogicalItem:(id)arg1 withConfirmedAppleDoubleFiles:(id)arg2 ;
-(id)_nextSimpleItemFromPendingQueueOrLibArchiveRead;
-(BOOL)_shouldReportAsAppleDoubleItem:(id)arg1 withConfirmedAppleDoubleFiles:(id)arg2 ;
-(id)_loadItemByReadingAttributesFromUnderlyingArchiveEntry:(ui_archive_entryRef)arg1 ;
-(BOOL)readLogicalItemsWithBlock:(/*^block*/id)arg1 error:(id*)arg2 ;
-(NSString *)openedArchiveUnderlyingFormatName;
-(id)_debugLoadAndPrintAllRemainingItems;
-(long long)appleDoubleIdentificationType;
@end

