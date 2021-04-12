/*
* Generated on Thursday, January 14, 2021 at 2:20:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
*/

#import <Foundation/Foundation-Structs.h>
#import <libobjc.A.dylib/BSDescriptionProviding.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSDictionary, NSArray;

@interface NSError : NSObject <BSDescriptionProviding, NSCopying, NSSecureCoding> {

	void* _reserved;
	long long _code;
	NSString* _domain;
	NSDictionary* _userInfo;

}

@property (getter=ac_isUnrecoverableDatabaseError,nonatomic,readonly) BOOL ac_unrecoverableDatabaseError; 
@property (getter=ac_isDiskFullSQLError,nonatomic,readonly) BOOL ac_diskFullSQLError; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (copy,readonly) NSString * domain; 
@property (readonly) long long code; 
@property (copy,readonly) NSDictionary * userInfo; 
@property (copy,readonly) NSString * localizedDescription; 
@property (copy,readonly) NSString * localizedFailureReason; 
@property (copy,readonly) NSString * localizedRecoverySuggestion; 
@property (copy,readonly) NSArray * localizedRecoveryOptions; 
@property (readonly) id recoveryAttempter; 
@property (copy,readonly) NSString * helpAnchor; 
+(id)rbs_errorClientNotEntitled:(id)arg1 permanent:(BOOL)arg2 ;
+(id)errorWithMTLCaptureErrorCode:(long long)arg1 ;
+(BOOL)supportsSecureCoding;
+(void)_setFileNameLocalizationEnabled:(BOOL)arg1 ;
+(void)_web_addErrorsWithCodesAndDescriptions:(id)arg1 inDomain:(id)arg2 ;
+(id)errorWithDomain:(id)arg1 code:(long long)arg2 userInfo:(id)arg3 ;
+(id)_web_errorWithDomain:(id)arg1 code:(long long)arg2 URL:(id)arg3 ;
+(void)_registerFormatter:(/*function pointer*/void*)arg1 forErrorKey:(id)arg2 parameters:(const char*)arg3 ;
+(void)setUserInfoValueProviderForDomain:(id)arg1 provider:(/*^block*/id)arg2 ;
+(id)_web_errorWithDomain:(id)arg1 code:(long long)arg2 failingURL:(id)arg3 ;
+(/*^block*/id)userInfoValueProviderForDomain:(id)arg1 ;
+(id)_readCorruptErrorWithFormat:(id)arg1 ;
+(void)_registerBuiltInFormatters;
-(BOOL)ac_isUnrecoverableDatabaseError;
-(id)ac_secureCodingError;
-(BOOL)ac_isDiskFullSQLError;
-(id)ac_sanitizeObject:(id)arg1 ;
-(BOOL)rbs_isPermanentFailure;
-(id)succinctDescription;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)initWithIOAccelError:(long long)arg1 ;
-(NSString *)localizedFailureReason;
-(NSString *)localizedRecoverySuggestion;
-(id)initWithDomain:(id)arg1 code:(long long)arg2 userInfo:(id)arg3 ;
-(NSString *)helpAnchor;
-(id)_formatCocoaErrorString:(id)arg1 parameters:(const char*)arg2 applicableFormatters:(/*function pointer*/void**)arg3 count:(long long)arg4 ;
-(unsigned long long)_cfTypeID;
-(NSDictionary *)userInfo;
-(long long)_collectApplicableUserInfoFormatters:(/*function pointer*/void**)arg1 max:(long long)arg2 ;
-(id)_web_initWithDomain_nowarn:(id)arg1 code:(long long)arg2 URL:(id)arg3 ;
-(id)init;
-(id)_cocoaErrorString:(id)arg1 fromBundle:(id)arg2 tableName:(id)arg3 ;
-(id)_cocoaErrorStringWithKind:(id)arg1 variant:(id)arg2 ;
-(CFStringRef)_retainedUserInfoCallBackForKey:(id)arg1 ;
-(id)_web_initWithDomain:(id)arg1 code:(long long)arg2 failingURL:(id)arg3 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)domain;
-(id)_web_localizedDescription;
-(id)replacementObjectForPortCoder:(id)arg1 ;
-(id)_web_failingURL;
-(id)recoveryAttempter;
-(NSArray *)localizedRecoveryOptions;
-(BOOL)_web_errorIsInDomain:(id)arg1 ;
-(id)_cocoaErrorStringWithKind:(id)arg1 ;
-(NSString *)description;
-(NSString *)localizedDescription;
-(id)_cocoaErrorString:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(long long)code;
-(id)redactedDescription;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
@end

