/*
* Generated on Monday, March 1, 2021 at 2:30:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
*/

#import <ManagedConfiguration/MCAppWhitelistPayloadBase.h>

@class NSString;

@interface MCSingleAppPayload : MCAppWhitelistPayloadBase

@property (nonatomic,readonly) NSString * applicationBundleID; 
+(id)typeStrings;
+(id)localizedSingularForm;
+(id)localizedPluralForm;
-(id)initWithDictionary:(id)arg1 profile:(id)arg2 outError:(id*)arg3 ;
-(id)subtitle1Label;
-(id)subtitle1Description;
-(id)restrictions;
-(BOOL)mustInstallNonInteractively;
-(NSString *)applicationBundleID;
@end

