/*
* Generated on Monday, March 1, 2021 at 2:31:45 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
*/


@protocol OS_dispatch_queue;
@class NSSet, NSDictionary, NSObject, NSMutableSet, NSMutableDictionary;

@interface SSMetricsConfiguration : NSObject {

	NSSet* _blacklistedEvents;
	SSMetricsConfiguration* _childConfiguration;
	NSDictionary* _config;
	BOOL _disabled;
	BOOL _disableEventDecoration;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	NSMutableSet* _cookieFieldsUnion;
	NSMutableDictionary* _eventFieldsUnion;
	NSDictionary* _fields;
	int _internalSettingsToken;
	id _reportingFrequencyOverride;
	BOOL _sendDisabled;

}

@property (nonatomic,readonly) NSDictionary * fieldsMap; 
@property (nonatomic,retain) SSMetricsConfiguration * childConfiguration;              //@synthesize childConfiguration=_childConfiguration - In the implementation block
@property (assign,nonatomic) BOOL disableEventDecoration;                              //@synthesize disableEventDecoration=_disableEventDecoration - In the implementation block
+(void)getReportingFrequencyOverrideWithCompletionBlock:(/*^block*/id)arg1 ;
+(id)_reportingFrequencyOverride;
+(void)setReportingFrequencyOverride:(id)arg1 ;
-(void)dealloc;
-(BOOL)isDisabled;
-(id)pingURLs;
-(void)_setReportingFrequencyOverride:(id)arg1 ;
-(id)_initSSMetricsEventConfiguration;
-(BOOL)_configBooleanForKey:(id)arg1 defaultValue:(BOOL)arg2 ;
-(SSMetricsConfiguration *)childConfiguration;
-(id)blacklistedEventFields;
-(NSDictionary *)fieldsMap;
-(id)cookieFields;
-(id)eventFields;
-(id)compoundStringWithElements:(id)arg1 ;
-(BOOL)isEventTypeBlacklisted:(id)arg1 ;
-(BOOL)isSendDisabled;
-(id)valueForConfigurationKey:(id)arg1 ;
-(id)reportingURLString;
-(id)tokenStringWithElements:(id)arg1 ;
-(id)initWithGlobalConfiguration:(id)arg1 ;
-(id)initWithStorePlatformData:(id)arg1 ;
-(double)reportingFrequency;
-(void)setChildConfiguration:(SSMetricsConfiguration *)arg1 ;
-(BOOL)_decorateITMLEvents;
-(BOOL)disableEventDecoration;
-(void)setDisableEventDecoration:(BOOL)arg1 ;
@end

