/*
* Generated on Monday, March 1, 2021 at 2:35:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/NanoTimeKit/ComplicationBundles/MessagesComplication.bundle/MessagesComplication
*/

#import <ClockComplications/CLKCComplicationBundleDataSource.h>
#import <libobjc.A.dylib/CKMessagesComplicationDataProviderSubscriber.h>

@protocol OS_os_log;
@class CKMessagesComplicationSpecs, NSObject, DMFCommunicationPolicyMonitor, NSString;

@interface CKMessagesComplicationDataSource : CLKCComplicationBundleDataSource <CKMessagesComplicationDataProviderSubscriber> {

	CKMessagesComplicationSpecs* _specs;
	unsigned long long _unreadCount;
	NSObject*<OS_os_log> _log;
	DMFCommunicationPolicyMonitor* _communicationPolicyMonitor;

}

@property (nonatomic,retain) CKMessagesComplicationSpecs * specs;                                     //@synthesize specs=_specs - In the implementation block
@property (assign,nonatomic) unsigned long long unreadCount;                                          //@synthesize unreadCount=_unreadCount - In the implementation block
@property (nonatomic,retain) NSObject*<OS_os_log> log;                                                //@synthesize log=_log - In the implementation block
@property (nonatomic,retain) DMFCommunicationPolicyMonitor * communicationPolicyMonitor;              //@synthesize communicationPolicyMonitor=_communicationPolicyMonitor - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)localizedAppName;
+(id)appIdentifier;
+(id)legacyNTKComplicationType;
+(BOOL)acceptsComplicationFamily:(long long)arg1 forDevice:(id)arg2 ;
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(NSObject*<OS_os_log>)log;
-(void)setLog:(NSObject*<OS_os_log>)arg1 ;
-(unsigned long long)unreadCount;
-(void)setUnreadCount:(unsigned long long)arg1 ;
-(DMFCommunicationPolicyMonitor *)communicationPolicyMonitor;
-(void)setCommunicationPolicyMonitor:(DMFCommunicationPolicyMonitor *)arg1 ;
-(void)getLaunchURLForTimelineEntryDate:(id)arg1 timeTravelDate:(id)arg2 withHandler:(/*^block*/id)arg3 ;
-(id)initWithComplication:(id)arg1 family:(long long)arg2 forDevice:(id)arg3 ;
-(id)currentSwitcherTemplate;
-(id)lockedTemplate;
-(id)privacyTemplate;
-(void)getSupportedTimeTravelDirectionsWithHandler:(/*^block*/id)arg1 ;
-(void)getCurrentTimelineEntryWithHandler:(/*^block*/id)arg1 ;
-(CKMessagesComplicationSpecs *)specs;
-(void)unreadCountDidChange:(unsigned long long)arg1 ;
-(id)templateForFamily:(long long)arg1 unreadCount:(unsigned long long)arg2 locked:(BOOL)arg3 privacy:(BOOL)arg4 ;
-(id)fullColorImageProviderForUnreadCount:(unsigned long long)arg1 family:(long long)arg2 template:(id)arg3 ;
-(void)setDefaultBackgroundForTemplate:(id)arg1 ;
-(id)textProviderForUnreadCount:(unsigned long long)arg1 locked:(BOOL)arg2 privacy:(BOOL)arg3 shortText:(BOOL)arg4 tintColor:(id)arg5 ;
-(id)imageProviderForUnreadCount:(unsigned long long)arg1 family:(long long)arg2 template:(id)arg3 ;
-(id)drawUnreadCount:(unsigned long long)arg1 ontoImage:(id)arg2 family:(long long)arg3 template:(id)arg4 ;
-(id)simpleTintableImageOverImage:(id)arg1 withContext:(id)arg2 ;
-(void)setSpecs:(CKMessagesComplicationSpecs *)arg1 ;
@end

