/*
* Generated on Thursday, January 14, 2021 at 2:26:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation
*/

#import <HMFoundation/HMFoundation-Structs.h>
#import <HMFoundation/HMFObject.h>
#import <HMFoundation/HMFLogging.h>
#import <HMFoundation/HMFObject.h>
#import <HMFoundation/HMFActivityMarking.h>

@protocol OS_os_activity, OS_voucher;
@class NSObject, NSMutableSet, NSUUID, NSString, NSArray, NSDate, HMFLogEventSession;

@interface HMFActivity : HMFObject <HMFLogging, HMFObject, HMFActivityMarking> {

	NSObject*<OS_os_activity> _internal;
	NSObject*<OS_voucher> _voucher;
	NSMutableSet* _threadContexts;
	os_unfair_lock_s _lock;
	BOOL _valid;
	NSUUID* _identifier;
	HMFActivity* _parent;
	NSString* _name;
	unsigned long long _options;
	NSArray* _internalAssertions;
	NSDate* _startDate;

}

@property (getter=isEventReportingEnabled) BOOL eventReportingEnabled; 
@property (readonly) HMFLogEventSession * logSession; 
@property (copy,readonly) NSUUID * identifier;                                      //@synthesize identifier=_identifier - In the implementation block
@property (__weak,readonly) HMFActivity * parent;                                   //@synthesize parent=_parent - In the implementation block
@property (copy,readonly) NSString * name;                                          //@synthesize name=_name - In the implementation block
@property (readonly) unsigned long long assertions; 
@property (readonly) unsigned long long options;                                    //@synthesize options=_options - In the implementation block
@property (getter=isValid,readonly) BOOL valid;                                     //@synthesize valid=_valid - In the implementation block
@property (getter=hasStarted,readonly) BOOL started; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (copy,readonly) NSString * shortDescription; 
@property (copy,readonly) NSString * privateDescription; 
@property (copy,readonly) NSString * propertyDescription; 
@property (nonatomic,copy,readonly) NSArray * attributeDescriptions; 
+(id)logCategory;
+(void)initialize;
+(void)activityWithName:(id)arg1 parent:(id)arg2 assertions:(unsigned long long)arg3 block:(/*^block*/id)arg4 ;
+(id)bundleIdentifier;
+(id)shortDescription;
+(void)markCurrentActivity;
+(void)activityWithName:(id)arg1 parent:(id)arg2 block:(/*^block*/id)arg3 ;
+(void)activityWithName:(id)arg1 block:(/*^block*/id)arg2 ;
+(void)markCurrentActivityWithReason:(id)arg1 ;
+(id)currentActivityForMarking;
+(void)activityWithName:(id)arg1 parent:(id)arg2 options:(unsigned long long)arg3 block:(/*^block*/id)arg4 ;
+(void)markCurrentActivityWithFormat:(id)arg1 ;
+(id)currentActivity;
-(void)logDefaultAndMarkWithObject:(id)arg1 format:(id)arg2 ;
-(void)logErrorAndMarkWithObject:(id)arg1 format:(id)arg2 ;
-(void)logInfoAndMarkWithObject:(id)arg1 format:(id)arg2 ;
-(void)logDefaultAndMarkWithObject:(id)arg1 reason:(id)arg2 ;
-(void)logInfoAndMarkWithObject:(id)arg1 reason:(id)arg2 ;
-(void)logErrorAndMarkWithObject:(id)arg1 reason:(id)arg2 ;
-(void)logDebugAndMarkWithObject:(id)arg1 reason:(id)arg2 ;
-(void)logDebugAndMarkWithObject:(id)arg1 format:(id)arg2 ;
-(unsigned long long)assertions;
-(void)end;
-(HMFActivity *)parent;
-(void)begin;
-(id)init;
-(void)performBlock:(/*^block*/id)arg1 ;
-(NSString *)shortDescription;
-(id)initWithName:(id)arg1 parent:(id)arg2 ;
-(unsigned long long)options;
-(id)logIdentifier;
-(BOOL)hasStarted;
-(void)mark;
-(NSString *)name;
-(id)initWithName:(id)arg1 ;
-(BOOL)isValid;
-(id)initWithName:(id)arg1 parent:(id)arg2 options:(unsigned long long)arg3 ;
-(NSArray *)attributeDescriptions;
-(HMFLogEventSession *)logSession;
-(/*^block*/id)blockWithBlock:(/*^block*/id)arg1 ;
-(unsigned long long)hash;
-(void)enableReportingWithServiceName:(id)arg1 ;
-(void)invalidate;
-(BOOL)isEventReportingEnabled;
-(void)markWithReason:(id)arg1 ;
-(NSUUID *)identifier;
-(void)dealloc;
-(void)markWithFormat:(id)arg1 ;
-(id)initWithIdentifier:(id)arg1 name:(id)arg2 parent:(id)arg3 options:(unsigned long long)arg4 ;
-(void)enableReportingWithServiceName:(id)arg1 rootUUID:(id)arg2 ;
-(void)setEventReportingEnabled:(BOOL)arg1 ;
-(id)initWithName:(id)arg1 parent:(id)arg2 assertions:(unsigned long long)arg3 ;
-(/*^block*/id)blockWithQualityOfService:(long long)arg1 block:(/*^block*/id)arg2 ;
@end

