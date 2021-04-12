/*
* Generated on Monday, March 1, 2021 at 2:31:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
*/


@protocol TUCallHistoryManagerDataSource;
@interface TUCallHistoryManager : NSObject {

	id<TUCallHistoryManagerDataSource> _dataSource;

}

@property (nonatomic,readonly) id<TUCallHistoryManagerDataSource> dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
-(id)init;
-(void)dealloc;
-(id)initWithDataSource:(id)arg1 ;
-(id<TUCallHistoryManagerDataSource>)dataSource;
-(void)updateOutgoingLocalParticipantUUID:(id)arg1 forCallsWithOutgoingLocalParticipantUUID:(id)arg2 ;
-(void)updateOutgoingLocalParticipantUUID:(id)arg1 forCallsWithLocalParticipantUUID:(id)arg2 ;
@end

