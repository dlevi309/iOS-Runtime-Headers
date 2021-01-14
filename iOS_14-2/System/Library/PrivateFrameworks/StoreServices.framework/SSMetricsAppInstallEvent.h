/*
* Generated on Thursday, January 14, 2021 at 2:22:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
*/

#import <StoreServices/SSMetricsMutableEvent.h>

@class NSString;

@interface SSMetricsAppInstallEvent : SSMetricsMutableEvent

@property (nonatomic,retain) NSString * buildVersion; 
@property (nonatomic,retain) NSString * bundleID; 
@property (nonatomic,retain) NSString * hardwareType; 
@property (nonatomic,retain) NSString * installError; 
@property (assign,nonatomic) unsigned long long installStatus; 
@property (assign,nonatomic) unsigned long long installType; 
@property (assign,nonatomic) long long jobID; 
+(unsigned long long)_installStatusForString:(id)arg1 ;
+(unsigned long long)_installTypeForString:(id)arg1 ;
+(id)_stringForInstallStatus:(unsigned long long)arg1 ;
+(id)_stringForInstallType:(unsigned long long)arg1 ;
-(unsigned long long)installType;
-(long long)jobID;
-(id)init;
-(void)setBundleID:(NSString *)arg1 ;
-(NSString *)hardwareType;
-(void)setHardwareType:(NSString *)arg1 ;
-(unsigned long long)installStatus;
-(void)setInstallStatus:(unsigned long long)arg1 ;
-(void)setInstallError:(NSString *)arg1 ;
-(NSString *)installError;
-(id)description;
-(void)setBuildVersion:(NSString *)arg1 ;
-(NSString *)bundleID;
-(NSString *)buildVersion;
-(void)setInstallType:(unsigned long long)arg1 ;
-(void)setJobID:(long long)arg1 ;
-(BOOL)requiresDiagnosticSendingPermission;
@end

