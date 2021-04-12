/*
* Generated on Thursday, January 14, 2021 at 2:22:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MobileBackup.framework/MobileBackup
*/

#import <MobileBackup/MBContainer.h>

@class NSString, NSDictionary, NSArray;

@interface MBApp : MBContainer

@property (nonatomic,readonly) NSString * bundleID; 
@property (nonatomic,readonly) NSString * bundleVersion; 
@property (nonatomic,readonly) NSString * bundleDir; 
@property (nonatomic,readonly) NSDictionary * entitlements; 
@property (nonatomic,readonly) NSString * entitlementsRelativePath; 
@property (nonatomic,readonly) NSArray * groups; 
@property (nonatomic,readonly) NSArray * plugins; 
@property (nonatomic,readonly) NSArray * containers; 
@property (nonatomic,readonly) BOOL isPlaceholder; 
@property (nonatomic,readonly) BOOL isSystemApp; 
@property (nonatomic,readonly) BOOL isAppUpdating; 
+(id)appWithPropertyList:(id)arg1 ;
+(id)appWithBundleID:(id)arg1 ;
+(id)safeHarborWithPath:(id)arg1 ;
+(BOOL)unzipPlaceholderDomainZipFile:(id)arg1 atDirectory:(id)arg2 ;
-(NSArray *)containers;
-(NSArray *)plugins;
-(NSDictionary *)entitlements;
-(BOOL)isPlaceholder;
-(NSArray *)groups;
-(NSString *)bundleVersion;
-(id)domain;
-(BOOL)isSystemApp;
-(NSString *)bundleID;
-(NSString *)bundleDir;
-(BOOL)isAppUpdating;
-(id)_resourceRelativePathsToBackupAndRestoreForRootDir:(id)arg1 relativePath:(id)arg2 ;
-(id)_placeholderRelativePathsToBackupAndRestoreWithCache:(id)arg1 ;
-(BOOL)_writeDeviceAppropriateIconToPath:(id)arg1 fromBundlePath:(id)arg2 ;
-(id)placeholderDomainWithCache:(id)arg1 ;
-(void)setBundleDir:(NSString *)arg1 ;
-(NSString *)entitlementsRelativePath;
-(id)zipPlaceholderDomain;
@end

