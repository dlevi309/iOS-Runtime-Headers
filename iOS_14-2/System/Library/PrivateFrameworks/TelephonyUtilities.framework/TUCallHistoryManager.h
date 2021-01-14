/*
* Generated on Thursday, January 14, 2021 at 2:23:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
*/


@protocol TUCallHistoryManagerDataSource;
@interface TUCallHistoryManager : NSObject {

	id<TUCallHistoryManagerDataSource> _dataSource;

}

@property (nonatomic,readonly) id<TUCallHistoryManagerDataSource> dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
-(id)init;
-(id)initWithDataSource:(id)arg1 ;
-(id<TUCallHistoryManagerDataSource>)dataSource;
-(void)updateOutgoingLocalParticipantUUID:(id)arg1 forCallsWithLocalParticipantUUID:(id)arg2 ;
-(void)updateOutgoingLocalParticipantUUID:(id)arg1 forCallsWithOutgoingLocalParticipantUUID:(id)arg2 ;
-(void)dealloc;
@end

