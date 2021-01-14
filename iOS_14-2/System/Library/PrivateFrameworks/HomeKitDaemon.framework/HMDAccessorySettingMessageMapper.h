/*
* Generated on Thursday, January 14, 2021 at 2:25:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HomeKitDaemon/HMDSettingMessageMapper.h>

@interface HMDAccessorySettingMessageMapper : HMDSettingMessageMapper {

	BOOL _shouldAllowSharedAdminToEditConstraints;

}

@property (assign,nonatomic) BOOL shouldAllowSharedAdminToEditConstraints;              //@synthesize shouldAllowSharedAdminToEditConstraints=_shouldAllowSharedAdminToEditConstraints - In the implementation block
-(id)initWithIdentifier:(id)arg1 queue:(id)arg2 allowSharedAdminEditConstraints:(BOOL)arg3 ;
-(BOOL)shouldAllowSharedAdminToEditConstraints;
-(void)setShouldAllowSharedAdminToEditConstraints:(BOOL)arg1 ;
@end

