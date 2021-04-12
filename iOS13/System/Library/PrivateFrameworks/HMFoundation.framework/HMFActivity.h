/*
* Generated on Monday, March 1, 2021 at 2:30:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation
*/

#import <HMFoundation/HMFObject.h>
#import <HMFoundation/HMFLogging.h>
#import <HMFoundation/HMFObject.h>

@protocol OS_os_activity, OS_voucher;
@class HMFUnfairLock, NSObject, NSMutableSet, NSUUID, NSString, NSArray, NSDate;

@interface HMFActivity : HMFObject <HMFLogging, HMFObject> {

	HMFUnfairLock* _lock;
	NSObject*<OS_os_activity> _internal;
	NSObject*<OS_voucher> _voucher;
	NSMutableSet* _threadContexts;
	BOOL _valid;
	NSUUID* _identifier;
	HMFActivity* _parent;
	NSString* _name;
	unsigned long long _options;
	NSArray* _internalAssertions;
	NSDate* _startDate;

}

@property (nonatomic,readonly) NSArray * internalAssertions;                      //@synthesize internalAssertions=_internalAssertions - In the implementation block
@property (readonly) NSDate * startDate;                                          //@synthesize startDate=_startDate - In the implementation block
@property (copy,readonly) NSUUID * identifier;                                    //@synthesize identifier=_identifier - In the implementation block
@property (__weak,readonly) HMFActivity * parent;                                 //@synthesize parent=_parent - In the implementation block
@property (copy,readonly) NSString * name;                                        //@synthesize name=_name - In the implementation block
@property (readonly) unsigned long long assertions; 
@property (readonly) unsigned long long options;                                  //@synthesize options=_options - In the implementation block
@property (getter=isValid,readonly) BOOL valid;                                   //@synthesize valid=_valid - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (copy,readonly) NSString * shortDescription; 
@property (copy,readonly) NSString * privateDescription; 
@property (copy,readonly) NSString * propertyDescription; 
@property (nonatomic,copy,readonly) NSArray * attributeDescriptions; 
+(void)initialize;
+(id)bundleIdentifier;
+(id)currentActivity;
+(id)shortDescription;
+(id)logCategory;
+(void)activityWithName:(id)arg1 parent:(id)arg2 options:(unsigned long long)arg3 block:(/*^block*/id)arg4 ;
+(void)activityWithName:(id)arg1 block:(/*^block*/id)arg2 ;
+(void)activityWithName:(id)arg1 parent:(id)arg2 block:(/*^block*/id)arg3 ;
+(void)activityWithName:(id)arg1 parent:(id)arg2 assertions:(unsigned long long)arg3 block:(/*^block*/id)arg4 ;
-(id)init;
-(void)dealloc;
-(unsigned long long)hash;
-(NSString *)name;
-(void)invalidate;
-(HMFActivity *)parent;
-(unsigned long long)options;
-(BOOL)isValid;
-(id)initWithName:(id)arg1 ;
-(NSUUID *)identifier;
-(NSDate *)startDate;
-(void)performBlock:(/*^block*/id)arg1 ;
-(void)end;
-(void)begin;
-(NSString *)shortDescription;
-(unsigned long long)assertions;
-(id)initWithName:(id)arg1 parent:(id)arg2 ;
-(id)logIdentifier;
-(void)mark;
-(NSArray *)attributeDescriptions;
-(id)initWithName:(id)arg1 parent:(id)arg2 options:(unsigned long long)arg3 ;
-(void)markWithFormat:(id)arg1 ;
-(void)markWithReason:(id)arg1 ;
-(NSArray *)internalAssertions;
-(/*^block*/id)blockWithBlock:(/*^block*/id)arg1 ;
-(id)initWithName:(id)arg1 parent:(id)arg2 assertions:(unsigned long long)arg3 ;
-(/*^block*/id)blockWithQualityOfService:(long long)arg1 block:(/*^block*/id)arg2 ;
@end

