/*
* Generated on Thursday, January 14, 2021 at 2:28:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SystemStatusServer.framework/SystemStatusServer
*/

#import <SystemStatusServer/SystemStatusServer-Structs.h>
#import <SystemStatusServer/STTelephonyMobileEquipmentInfo.h>

@class NSString;

@interface STMutableTelephonyMobileEquipmentInfo : STTelephonyMobileEquipmentInfo

@property (nonatomic,copy) NSString * MEID; 
@property (nonatomic,copy) NSString * IMEI; 
@property (nonatomic,copy) NSString * ICCID; 
@property (nonatomic,copy) NSString * CSN; 
@property (nonatomic,copy) NSString * bootstrapICCID; 
-(void)setCSN:(NSString *)arg1 ;
-(void)setMEID:(NSString *)arg1 ;
-(void)setIMEI:(NSString *)arg1 ;
-(void)setICCID:(NSString *)arg1 ;
-(void)setBootstrapICCID:(NSString *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

