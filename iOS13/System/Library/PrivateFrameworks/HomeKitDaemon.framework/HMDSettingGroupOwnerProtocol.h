/*
* Generated on Monday, March 1, 2021 at 2:33:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

@class NSArray, NSString;


@protocol HMDSettingGroupOwnerProtocol <HMDSettingGroupProtocol>
@property (copy,readonly) NSArray * settings; 
@property (copy,readonly) NSArray * groups; 
@property (copy) NSString * keyPath; 
@required
-(NSString *)keyPath;
-(NSArray *)settings;
-(NSArray *)groups;
-(void)setKeyPath:(id)arg1;
-(void)addGroup:(id)arg1;
-(void)addSetting:(id)arg1;

@end

