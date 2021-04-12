/*
* Generated on Monday, March 1, 2021 at 2:34:16 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
*/


@class DESRecordStore;

@interface TITypingDESRecordWriter : NSObject {

	DESRecordStore* _typingDataStore;

}

@property (nonatomic,retain) DESRecordStore * typingDataStore;              //@synthesize typingDataStore=_typingDataStore - In the implementation block
-(id)init;
-(void)storeTypingSession:(id)arg1 containsCP:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(BOOL)shouldRecordToDES;
-(void)storeAlignedSession:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)fetchRecords:(/*^block*/id)arg1 ;
-(void)clearStoredRecordsWithCompletionHandler:(/*^block*/id)arg1 ;
-(DESRecordStore *)typingDataStore;
-(void)setTypingDataStore:(DESRecordStore *)arg1 ;
@end

