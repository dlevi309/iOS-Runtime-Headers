/*
* Generated on Monday, March 1, 2021 at 2:32:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
	NSDate* _restoreCompletionDate;
	NSError* _errorRequiringUserAction;

}

@property (assign,nonatomic) BOOL syncEnabled;                              //@synthesize syncEnabled=_syncEnabled - In the implementation block
@property (nonatomic,copy) NSDate * lastPullDate;                           //@synthesize lastPullDate=_lastPullDate - In the implementation block
@property (nonatomic,copy) NSDate * lastPushDate;                           //@synthesize lastPushDate=_lastPushDate - In the implementation block
@property (nonatomic,copy) NSDate * restoreCompletionDate;                  //@synthesize restoreCompletionDate=_restoreCompletionDate - In the implementation block
@property (nonatomic,copy) NSError * errorRequiringUserAction;              //@synthesize errorRequiringUserAction=_errorRequiringUserAction - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setSyncEnabled:(BOOL)arg1 ;
-(void)setLastPullDate:(NSDate *)arg1 ;
-(void)setLastPushDate:(NSDate *)arg1 ;
-(void)setRestoreCompletionDate:(NSDate *)arg1 ;
-(void)setErrorRequiringUserAction:(NSError *)arg1 ;
-(BOOL)syncEnabled;
-(NSDate *)lastPullDate;
-(NSDate *)lastPushDate;
-(NSDate *)restoreCompletionDate;
-(NSError *)errorRequiringUserAction;
@end

