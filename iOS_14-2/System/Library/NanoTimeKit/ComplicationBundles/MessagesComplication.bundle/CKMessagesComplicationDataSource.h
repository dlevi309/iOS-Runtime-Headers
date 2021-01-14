/*
* Generated on Thursday, January 14, 2021 at 2:27:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/NanoTimeKit/ComplicationBundles/MessagesComplication.bundle/MessagesComplication
*/

#import <ClockComplications/CLKCComplicationBundleDataSource.h>
#import <libobjc.A.dylib/CKMessagesComplicationDataProviderSubscriber.h>

@protocol OS_os_log;
@class CKMessagesComplicationSpecs, NSObject, DMFCommunicationPolicyMonitor, NSDictionary, NSString;

@interface CKMessagesComplicationDataSource : CLKCComplicationBundleDataSource <CKMessagesComplicationDataProviderSubscriber> {

	CKMessagesComplicationSpecs* _specs;
	unsigned long long _unreadCount;
	NSObject*<OS_os_log> _log;
	DMFCommunicationPolicyMonitor* _communicationPolicyMonitor;
	NSDictionary* _communicationPolicies;

}

@property (nonatomic,retain) CKMessagesComplicationSpecs * specs;                                     //@synthesize specs=_specs - In the implementation block
@property (assign,nonatomic) unsigned long long unreadCount;                                          //@synthesize unreadCount=_unreadCount - In the implementation block
@property (nonatomic,retain) NSObject*<OS_os_log> log;                                                //@synthesize log=_log - In the implementation block
@property (nonatomic,retain) DMFCommunicationPolicyMonitor * communicationPolicyMonitor;              //@synthesize communicationPolicyMonitor=_communicationPolicyMonitor - In the implementation block
@property (nonatomic,retain) NSDictionary * communicationPolicies;                                    //@synthesize communicationPolicies=_communicationPolicies - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)appIdentifier;
+(id)localizedAppName;
+(BOOL)acceptsComplicationFamily:(long long)arg1 forDevice:(id)arg2 ;
+(id)legacyNTKComplicationType;
-(unsigned long long)unreadCount;
-(NSObject*<OS_os_log>)log;
-(CKMessagesComplicationSpecs *)specs;
-(void)setUnreadCount:(unsigned long long)arg1 ;
-(void)setLog:(NSObject*<OS_os_log>)arg1 ;
-(DMFCommunicationPolicyMonitor *)communicationPolicyMonitor;
-(void)setCommunicationPolicyMonitor:(DMFCommunicationPolicyMonitor *)arg1 ;
-(void)dealloc;
-(void)getCurrentTimelineEntryWithHandler:(/*^block*/id)arg1 ;
-(id)initWithComplication:(id)arg1 family:(long long)arg2 forDevice:(id)arg3 ;
-(id)currentSwitcherTemplate;
-(id)lockedTemplate;
-(void)getLaunchURLForTimelineEntryDate:(id)arg1 timeTravelDate:(id)arg2 withHandler:(/*^block*/id)arg3 ;
-(void)unreadCountDidChange:(unsigned long long)arg1 ;
-(void)setCommunicationPolicies:(NSDictionary *)arg1 ;
-(id)templateForFamily:(long long)arg1 unreadCount:(unsigned long long)arg2 locked:(BOOL)arg3 privacy:(BOOL)arg4 ;
-(NSDictionary *)communicationPolicies;
-(id)fullColorImageProviderForUnreadCount:(unsigned long long)arg1 family:(long long)arg2 template:(id)arg3 ;
-(void)setDefaultBackgroundForTemplate:(id)arg1 ;
-(id)textProviderForUnreadCount:(unsigned long long)arg1 locked:(BOOL)arg2 privacy:(BOOL)arg3 shortText:(BOOL)arg4 tintColor:(id)arg5 ;
-(id)imageProviderForUnreadCount:(unsigned long long)arg1 family:(long long)arg2 template:(id)arg3 ;
-(id)drawUnreadCount:(unsigned long long)arg1 ontoImage:(id)arg2 family:(long long)arg3 template:(id)arg4 ;
-(id)simpleTintableImageOverImage:(id)arg1 withContext:(id)arg2 ;
-(void)_updateCommunicationPolicies;
-(id)privacyTemplate;
-(void)setSpecs:(CKMessagesComplicationSpecs *)arg1 ;
@end

