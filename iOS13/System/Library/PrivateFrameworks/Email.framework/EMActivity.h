/*
* Generated on Monday, March 1, 2021 at 2:32:30 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Email.framework/Email
*/

#import <Email/Email-Structs.h>
#import <libobjc.A.dylib/EFLoggable.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol EFCancelable;
@class EMStatusUpdateProvider, NSDictionary, NSDate, NSProgress, NSError, EMActivityObjectID, NSString;

@interface EMActivity : NSObject <EFLoggable, NSSecureCoding> {

	os_unfair_lock_s _lock;
	EMStatusUpdateProvider* _statusUpdateProvider;
	id<EFCancelable> _progressKVOCancellation;
	NSDictionary* _userInfo;
	long long _activityType;
	NSDate* _started;
	NSDate* _finished;
	NSProgress* _progress;
	NSError* _error;
	double _fractionCompleted;
	EMActivityObjectID* _objectID;

}

@property (nonatomic,copy) NSDictionary * userInfo;                     //@synthesize userInfo=_userInfo - In the implementation block
@property (nonatomic,retain) NSProgress * progress;                     //@synthesize progress=_progress - In the implementation block
@property (assign,nonatomic) double fractionCompleted;                  //@synthesize fractionCompleted=_fractionCompleted - In the implementation block
@property (readonly) EMActivityObjectID * objectID;                     //@synthesize objectID=_objectID - In the implementation block
@property (readonly) BOOL needsPersistentHistory; 
@property (readonly) long long activityType;                            //@synthesize activityType=_activityType - In the implementation block
@property (readonly) NSDate * started;                                  //@synthesize started=_started - In the implementation block
@property (readonly) NSDate * finished;                                 //@synthesize finished=_finished - In the implementation block
@property (copy,readonly) NSString * localizedDescription; 
@property (readonly) NSError * error;                                   //@synthesize error=_error - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)keyPathsForValuesAffectingLocalizedDescription;
+(id)log;
-(void)dealloc;
-(NSString *)description;
-(NSString *)localizedDescription;
-(NSDictionary *)userInfo;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSError *)error;
-(NSDate *)finished;
-(NSProgress *)progress;
-(void)setUserInfo:(NSDictionary *)arg1 ;
-(void)setUserInfoObject:(id)arg1 forKey:(id)arg2 ;
-(long long)activityType;
-(double)fractionCompleted;
-(void)setFractionCompleted:(double)arg1 ;
-(EMActivityObjectID *)objectID;
-(void)finishWithError:(id)arg1 ;
-(NSDate *)started;
-(void)setProgress:(NSProgress *)arg1 ;
-(void)_observeProgress;
-(id)_localizedDescriptionForFetchState:(long long)arg1 ;
-(id)initWithActivityType:(long long)arg1 userInfo:(id)arg2 ;
-(BOOL)isEqualToActivityWithType:(long long)arg1 userInfo:(id)arg2 ;
-(void)setCompletedCount:(long long)arg1 totalCount:(long long)arg2 ;
-(BOOL)needsPersistentHistory;
@end

