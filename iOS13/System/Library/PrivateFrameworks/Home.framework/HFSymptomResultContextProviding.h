/*
* Generated on Monday, March 1, 2021 at 2:33:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
*/

@class NSString, NSUUID;


@protocol HFSymptomResultContextProviding <NSObject>
@property (nonatomic,copy,readonly) NSString * homeKitObjectName; 
@property (nonatomic,copy,readonly) NSString * accessoryName; 
@property (nonatomic,copy,readonly) NSUUID * accessoryUUID; 
@property (nonatomic,copy,readonly) NSString * currentDeviceNetworkSSID; 
@property (nonatomic,copy,readonly) NSString * accessoryNetworkSSID; 
@property (nonatomic,copy,readonly) NSString * currentUserID; 
@property (nonatomic,copy,readonly) NSString * currentAppleMusicAccountName; 
@required
-(NSUUID *)accessoryUUID;
-(NSString *)accessoryName;
-(BOOL)shouldDisplayManualFixOptionForSymptom:(id)arg1;
-(NSString *)homeKitObjectName;
-(NSString *)accessoryNetworkSSID;
-(NSString *)currentDeviceNetworkSSID;
-(NSString *)currentUserID;
-(NSString *)currentAppleMusicAccountName;
-(long long)fixStateForSymptom:(id)arg1;

@end

