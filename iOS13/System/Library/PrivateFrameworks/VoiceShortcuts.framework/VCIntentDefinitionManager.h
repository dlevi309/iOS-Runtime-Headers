/*
* Generated on Monday, March 1, 2021 at 2:34:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VoiceShortcuts.framework/VoiceShortcuts
*/

#import <VoiceShortcuts/VCIntentDefinitionSyncDataHandler.h>
#import <libobjc.A.dylib/INVCIntentDefinitionManager.h>

@class NSString;

@interface VCIntentDefinitionManager : VCIntentDefinitionSyncDataHandler <INVCIntentDefinitionManager>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)intentDefinitionURLsForBundleID:(id)arg1 ;
+(id)intentDefinitionLocalizableFileURLsForBundleID:(id)arg1 ;
+(id)appInfoForBundleID:(id)arg1 ;
+(id)intentDefinitionURLsForBundleID:(id)arg1 withExtensions:(id)arg2 ;
@end

