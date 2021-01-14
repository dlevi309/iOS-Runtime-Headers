/*
* Generated on Thursday, January 14, 2021 at 2:24:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
*/

#import <libobjc.A.dylib/MCProfileConnectionObserver.h>

@class NSArray, NSString;

@interface ManagedConfigurationUtils : NSObject <MCProfileConnectionObserver> {

	void* _managedConfigurationDylibHandle;
	BOOL _diagnosticsAndUsageEnabled;
	NSArray* _installedVisibleProfileIdentifiers;

}

@property (assign,nonatomic) BOOL diagnosticsAndUsageEnabled;                           //@synthesize diagnosticsAndUsageEnabled=_diagnosticsAndUsageEnabled - In the implementation block
@property (nonatomic,retain) NSArray * installedVisibleProfileIdentifiers;              //@synthesize installedVisibleProfileIdentifiers=_installedVisibleProfileIdentifiers - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(void)profileConnectionDidReceiveEffectiveSettingsChangedNotification:(id)arg1 userInfo:(id)arg2 ;
-(id)init;
-(void)profileConnectionDidReceiveProfileListChangedNotification:(id)arg1 userInfo:(id)arg2 ;
-(void)dealloc;
-(void)setInstalledVisibleProfileIdentifiers:(NSArray *)arg1 ;
-(void)setDiagnosticsAndUsageEnabled:(BOOL)arg1 ;
-(NSArray *)installedVisibleProfileIdentifiers;
-(BOOL)diagnosticsAndUsageEnabled;
@end

