/*
* Generated on Thursday, January 14, 2021 at 2:25:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

