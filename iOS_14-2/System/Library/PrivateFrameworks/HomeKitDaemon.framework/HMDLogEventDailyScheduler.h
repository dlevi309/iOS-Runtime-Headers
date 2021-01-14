/*
* Generated on Thursday, January 14, 2021 at 2:25:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMFLogging.h>

@protocol HMDXPCActivityInterfacing;
@class NSString, NSHashTable;

@interface HMDLogEventDailyScheduler : HMFObject <HMFLogging> {

	NSString* _xpcActivityIdentifier;
	NSHashTable* _logEventDailyProviders;
	id<HMDXPCActivityInterfacing> _xpcActivityInterface;

}

@property (nonatomic,readonly) NSString * xpcActivityIdentifier;                              //@synthesize xpcActivityIdentifier=_xpcActivityIdentifier - In the implementation block
@property (nonatomic,retain) NSHashTable * logEventDailyProviders;                            //@synthesize logEventDailyProviders=_logEventDailyProviders - In the implementation block
@property (nonatomic,retain) id<HMDXPCActivityInterfacing> xpcActivityInterface;              //@synthesize xpcActivityInterface=_xpcActivityInterface - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
+(id)sharedInstance;
-(id)init;
-(void)registerLogEventDailyProvider:(id)arg1 ;
-(id)initWithIdentifier:(id)arg1 xpcActivityInterface:(id)arg2 ;
-(void)_registerActivity;
-(NSString *)xpcActivityIdentifier;
-(id<HMDXPCActivityInterfacing>)xpcActivityInterface;
-(void)_handleCheckInForActivity:(id)arg1 ;
-(void)_runActivity:(id)arg1 ;
-(id)_criteriaForActivity;
-(NSHashTable *)logEventDailyProviders;
-(void)setLogEventDailyProviders:(NSHashTable *)arg1 ;
-(void)setXpcActivityInterface:(id<HMDXPCActivityInterfacing>)arg1 ;
@end

