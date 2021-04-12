/*
* Generated on Monday, March 1, 2021 at 2:35:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Osprey.framework/Osprey
*/


@protocol OS_dispatch_queue;
@class NSObject;

@interface OspreyKeychain : NSObject {

	NSObject*<OS_dispatch_queue> _queue;

}
+(id)sharedInstance;
-(id)init;
-(void)fetchDataWithIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)saveData:(id)arg1 withIdentifier:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)deleteDataWithIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)saveData:(id)arg1 withIdentifier:(id)arg2 ;
-(BOOL)deleteDataWithIdentifier:(id)arg1 ;
-(id)fetchDataWithIdentifier:(id)arg1 ;
-(BOOL)_saveData:(id)arg1 withIdentifier:(id)arg2 ;
-(id)_fetchDataWithIdentifier:(id)arg1 ;
-(BOOL)_deleteData:(id)arg1 ;
-(id)createKeychainQuery;
@end

