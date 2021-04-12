/*
* Generated on Monday, March 1, 2021 at 2:33:30 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

@class NSArray, HMSettingValue, NSString;


@protocol HMDSettingOwnerProtocol <HMDSettingProtocol>
@property (readonly) NSArray * constraints; 
@property (copy,readonly) HMSettingValue * internalValue; 
@property (copy) NSString * keyPath; 
@required
-(NSArray *)constraints;
-(NSString *)keyPath;
-(void)addConstraint:(id)arg1;
-(void)setKeyPath:(id)arg1;
-(HMSettingValue *)internalValue;
-(BOOL)updateWithSettingValue:(id)arg1;

@end

