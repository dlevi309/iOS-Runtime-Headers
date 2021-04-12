/*
* Generated on Thursday, January 14, 2021 at 2:22:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(void)setReportingFrequencyOverride:(id)arg1 ;
+(id)_reportingFrequencyOverride;
-(NSDictionary *)fieldsMap;
-(id)reportingURLString;
-(double)reportingFrequency;
-(BOOL)_decorateITMLEvents;
-(id)cookieFields;
-(id)compoundStringWithElements:(id)arg1 ;
-(BOOL)_configBooleanForKey:(id)arg1 defaultValue:(BOOL)arg2 ;
-(void)setChildConfiguration:(SSMetricsConfiguration *)arg1 ;
-(id)blacklistedEventFields;
-(BOOL)isDisabled;
-(id)valueForConfigurationKey:(id)arg1 ;
-(id)pingURLs;
-(BOOL)isEventTypeBlacklisted:(id)arg1 ;
-(id)eventFields;
-(id)initWithStorePlatformData:(id)arg1 ;
-(BOOL)isSendDisabled;
-(id)tokenStringWithElements:(id)arg1 ;
-(id)initWithGlobalConfiguration:(id)arg1 ;
-(BOOL)disableEventDecoration;
-(id)_initSSMetricsEventConfiguration;
-(SSMetricsConfiguration *)childConfiguration;
-(void)setDisableEventDecoration:(BOOL)arg1 ;
-(void)dealloc;
-(void)_setReportingFrequencyOverride:(id)arg1 ;
@end

