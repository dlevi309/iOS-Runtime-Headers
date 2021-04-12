/*
* Generated on Thursday, January 14, 2021 at 2:25:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

@class NSString, NSUUID;


@protocol HMDBackingStoreRecordMapping <NSObject>
@property (nonatomic,readonly) NSString * recordName; 
@property (nonatomic,readonly) NSUUID * uuid; 
@property (nonatomic,readonly) NSUUID * parentUuid; 
@property (nonatomic,readonly) NSString * type; 
@required
-(NSUUID *)uuid;
-(NSString *)type;
-(NSString *)recordName;
-(NSUUID *)parentUuid;

@end

