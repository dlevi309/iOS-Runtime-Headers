/*
* Generated on Monday, March 1, 2021 at 2:30:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
*/

#import <Foundation/Foundation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSDictionary, NSArray;

@interface NSError : NSObject <NSCopying, NSSecureCoding> {

	void* _reserved;
	long long _code;
	NSString* _domain;
	NSDictionary* _userInfo;

}

@property (copy,readonly) NSString * domain; 
@property (readonly) long long code; 
@property (copy,readonly) NSDictionary * userInfo; 
@property (copy,readonly) NSString * localizedDescription; 
@property (copy,readonly) NSString * localizedFailureReason; 
@property (copy,readonly) NSString * localizedRecoverySuggestion; 
@property (copy,readonly) NSArray * localizedRecoveryOptions; 
@property (readonly) id recoveryAttempter; 
@property (copy,readonly) NSString * helpAnchor; 
+(BOOL)supportsSecureCoding;
+(id)_readCorruptErrorWithFormat:(id)arg1 ;
+(id)errorWithDomain:(id)arg1 code:(long long)arg2 userInfo:(id)arg3 ;
+(void)setUserInfoValueProviderForDomain:(id)arg1 provider:(/*^block*/id)arg2 ;
+(/*^block*/id)userInfoValueProviderForDomain:(id)arg1 ;
+(void)_registerFormatter:(/*function pointer*/void*)arg1 forErrorKey:(id)arg2 parameters:(const char*)arg3 ;
+(void)_registerBuiltInFormatters;
+(void)_setFileNameLocalizationEnabled:(BOOL)arg1 ;
+(void)_web_addErrorsWithCodesAndDescriptions:(id)arg1 inDomain:(id)arg2 ;
+(id)_web_errorWithDomain:(id)arg1 code:(long long)arg2 failingURL:(id)arg3 ;
+(id)_web_errorWithDomain:(id)arg1 code:(long long)arg2 URL:(id)arg3 ;
-(id)init;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)domain;
-(long long)code;
-(NSString *)localizedDescription;
-(NSString *)localizedFailureReason;
-(NSString *)localizedRecoverySuggestion;
-(id)redactedDescription;
-(NSDictionary *)userInfo;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)_cfTypeID;
-(id)initWithDomain:(id)arg1 code:(long long)arg2 userInfo:(id)arg3 ;
-(id)replacementObjectForPortCoder:(id)arg1 ;
-(id)_cocoaErrorString:(id)arg1 ;
-(id)_cocoaErrorStringWithKind:(id)arg1 variant:(id)arg2 ;
-(id)_cocoaErrorStringWithKind:(id)arg1 ;
-(CFStringRef)_retainedUserInfoCallBackForKey:(id)arg1 ;
-(NSArray *)localizedRecoveryOptions;
-(id)recoveryAttempter;
-(NSString *)helpAnchor;
-(long long)_collectApplicableUserInfoFormatters:(/*function pointer*/void**)arg1 max:(long long)arg2 ;
-(id)_formatCocoaErrorString:(id)arg1 parameters:(const char*)arg2 applicableFormatters:(/*function pointer*/void**)arg3 count:(long long)arg4 ;
-(id)_cocoaErrorString:(id)arg1 fromBundle:(id)arg2 tableName:(id)arg3 ;
-(id)_web_initWithDomain:(id)arg1 code:(long long)arg2 failingURL:(id)arg3 ;
-(id)_web_initWithDomain_nowarn:(id)arg1 code:(long long)arg2 URL:(id)arg3 ;
-(id)_web_failingURL;
-(BOOL)_web_errorIsInDomain:(id)arg1 ;
-(id)_web_localizedDescription;
@end

