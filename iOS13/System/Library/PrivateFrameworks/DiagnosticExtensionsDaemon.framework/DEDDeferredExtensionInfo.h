/*
* Generated on Monday, March 1, 2021 at 2:34:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
+(id)archivedClasses;
+(id)activityStringForBugSessionIdentifier:(id)arg1 dedIdentifier:(id)arg2 ;
+(id)allInfo;
+(double)recommendedGracePeriodForDate:(id)arg1 ;
-(void)run;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSDictionary *)parameters;
-(void)setParameters:(NSDictionary *)arg1 ;
-(double)gracePeriod;
-(void)schedule;
-(void)unschedule;
-(BOOL)scheduled;
-(id)criteria;
-(BOOL)isOverdue;
-(void)removeFromStore;
-(void)setGracePeriod:(double)arg1 ;
-(void)setScheduled:(BOOL)arg1 ;
-(NSDate *)triggerDate;
-(void)setTriggerDate:(NSDate *)arg1 ;
-(NSString *)activityString;
-(DEDExtensionIdentifier *)dedIdentifier;
-(NSString *)bugSessionIdentifier;
-(id)initWithBugSessionIdentifier:(id)arg1 dedIdentifier:(id)arg2 runOnDate:(id)arg3 withGracePeriod:(double)arg4 ;
-(void)addToStore;
@end

