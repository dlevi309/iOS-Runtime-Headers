/*
* Generated on Thursday, January 14, 2021 at 2:21:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/

#import <libobjc.A.dylib/FCPrivateDataSyncManager.h>

@protocol FCPrivateZoneSyncManagerDelegate;
@class CKRecordZoneID, NSArray, NTPBPrivateZoneSyncState, NSString;

@interface FCPrivateZoneSyncManager : NSObject <FCPrivateDataSyncManager> {

	BOOL _requiresBatchedSync;
	CKRecordZoneID* _recordZoneID;
	id<FCPrivateZoneSyncManagerDelegate> _delegate;
	NSArray* _desiredKeys;
	NTPBPrivateZoneSyncState* _currentState;

}

@property (nonatomic,readonly) NSArray * desiredKeys;                                           //@synthesize desiredKeys=_desiredKeys - In the implementation block
@property (nonatomic,readonly) BOOL requiresBatchedSync;                                        //@synthesize requiresBatchedSync=_requiresBatchedSync - In the implementation block
@property (nonatomic,copy,readonly) NTPBPrivateZoneSyncState * currentState;                    //@synthesize currentState=_currentState - In the implementation block
@property (nonatomic,copy,readonly) CKRecordZoneID * recordZoneID;                              //@synthesize recordZoneID=_recordZoneID - In the implementation block
@property (assign,nonatomic,__weak) id<FCPrivateZoneSyncManagerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)isDirty;
-(id)init;
-(NTPBPrivateZoneSyncState *)currentState;
-(id<FCPrivateZoneSyncManagerDelegate>)delegate;
-(void)setDelegate:(id<FCPrivateZoneSyncManagerDelegate>)arg1 ;
-(void)markAsDirty;
-(NSArray *)desiredKeys;
-(CKRecordZoneID *)recordZoneID;
-(void)notifyObservers;
-(BOOL)requiresBatchedSync;
-(id)initWithRecordZoneID:(id)arg1 desiredKeys:(id)arg2 requiresBatchedSync:(BOOL)arg3 currentState:(id)arg4 ;
-(void)_stateDidChange;
-(BOOL)isAwaitingFirstSync;
-(void)fetchChangesWithContext:(id)arg1 qualityOfService:(long long)arg2 completionHandler:(/*^block*/id)arg3 ;
@end

