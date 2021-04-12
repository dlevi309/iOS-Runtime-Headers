/*
* Generated on Monday, March 1, 2021 at 2:34:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
*/


@class NSDate, NSString;

@interface TIMobileAssetSyncState : NSObject {

	BOOL _loadedState;
	long long _status;
	NSDate* _date;
	NSString* _buildVersion;
	long long _attemptCount;

}

@property (assign,nonatomic) long long status;                    //@synthesize status=_status - In the implementation block
@property (nonatomic,copy) NSDate * date;                         //@synthesize date=_date - In the implementation block
@property (nonatomic,copy) NSString * buildVersion;               //@synthesize buildVersion=_buildVersion - In the implementation block
@property (assign,nonatomic) long long attemptCount;              //@synthesize attemptCount=_attemptCount - In the implementation block
+(id)buildVersionString;
-(NSDate *)date;
-(long long)status;
-(void)setDate:(NSDate *)arg1 ;
-(void)setStatus:(long long)arg1 ;
-(NSString *)buildVersion;
-(long long)attemptCount;
-(void)setAttemptCount:(long long)arg1 ;
-(void)setBuildVersion:(NSString *)arg1 ;
-(void)updateState;
-(void)saveState;
-(void)loadStateIfNecessary;
-(BOOL)shouldSyncToRemoteMetadata;
-(void)didSyncToRemoteMetadataWithError:(id)arg1 ;
-(id)initWithDate:(id)arg1 buildVersion:(id)arg2 status:(long long)arg3 attemptCount:(long long)arg4 ;
@end

