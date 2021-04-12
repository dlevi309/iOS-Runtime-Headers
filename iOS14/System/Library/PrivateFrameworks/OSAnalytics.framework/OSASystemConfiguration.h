/*
* Generated on Thursday, January 14, 2021 at 2:23:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/OSAnalytics.framework/OSAnalytics
*/

#import <OSAnalytics/OSAProxyConfiguration.h>

@class NSMutableDictionary, NSString, NSDictionary, NSSet;

@interface OSASystemConfiguration : OSAProxyConfiguration {

	BOOL _appleInternal;
	BOOL _carrierInstall;
	BOOL _multiUserMode;
	NSMutableDictionary* _submissionMetadata;
	NSString* _pairedWatchOS;
	NSDictionary* _logConfig;
	NSSet* _logBlacklist;
	NSDictionary* _submissionParams;
	NSDictionary* _whitelistedDomains;
	NSString* _pathRoot;
	NSString* _pathContainerRoot;
	NSString* _pathSubmission;
	NSString* _pathPreferences;
	NSString* _pathDiagnostics;
	NSString* _pathCATasking;
	NSString* _pathAWDTasking;

}

@property (readonly) BOOL optInApple; 
@property (readonly) BOOL optIn3rdParty; 
@property (readonly) BOOL appleInternal; 
@property (readonly) BOOL carrierInstall; 
@property (readonly) BOOL multiUserMode; 
@property (readonly) NSMutableDictionary * submissionMetadata; 
@property (copy) NSString * pathRoot; 
@property (readonly) NSString * pathContainerRoot; 
@property (readonly) NSString * pathSubmission; 
@property (readonly) NSString * pathPreferences; 
@property (readonly) NSString * pathDiagnostics; 
@property (readonly) NSString * pathCATasking; 
@property (readonly) NSString * pathAWDTasking; 
+(id)sharedInstance;
+(id)ensureUsablePath:(id)arg1 component:(id)arg2 options:(id)arg3 ;
+(void)ensureConformanceOfFile:(int)arg1 ;
-(void)saveToPath:(id)arg1 ;
-(id)productName;
-(id)serialNumber;
-(BOOL)isProxy;
-(id)seedGroup;
-(BOOL)isConfigEnabled:(id)arg1 ;
-(id)logPrefix:(id)arg1 ;
-(id)awdReporterKey;
-(id)submissionParam:(id)arg1 ;
-(id)productVersion;
-(BOOL)setPrefsKey:(id)arg1 value:(id)arg2 forDomain:(id)arg3 withSync:(BOOL)arg4 ;
-(void)onceConfig;
-(id)productNameVersionBuildString;
-(void)setPathRoot:(NSString *)arg1 ;
-(id)targetAudience;
-(id)internalKey;
-(id)logExt:(id)arg1 ;
-(id)releaseType;
-(NSString *)pathSubmission;
-(BOOL)optInApple;
-(id)createReportMetadata:(id)arg1 with:(id)arg2 at:(double)arg3 usingOptions:(id)arg4 ;
-(NSString *)pathContainerRoot;
-(id)pathSubmissionForOwner:(id)arg1 ;
-(id)getLogBlacklist;
-(id)productBuildString;
-(id)getPropsForLogType:(id)arg1 ;
-(BOOL)optIn3rdParty;
-(BOOL)isWhitelisted:(id)arg1 forDomain:(id)arg2 ;
-(id)systemId;
-(BOOL)carrierInstall;
-(NSString *)pathAWDTasking;
-(void)plumbEmail:(id)arg1 ;
-(BOOL)usesLegacySubmission:(id)arg1 ;
-(NSString *)pathPreferences;
-(id)buildVersion;
-(id)getPrefsKey:(id)arg1 forDomain:(id)arg2 withOptions:(id)arg3 ;
-(id)logPathForType:(id)arg1 at:(double)arg2 options:(id)arg3 ;
-(id)getTaskingKey:(id)arg1 ;
-(id)automatedContextURL;
-(id)experimentGroup;
-(id)uiCountryCode;
-(id)productReleaseString;
-(id)pairedWatchOS;
-(id)assembleMetadataAt:(double)arg1 withOptions:(unsigned)arg2 ;
-(id)automatedDeviceGroup;
-(NSMutableDictionary *)submissionMetadata;
-(NSString *)pathDiagnostics;
-(id)identifier;
-(BOOL)multiUserMode;
-(id)logPath;
-(id)modelCode;
-(NSString *)pathCATasking;
-(BOOL)appleInternal;
-(NSString *)pathRoot;
-(void)sysVersionData;
-(id)crashReporterKey;
-(id)currentTaskingIDByRouting;
-(id)osTrain;
@end

