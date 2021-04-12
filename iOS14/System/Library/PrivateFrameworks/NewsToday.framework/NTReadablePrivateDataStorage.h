/*
* Generated on Thursday, January 14, 2021 at 2:24:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsToday.framework/NewsToday
*/

#import <libobjc.A.dylib/NTReadablePrivateDataStorage.h>

@protocol NTReadablePrivateDataStorage <NSObject>
@required
-(void)readPrivateDataWithAccessor:(/*^block*/id)arg1;

@end


@class FCFileCoordinatedTodayDropbox, FCFileCoordinatedTodayPrivateDataTransactionQueue, NSString;

@interface NTReadablePrivateDataStorage : NSObject <NTReadablePrivateDataStorage> {

	FCFileCoordinatedTodayDropbox* _dropbox;
	FCFileCoordinatedTodayPrivateDataTransactionQueue* _transactionQueue;

}

@property (nonatomic,retain) FCFileCoordinatedTodayDropbox * dropbox;                                           //@synthesize dropbox=_dropbox - In the implementation block
@property (nonatomic,retain) FCFileCoordinatedTodayPrivateDataTransactionQueue * transactionQueue;              //@synthesize transactionQueue=_transactionQueue - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)readPrivateDataWithAccessor:(/*^block*/id)arg1 ;
-(FCFileCoordinatedTodayPrivateDataTransactionQueue *)transactionQueue;
-(FCFileCoordinatedTodayDropbox *)dropbox;
-(void)setDropbox:(FCFileCoordinatedTodayDropbox *)arg1 ;
-(void)setTransactionQueue:(FCFileCoordinatedTodayPrivateDataTransactionQueue *)arg1 ;
-(id)initWithDropbox:(id)arg1 transactionQueue:(id)arg2 ;
@end

