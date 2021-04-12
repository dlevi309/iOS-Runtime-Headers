/*
* Generated on Monday, March 1, 2021 at 2:32:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isProxy;
-(id)identifier;
-(BOOL)appleInternal;
-(id)productVersion;
-(id)serialNumber;
-(id)buildVersion;
-(void)saveToPath:(id)arg1 ;
-(id)productName;
-(id)automatedDeviceGroup;
-(id)systemId;
-(BOOL)multiUserMode;
-(NSString *)pathPreferences;
-(id)productNameVersionBuildString;
-(id)getPrefsKey:(id)arg1 forDomain:(id)arg2 withOptions:(id)arg3 ;
-(id)modelCode;
-(id)crashReporterKey;
-(id)getTaskingKey:(id)arg1 ;
-(id)logPath;
-(BOOL)setPrefsKey:(id)arg1 value:(id)arg2 forDomain:(id)arg3 withSync:(BOOL)arg4 ;
-(NSString *)pathCATasking;
-(NSString *)pathAWDTasking;
-(id)uiCountryCode;
-(id)releaseType;
-(id)automatedContextURL;
-(id)seedGroup;
-(id)experimentGroup;
-(id)internalKey;
-(id)osTrain;
-(id)targetAudience;
-(id)awdReporterKey;
-(id)currentTaskingIDByRouting;
-(id)getLogBlacklist;
-(id)getPropsForLogType:(id)arg1 ;
-(BOOL)isConfigEnabled:(id)arg1 ;
-(id)assembleMetadataAt:(double)arg1 withOptions:(unsigned)arg2 ;
-(BOOL)usesLegacySubmission:(id)arg1 ;
-(id)pairedWatchOS;
-(NSMutableDictionary *)submissionMetadata;
-(void)sysVersionData;
-(void)onceConfig;
-(NSString *)pathSubmission;
-(NSString *)pathRoot;
-(NSString *)pathContainerRoot;
-(id)logExt:(id)arg1 ;
-(id)logPrefix:(id)arg1 ;
-(id)pathSubmissionForOwner:(id)arg1 ;
-(BOOL)carrierInstall;
-(id)productBuildString;
-(id)productReleaseString;
-(void)plumbEmail:(id)arg1 ;
-(void)setPathRoot:(NSString *)arg1 ;
-(NSString *)pathDiagnostics;
-(id)submissionParam:(id)arg1 ;
-(BOOL)isWhitelisted:(id)arg1 forDomain:(id)arg2 ;
-(id)createReportMetadata:(id)arg1 with:(id)arg2 at:(double)arg3 usingOptions:(id)arg4 ;
-(id)logPathForType:(id)arg1 at:(double)arg2 options:(id)arg3 ;
-(BOOL)optInApple;
-(BOOL)optIn3rdParty;
@end

