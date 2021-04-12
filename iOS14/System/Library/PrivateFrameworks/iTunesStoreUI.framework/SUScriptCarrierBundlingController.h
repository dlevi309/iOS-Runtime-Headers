/*
* Generated on Thursday, January 14, 2021 at 2:25:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
*/

#import <iTunesStoreUI/SUScriptObject.h>

@class NSString;

@interface SUScriptCarrierBundlingController : SUScriptObject

@property (readonly) NSString * provisioningStyleAlways; 
@property (readonly) NSString * provisioningStyleNever; 
@property (readonly) NSString * provisioningStyleOnce; 
@property (readonly) NSString * statusEligible; 
@property (readonly) NSString * statusNeedsManualVerification; 
@property (readonly) NSString * statusNotEligible; 
@property (readonly) NSString * statusUnknown; 
@property (readonly) NSString * statusUnlinked; 
+(void)initialize;
+(id)webScriptNameForSelector:(SEL)arg1 ;
+(id)webScriptNameForKeyName:(id)arg1 ;
-(id)attributeKeys;
-(id)_className;
-(id)scriptAttributeKeys;
-(void)updateLastKnownStatus:(id)arg1 ;
-(NSString *)provisioningStyleAlways;
-(NSString *)provisioningStyleNever;
-(NSString *)provisioningStyleOnce;
-(NSString *)statusEligible;
-(NSString *)statusNeedsManualVerification;
-(NSString *)statusNotEligible;
-(NSString *)statusUnknown;
-(NSString *)statusUnlinked;
@end

