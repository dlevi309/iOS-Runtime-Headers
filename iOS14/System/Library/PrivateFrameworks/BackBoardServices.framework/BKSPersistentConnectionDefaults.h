/*
* Generated on Thursday, January 14, 2021 at 2:20:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
*/

#import <BaseBoard/BSAbstractDefaultDomain.h>

@class NSString;

@interface BKSPersistentConnectionDefaults : BSAbstractDefaultDomain

@property (assign,nonatomic) int forceDemoMaxHBI; 
@property (nonatomic,retain) NSString * wifiInterfaceName; 
-(void)setWifiInterfaceName:(NSString *)arg1 ;
-(NSString *)wifiInterfaceName;
-(void)setForceDemoMaxHBI:(int)arg1 ;
-(int)forceDemoMaxHBI;
-(id)init;
-(void)_bindAndRegisterDefaults;
@end

