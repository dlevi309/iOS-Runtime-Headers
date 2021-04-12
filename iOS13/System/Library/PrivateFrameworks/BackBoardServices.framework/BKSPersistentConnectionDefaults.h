/*
* Generated on Monday, March 1, 2021 at 2:30:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

