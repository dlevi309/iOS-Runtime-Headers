/*
* Generated on Monday, March 1, 2021 at 2:33:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

