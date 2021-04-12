/*
* Generated on Thursday, January 14, 2021 at 2:25:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

@class NSUUID, NSString;


@protocol HMDSettingBaseProtocol <NSObject,NSSecureCoding>
@property (copy,readonly) NSUUID * parentIdentifier; 
@property (copy,readonly) NSUUID * identifier; 
@property (copy,readonly) NSString * name; 
@required
-(NSUUID *)parentIdentifier;
-(NSString *)name;
-(NSUUID *)identifier;

@end

