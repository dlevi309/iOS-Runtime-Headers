/*
* Generated on Thursday, January 14, 2021 at 2:25:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HomeKitBackingStore/HMBModel.h>
#import <libobjc.A.dylib/HMDSettingGroupModelProtocol.h>

@class NSString, NSUUID;

@interface HMDSettingGroupModel : HMBModel <HMDSettingGroupModelProtocol>

@property (nonatomic,copy) NSString * name; 
@property (nonatomic,readonly) NSUUID * hmbModelID; 
@property (nonatomic,readonly) NSUUID * hmbParentModelID; 
@property (nonatomic,readonly) NSString * nameForKeyPath; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)hmbProperties;
-(id)copyWithNewParentModelID:(id)arg1 ;
-(NSString *)nameForKeyPath;
@end

