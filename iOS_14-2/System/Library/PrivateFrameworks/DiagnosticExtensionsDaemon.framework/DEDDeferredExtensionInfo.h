/*
* Generated on Thursday, January 14, 2021 at 2:24:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DiagnosticExtensionsDaemon.framework/DiagnosticExtensionsDaemon
*/

#import <libobjc.A.dylib/DEDSecureArchiving.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, DEDExtensionIdentifier, NSDate, NSDictionary;

@interface DEDDeferredExtensionInfo : NSObject <DEDSecureArchiving, NSSecureCoding> {

	BOOL _scheduled;
	NSString* _activityString;
	NSString* _bugSessionIdentifier;
	DEDExtensionIdentifier* _dedIdentifier;
	NSDate* _triggerDate;
	double _gracePeriod;
	NSDictionary* _parameters;

}

@property (readonly) NSString * bugSessionIdentifier;                     //@synthesize bugSessionIdentifier=_bugSessionIdentifier - In the implementation block
@property (readonly) DEDExtensionIdentifier * dedIdentifier;              //@synthesize dedIdentifier=_dedIdentifier - In the implementation block
@property (nonatomic,retain) NSDate * triggerDate;                        //@synthesize triggerDate=_triggerDate - In the implementation block
@property (assign,nonatomic) double gracePeriod;                          //@synthesize gracePeriod=_gracePeriod - In the implementation block
@property (retain) NSDictionary * parameters;                             //@synthesize parameters=_parameters - In the implementation block
@property (assign) BOOL scheduled;                                        //@synthesize scheduled=_scheduled - In the implementation block
@property (nonatomic,readonly) NSString * activityString;                 //@synthesize activityString=_activityString - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(void)checkIn;
+(id)log;
+(id)allInfo;
+(id)archivedClasses;
+(id)activityStringForBugSessionIdentifier:(id)arg1 dedIdentifier:(id)arg2 ;
+(double)recommendedGracePeriodForDate:(id)arg1 ;
-(NSDictionary *)parameters;
-(void)setParameters:(NSDictionary *)arg1 ;
-(void)setScheduled:(BOOL)arg1 ;
-(void)run;
-(void)removeFromStore;
-(NSDate *)triggerDate;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setGracePeriod:(double)arg1 ;
-(void)schedule;
-(BOOL)scheduled;
-(double)gracePeriod;
-(id)criteria;
-(id)initWithCoder:(id)arg1 ;
-(void)unschedule;
-(BOOL)isOverdue;
-(BOOL)isEqual:(id)arg1 ;
-(void)setTriggerDate:(NSDate *)arg1 ;
-(NSString *)activityString;
-(DEDExtensionIdentifier *)dedIdentifier;
-(NSString *)bugSessionIdentifier;
-(id)initWithBugSessionIdentifier:(id)arg1 dedIdentifier:(id)arg2 runOnDate:(id)arg3 withGracePeriod:(double)arg4 ;
-(void)addToStore;
@end

