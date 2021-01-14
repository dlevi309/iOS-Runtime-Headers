/*
* Generated on Thursday, January 14, 2021 at 2:21:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
*/

#import <ManagedConfiguration/MCAppWhitelistPayloadBase.h>

@class NSString;

@interface MCSingleAppPayload : MCAppWhitelistPayloadBase

@property (nonatomic,readonly) NSString * applicationBundleID; 
+(id)typeStrings;
+(id)localizedSingularForm;
+(id)localizedPluralForm;
-(id)subtitle1Label;
-(id)subtitle1Description;
-(BOOL)mustInstallNonInteractively;
-(id)restrictions;
-(NSString *)applicationBundleID;
-(id)initWithDictionary:(id)arg1 profile:(id)arg2 outError:(id*)arg3 ;
@end

