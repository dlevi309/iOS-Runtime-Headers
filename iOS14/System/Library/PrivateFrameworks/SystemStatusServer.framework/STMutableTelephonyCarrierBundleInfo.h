/*
* Generated on Thursday, January 14, 2021 at 2:28:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SystemStatusServer.framework/SystemStatusServer
*/

#import <SystemStatusServer/SystemStatusServer-Structs.h>
#import <SystemStatusServer/STTelephonyCarrierBundleInfo.h>

@class NSString, NSArray;

@interface STMutableTelephonyCarrierBundleInfo : STTelephonyCarrierBundleInfo

@property (assign,nonatomic) BOOL LTEConnectionShows4G; 
@property (assign,getter=isReinitiatingActivationDisabled,nonatomic) BOOL reinitiatingActivationDisabled; 
@property (nonatomic,copy) NSString * customerServicePhoneNumber; 
@property (nonatomic,copy) NSArray * disabledApplicationIDs; 
@property (nonatomic,copy) NSString * carrierName; 
@property (nonatomic,copy) NSString * homeCountryCode; 
-(void)setCustomerServicePhoneNumber:(NSString *)arg1 ;
-(void)setLTEConnectionShows4G:(BOOL)arg1 ;
-(void)setReinitiatingActivationDisabled:(BOOL)arg1 ;
-(void)setDisabledApplicationIDs:(NSArray *)arg1 ;
-(void)setCarrierName:(NSString *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setHomeCountryCode:(NSString *)arg1 ;
@end

