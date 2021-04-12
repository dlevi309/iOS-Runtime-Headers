/*
* Generated on Monday, March 1, 2021 at 2:31:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CallKit.framework/CallKit
*/

#import <CallKit/CallKit-Structs.h>
#import <libobjc.A.dylib/CXCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface CXCallFailureContext : NSObject <CXCopying, NSSecureCoding> {

	BOOL _hasWiFiSettingsRemediation;
	BOOL _hasCellularSettingsRemediation;
	BOOL _hasDateAndTimeSettingsRemediation;
	BOOL _hasLocationSettingsRemediation;
	NSString* _title;
	NSString* _message;
	long long _failureReason;
	long long _providerErrorCode;
	long long _providerEndedReason;

}

@property (nonatomic,copy) NSString * title;                                      //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSString * message;                                    //@synthesize message=_message - In the implementation block
@property (assign,nonatomic) long long failureReason;                             //@synthesize failureReason=_failureReason - In the implementation block
@property (assign,nonatomic) long long providerErrorCode;                         //@synthesize providerErrorCode=_providerErrorCode - In the implementation block
@property (assign,nonatomic) long long providerEndedReason;                       //@synthesize providerEndedReason=_providerEndedReason - In the implementation block
@property (assign,nonatomic) BOOL hasWiFiSettingsRemediation;                     //@synthesize hasWiFiSettingsRemediation=_hasWiFiSettingsRemediation - In the implementation block
@property (assign,nonatomic) BOOL hasCellularSettingsRemediation;                 //@synthesize hasCellularSettingsRemediation=_hasCellularSettingsRemediation - In the implementation block
@property (assign,nonatomic) BOOL hasDateAndTimeSettingsRemediation;              //@synthesize hasDateAndTimeSettingsRemediation=_hasDateAndTimeSettingsRemediation - In the implementation block
@property (assign,nonatomic) BOOL hasLocationSettingsRemediation;                 //@synthesize hasLocationSettingsRemediation=_hasLocationSettingsRemediation - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)message;
-(void)setMessage:(NSString *)arg1 ;
-(long long)failureReason;
-(void)setFailureReason:(long long)arg1 ;
-(void)updateSanitizedCopy:(id)arg1 withZone:(NSZone*)arg2 ;
-(void)updateCopy:(id)arg1 withZone:(NSZone*)arg2 ;
-(id)sanitizedCopyWithZone:(NSZone*)arg1 ;
-(id)sanitizedCopy;
-(long long)providerErrorCode;
-(long long)providerEndedReason;
-(BOOL)hasWiFiSettingsRemediation;
-(BOOL)hasCellularSettingsRemediation;
-(BOOL)hasDateAndTimeSettingsRemediation;
-(BOOL)hasLocationSettingsRemediation;
-(void)setProviderErrorCode:(long long)arg1 ;
-(void)setProviderEndedReason:(long long)arg1 ;
-(void)setHasWiFiSettingsRemediation:(BOOL)arg1 ;
-(void)setHasCellularSettingsRemediation:(BOOL)arg1 ;
-(void)setHasDateAndTimeSettingsRemediation:(BOOL)arg1 ;
-(void)setHasLocationSettingsRemediation:(BOOL)arg1 ;
@end

