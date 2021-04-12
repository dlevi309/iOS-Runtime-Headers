/*
* Generated on Monday, March 1, 2021 at 2:31:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <ITMLKit/IKJSObject.h>
#import <libobjc.A.dylib/SKUIJSTelephony.h>
@class NSString;


@protocol SKUIJSTelephony <JSExport>
@property (getter=isCellularRoaming,nonatomic,readonly) BOOL cellularRoaming; 
@property (nonatomic,readonly) NSString * countryCode; 
@property (nonatomic,readonly) NSString * mobileCountryCode; 
@property (nonatomic,readonly) NSString * mobileNetworkCode; 
@property (nonatomic,readonly) NSString * operatorName; 
@property (nonatomic,readonly) NSString * phoneNumber; 
@property (nonatomic,readonly) NSString * providerName; 
@required
-(NSString *)countryCode;
-(NSString *)phoneNumber;
-(NSString *)mobileNetworkCode;
-(NSString *)mobileCountryCode;
-(NSString *)providerName;
-(void)beginObserving;
-(NSString *)operatorName;
-(id)formattedPhoneNumber:(id)arg1;
-(void)sendSMSWithBodyText:(id)arg1 :(id)arg2 :(id)arg3;
-(BOOL)isCellularRoaming;

@end


@protocol OS_dispatch_queue;
@class NSString, NSObject;

@interface SKUIJSTelephony : IKJSObject <SKUIJSTelephony> {

	BOOL _isObserving;
	NSObject*<OS_dispatch_queue> _telephonyQueue;
	CTServerConnectionRef _telephonyServer;

}

@property (getter=isCellularRoaming,nonatomic,readonly) BOOL cellularRoaming; 
@property (nonatomic,readonly) NSString * countryCode; 
@property (nonatomic,readonly) NSString * mobileCountryCode; 
@property (nonatomic,readonly) NSString * mobileNetworkCode; 
@property (nonatomic,readonly) NSString * operatorName; 
@property (nonatomic,readonly) NSString * phoneNumber; 
@property (nonatomic,readonly) NSString * providerName; 
-(void)dealloc;
-(NSString *)countryCode;
-(NSString *)phoneNumber;
-(NSString *)mobileNetworkCode;
-(NSString *)mobileCountryCode;
-(NSString *)providerName;
-(void)beginObserving;
-(NSString *)operatorName;
-(id)initWithAppContext:(id)arg1 ;
-(CTServerConnectionRef)_telephonyServer;
-(id)formattedPhoneNumber:(id)arg1 ;
-(void)sendSMSWithBodyText:(id)arg1 :(id)arg2 :(id)arg3 ;
-(BOOL)isCellularRoaming;
@end

