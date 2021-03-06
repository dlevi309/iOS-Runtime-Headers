/*
* Generated on Thursday, January 14, 2021 at 2:21:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/


@protocol PKCloudStoreCoding <NSSecureCoding>
@optional
-(void)encodeServerAndDeviceDataWithCloudStoreCoder:(id)arg1;

@required
+(id)recordNamePrefix;
-(unsigned long long)itemType;
-(void)encodeWithCloudStoreCoder:(id)arg1;
-(id)initWithCloudStoreCoder:(id)arg1;
-(id)recordTypesAndNamesIncludingServerData:(BOOL)arg1;
-(void)applyPropertiesFromCloudStoreRecord:(id)arg1;
-(id)primaryIdentifier;

@end

