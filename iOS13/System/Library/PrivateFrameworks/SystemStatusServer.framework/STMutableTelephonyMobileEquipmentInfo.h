/*
* Generated on Monday, March 1, 2021 at 2:33:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setIMEI:(NSString *)arg1 ;
-(void)setICCID:(NSString *)arg1 ;
-(void)setMEID:(NSString *)arg1 ;
-(void)setCSN:(NSString *)arg1 ;
-(void)setBootstrapICCID:(NSString *)arg1 ;
@end

