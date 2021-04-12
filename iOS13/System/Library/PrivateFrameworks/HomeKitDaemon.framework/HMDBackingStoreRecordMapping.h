/*
* Generated on Monday, March 1, 2021 at 2:33:30 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

@class NSString, NSUUID;


@protocol HMDBackingStoreRecordMapping <NSObject>
@property (nonatomic,readonly) NSString * recordName; 
@property (nonatomic,readonly) NSUUID * uuid; 
@property (nonatomic,readonly) NSUUID * parentUuid; 
@property (nonatomic,readonly) NSString * type; 
@required
-(NSString *)type;
-(NSUUID *)uuid;
-(NSString *)recordName;
-(NSUUID *)parentUuid;

@end

