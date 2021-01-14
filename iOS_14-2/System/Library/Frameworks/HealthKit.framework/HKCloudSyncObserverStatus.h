/*
* Generated on Thursday, January 14, 2021 at 2:21:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
*/

#import <HealthKit/HealthKit-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSDate, NSError;

@interface HKCloudSyncObserverStatus : NSObject <NSSecureCoding, NSCopying> {

	BOOL _syncEnabled;
	NSDate* _lastPullDate;
	NSDate* _lastPushDate;
	NSDate* _lastPulledUpdateDate;
	NSDate* _restoreCompletionDate;
	NSError* _errorRequiringUserAction;
	long long _dataUploadRequestStatus;
	NSDate* _dataUploadRequestStartDate;
	NSDate* _dataUploadRequestCompletionDate;

}

@property (assign,nonatomic) BOOL syncEnabled;                                    //@synthesize syncEnabled=_syncEnabled - In the implementation block
@property (nonatomic,copy) NSDate * lastPullDate;                                 //@synthesize lastPullDate=_lastPullDate - In the implementation block
@property (nonatomic,copy) NSDate * lastPushDate;                                 //@synthesize lastPushDate=_lastPushDate - In the implementation block
@property (nonatomic,copy) NSDate * lastPulledUpdateDate;                         //@synthesize lastPulledUpdateDate=_lastPulledUpdateDate - In the implementation block
@property (nonatomic,copy) NSDate * restoreCompletionDate;                        //@synthesize restoreCompletionDate=_restoreCompletionDate - In the implementation block
@property (nonatomic,copy) NSError * errorRequiringUserAction;                    //@synthesize errorRequiringUserAction=_errorRequiringUserAction - In the implementation block
@property (assign,nonatomic) long long dataUploadRequestStatus;                   //@synthesize dataUploadRequestStatus=_dataUploadRequestStatus - In the implementation block
@property (nonatomic,copy) NSDate * dataUploadRequestStartDate;                   //@synthesize dataUploadRequestStartDate=_dataUploadRequestStartDate - In the implementation block
@property (nonatomic,copy) NSDate * dataUploadRequestCompletionDate;              //@synthesize dataUploadRequestCompletionDate=_dataUploadRequestCompletionDate - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithSyncEnabled:(BOOL)arg1 lastPullDate:(id)arg2 lastPushDate:(id)arg3 lastPulledUpdateDate:(id)arg4 restoreCompletionDate:(id)arg5 errorRequiringUserAction:(id)arg6 dataUploadRequestStatus:(long long)arg7 dataUploadRequestStartDate:(id)arg8 dataUploadRequestCompletionDate:(id)arg9 ;
-(id)init;
-(BOOL)syncEnabled;
-(NSDate *)lastPullDate;
-(void)setLastPullDate:(NSDate *)arg1 ;
-(void)setLastPushDate:(NSDate *)arg1 ;
-(void)setRestoreCompletionDate:(NSDate *)arg1 ;
-(void)setErrorRequiringUserAction:(NSError *)arg1 ;
-(void)setDataUploadRequestStatus:(long long)arg1 ;
-(void)setDataUploadRequestStartDate:(NSDate *)arg1 ;
-(void)setDataUploadRequestCompletionDate:(NSDate *)arg1 ;
-(NSDate *)lastPushDate;
-(NSDate *)lastPulledUpdateDate;
-(void)setLastPulledUpdateDate:(NSDate *)arg1 ;
-(NSDate *)restoreCompletionDate;
-(NSError *)errorRequiringUserAction;
-(long long)dataUploadRequestStatus;
-(NSDate *)dataUploadRequestStartDate;
-(NSDate *)dataUploadRequestCompletionDate;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(void)setSyncEnabled:(BOOL)arg1 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

