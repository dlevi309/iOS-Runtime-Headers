/*
* Generated on Thursday, January 14, 2021 at 2:25:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HomeKitDaemon/HomeKitDaemon-Structs.h>
#import <HomeKitDaemon/HMDHomeData.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@class NSArray, NSUUID, NSString, HMDApplicationData, HMDAccount, NSDictionary;

@interface HMDMutableHomeData : HMDHomeData <NSCopying, NSMutableCopying>

@property (nonatomic,copy) NSArray * homes; 
@property (nonatomic,copy) NSArray * accessories; 
@property (nonatomic,copy) NSUUID * primaryHomeUUID; 
@property (nonatomic,copy) NSUUID * lastCurrentHomeUUID; 
@property (assign,nonatomic) long long dataVersion; 
@property (assign,nonatomic) long long schemaVersion; 
@property (nonatomic,copy) NSUUID * dataTag; 
@property (nonatomic,copy) NSArray * UUIDsOfRemovedHomes; 
@property (nonatomic,copy) NSArray * cloudZones; 
@property (nonatomic,copy) NSArray * incomingInvitations; 
@property (nonatomic,copy) NSString * currentDevice; 
@property (nonatomic,copy) NSArray * pendingReasonSaved; 
@property (nonatomic,copy) NSArray * pendingUserManagementOperations; 
@property (nonatomic,copy) NSArray * unprocessedOperationIdentifiers; 
@property (nonatomic,copy) HMDApplicationData * applicationData; 
@property (assign,nonatomic) long long residentEnabledState; 
@property (nonatomic,retain) HMDAccount * account; 
@property (nonatomic,copy) NSArray * remoteAccounts; 
@property (assign,nonatomic) BOOL accessAllowedWhenLocked; 
@property (nonatomic,copy) NSDictionary * demoAccessories; 
@property (assign,nonatomic) BOOL demoFinalized; 
-(void)setAccount:(HMDAccount *)arg1 ;
-(void)setDataVersion:(long long)arg1 ;
-(void)setApplicationData:(HMDApplicationData *)arg1 ;
-(void)setSchemaVersion:(long long)arg1 ;
-(void)setAccessories:(NSArray *)arg1 ;
-(void)setAccessAllowedWhenLocked:(BOOL)arg1 ;
-(void)setDemoAccessories:(NSDictionary *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setCurrentDevice:(NSString *)arg1 ;
-(void)setPrimaryHomeUUID:(NSUUID *)arg1 ;
-(void)setHomes:(NSArray *)arg1 ;
-(void)setLastCurrentHomeUUID:(NSUUID *)arg1 ;
-(void)setDataTag:(NSUUID *)arg1 ;
-(void)setUUIDsOfRemovedHomes:(NSArray *)arg1 ;
-(void)setCloudZones:(NSArray *)arg1 ;
-(void)setIncomingInvitations:(NSArray *)arg1 ;
-(void)setPendingReasonSaved:(NSArray *)arg1 ;
-(void)setPendingUserManagementOperations:(NSArray *)arg1 ;
-(void)setUnprocessedOperationIdentifiers:(NSArray *)arg1 ;
-(void)setResidentEnabledState:(long long)arg1 ;
-(void)setRemoteAccounts:(NSArray *)arg1 ;
-(void)setDemoFinalized:(BOOL)arg1 ;
@end

