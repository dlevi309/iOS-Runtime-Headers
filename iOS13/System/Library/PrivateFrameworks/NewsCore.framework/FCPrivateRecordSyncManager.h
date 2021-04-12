/*
* Generated on Monday, March 1, 2021 at 2:32:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/

#import <libobjc.A.dylib/FCPrivateDataSyncManager.h>

@protocol FCPrivateRecordSyncManagerDelegate;
@class CKRecordID, NSArray, NTPBPrivateRecordSyncState, NSString;

@interface FCPrivateRecordSyncManager : NSObject <FCPrivateDataSyncManager> {

	CKRecordID* _recordID;
	id<FCPrivateRecordSyncManagerDelegate> _delegate;
	NSArray* _desiredKeys;
	NTPBPrivateRecordSyncState* _currentState;

}

@property (nonatomic,readonly) NSArray * desiredKeys;                                             //@synthesize desiredKeys=_desiredKeys - In the implementation block
@property (nonatomic,copy,readonly) NTPBPrivateRecordSyncState * currentState;                    //@synthesize currentState=_currentState - In the implementation block
@property (nonatomic,copy,readonly) CKRecordID * recordID;                                        //@synthesize recordID=_recordID - In the implementation block
@property (assign,nonatomic,__weak) id<FCPrivateRecordSyncManagerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(id<FCPrivateRecordSyncManagerDelegate>)delegate;
-(void)setDelegate:(id<FCPrivateRecordSyncManagerDelegate>)arg1 ;
-(CKRecordID *)recordID;
-(NTPBPrivateRecordSyncState *)currentState;
-(BOOL)isDirty;
-(NSArray *)desiredKeys;
-(void)notifyObservers;
-(void)markAsDirty;
-(void)_stateDidChange;
-(BOOL)isAwaitingFirstSync;
-(void)fetchChangesWithContext:(id)arg1 qualityOfService:(long long)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)initWithRecordID:(id)arg1 desiredKeys:(id)arg2 currentState:(id)arg3 ;
@end

