/*
* Generated on Monday, March 1, 2021 at 2:34:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/BookDataStore.framework/BookDataStore
*/


@protocol OS_os_transaction;
@class NSObject;

@interface BDSOSTransaction : NSObject {

	NSObject*<OS_os_transaction> _osTransaction;

}

@property (nonatomic,retain) NSObject*<OS_os_transaction> osTransaction;              //@synthesize osTransaction=_osTransaction - In the implementation block
-(void)dealloc;
-(void)endTransaction;
-(void)setOsTransaction:(NSObject*<OS_os_transaction>)arg1 ;
-(NSObject*<OS_os_transaction>)osTransaction;
-(id)initWithTransactionName:(const char*)arg1 ;
@end

