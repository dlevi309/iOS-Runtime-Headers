/*
* Generated on Monday, March 1, 2021 at 2:32:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MobileBackup.framework/MobileBackup
*/

#import <MobileBackup/MBContainer.h>

@class NSString, NSDictionary, NSArray;

@interface MBAppPlugin : MBContainer

@property (nonatomic,readonly) NSString * bundleDir; 
@property (nonatomic,readonly) NSString * ownerBundleID; 
@property (nonatomic,readonly) NSDictionary * entitlements; 
@property (nonatomic,readonly) NSString * entitlementsRelativePath; 
@property (nonatomic,readonly) NSArray * groups; 
@property (nonatomic,readonly) NSArray * allAppGroupContainers; 
+(id)appPluginWithPropertyList:(id)arg1 ;
-(id)domain;
-(NSDictionary *)entitlements;
-(NSArray *)groups;
-(NSArray *)allAppGroupContainers;
-(NSString *)bundleDir;
-(NSString *)entitlementsRelativePath;
-(NSString *)ownerBundleID;
@end

