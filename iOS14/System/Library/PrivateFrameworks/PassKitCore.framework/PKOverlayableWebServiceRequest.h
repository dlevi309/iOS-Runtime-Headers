/*
* Generated on Thursday, January 14, 2021 at 2:21:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PKWebServiceRequest.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSMutableDictionary, NSArray, PKZeroingDataContainer, NSDictionary;

@interface PKOverlayableWebServiceRequest : PKWebServiceRequest <NSSecureCoding> {

	NSMutableDictionary* _overlayParameters;
	NSMutableDictionary* _secureOverlayParameters;
	NSArray* _overridenKeys;
	BOOL _requiresConfigurationForRetry;
	BOOL _requiresConfigurationForRedirect;

}

@property (nonatomic,readonly) PKZeroingDataContainer * archivedData; 
@property (nonatomic,copy) NSDictionary * overlayParameters; 
@property (nonatomic,copy) NSDictionary * secureOverlayParameters; 
@property (assign,nonatomic) BOOL requiresConfigurationForRetry;                   //@synthesize requiresConfigurationForRetry=_requiresConfigurationForRetry - In the implementation block
@property (assign,nonatomic) BOOL requiresConfigurationForRedirect;                //@synthesize requiresConfigurationForRedirect=_requiresConfigurationForRedirect - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setOverlayValue:(id)arg1 forKey:(id)arg2 ;
-(id)overlayValueForKey:(id)arg1 ;
-(NSDictionary *)overlayParameters;
-(void)setOverlayParameters:(NSDictionary *)arg1 ;
-(void)setSecureOverlayValue:(id)arg1 forKey:(id)arg2 ;
-(id)secureOverlayValueForKey:(id)arg1 ;
-(void)setSecureOverlayParameters:(NSDictionary *)arg1 ;
-(void)_setOverriddenKeys:(id)arg1 ;
-(BOOL)hasOverlayParameters;
-(void)_updateRequestForRedirect:(id)arg1 overrides:(id)arg2 webService:(id)arg3 withCompletion:(/*^block*/id)arg4 ;
-(BOOL)requiresConfigurationForRetry;
-(void)_updateRequestForRetry:(id)arg1 retryFields:(id)arg2 webService:(id)arg3 withCompletion:(/*^block*/id)arg4 ;
-(void)setRequiresConfigurationForRetry:(BOOL)arg1 ;
-(BOOL)requiresConfigurationForRedirect;
-(void)setRequiresConfigurationForRedirect:(BOOL)arg1 ;
-(NSDictionary *)secureOverlayParameters;
-(void)_applySecureOverlayToDictionary:(id)arg1 ;
-(void)_applyOverlayToDictionary:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(PKZeroingDataContainer *)archivedData;
@end

