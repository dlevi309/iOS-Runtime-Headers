/*
* Generated on Monday, March 1, 2021 at 2:33:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ClockKit.framework/ClockKit
*/

#import <ClockKit/ClockKit-Structs.h>
#import <libobjc.A.dylib/CLKComplicationClient.h>

@protocol CLKComplicationDataSource;
@class NSString, NSXPCConnection, NSSet, NSArray, NSDate;

@interface CLKComplicationServer : NSObject <CLKComplicationClient> {

	NSString* _clientIdentifier;
	Class _dataSourceClass;
	NSXPCConnection* _serverConnection;
	id<CLKComplicationDataSource> _dataSource;
	NSSet* _activeComplications;
	os_unfair_lock_s _connectionLock;
	int _restartNotificationToken;
	struct {
		BOOL supportsGetTimeTravelDirections;
		BOOL supportsGetTimelineStartDate;
		BOOL supportsGetTimelineEndDate;
		BOOL supportsGetPrivacyBehavior;
		BOOL supportsGetTimelineAnimationBehavior;
		BOOL supportsExtendAfter;
		BOOL supportsExtendBefore;
		BOOL supportsGetRequestedUpdate;
		BOOL supportsNotifyRequestedUpdate;
		BOOL supportsNotifyBudgetExhausted;
		BOOL supportsGetPlaceholderTemplate;
		BOOL supportsGetLocalizableDescriptionProvider;
		BOOL supportsGetLocalizableSampleTemplate;
		BOOL exceptionOnSkippedHandler;
		BOOL supportsGetAlwaysOnTemplate;
	}  _dataSourceFlags;

}

@property (nonatomic,readonly) NSArray * activeComplications; 
@property (nonatomic,readonly) NSDate * earliestTimeTravelDate; 
@property (nonatomic,readonly) NSDate * latestTimeTravelDate; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(id)init;
-(void)dealloc;
-(id)_init;
-(void)setActiveComplications:(NSArray *)arg1 ;
-(NSArray *)activeComplications;
-(id)serverProxy;
-(id)initWithClientIdentifier:(id)arg1 ;
-(void)_createConnection;
-(void)reloadTimelineForComplication:(id)arg1 ;
-(void)extendTimelineForComplication:(id)arg1 ;
-(void)getSupportedTimeTravelDirectionsForComplication:(id)arg1 withHandler:(/*^block*/id)arg2 ;
-(void)getCurrentTimelineEntryForComplication:(id)arg1 withHandler:(/*^block*/id)arg2 ;
-(void)getTimelineStartDateForComplication:(id)arg1 withHandler:(/*^block*/id)arg2 ;
-(void)getTimelineEndDateForComplication:(id)arg1 withHandler:(/*^block*/id)arg2 ;
-(void)getPrivacyBehaviorForComplication:(id)arg1 withHandler:(/*^block*/id)arg2 ;
-(void)getTimelineAnimationBehaviorForComplication:(id)arg1 withHandler:(/*^block*/id)arg2 ;
-(void)getAlwaysOnTemplateForComplication:(id)arg1 withHandler:(/*^block*/id)arg2 ;
-(void)getTimelineEntriesForComplication:(id)arg1 beforeDate:(id)arg2 limit:(unsigned long long)arg3 withHandler:(/*^block*/id)arg4 ;
-(void)getTimelineEntriesForComplication:(id)arg1 afterDate:(id)arg2 limit:(unsigned long long)arg3 withHandler:(/*^block*/id)arg4 ;
-(void)getNextRequestedUpdateDateWithHandler:(/*^block*/id)arg1 ;
-(void)requestedUpdateDidBegin;
-(void)requestedUpdateBudgetExhausted;
-(void)getLocalizableSampleTemplateForComplication:(id)arg1 withHandler:(/*^block*/id)arg2 ;
-(void)_complicationServiceDidStart;
-(void)_checkinWithServer;
-(void)_createDataSourceIfNecessary;
-(NSDate *)earliestTimeTravelDate;
-(NSDate *)latestTimeTravelDate;
@end

