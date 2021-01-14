/*
* Generated on Thursday, January 14, 2021 at 2:25:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HomeKitDaemon/HMDSettingGroupModel.h>
#import <libobjc.A.dylib/HMDConflictResolutionModel.h>

@class NSUUID;

@interface HMDSettingRootGroupModel : HMDSettingGroupModel <HMDConflictResolutionModel>

@property (nonatomic,copy) NSUUID * conflictResolutionToken; 
+(id)hmbProperties;
-(id)initWithModelID:(id)arg1 parentModelID:(id)arg2 ;
-(id)copyWithNewParentModelID:(id)arg1 ;
-(id)nameForKeyPath;
@end

