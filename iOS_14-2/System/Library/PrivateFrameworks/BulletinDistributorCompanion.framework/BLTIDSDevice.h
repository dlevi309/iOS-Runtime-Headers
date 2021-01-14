/*
* Generated on Thursday, January 14, 2021 at 2:27:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
*/

#import <libobjc.A.dylib/BLTAbstractIDSDevice.h>

@class IDSDevice, NSString;

@interface BLTIDSDevice : NSObject <BLTAbstractIDSDevice> {

	IDSDevice* _device;

}

@property (nonatomic,readonly) BOOL isDefaultPairedDevice; 
@property (nonatomic,readonly) BOOL isNearby; 
@property (nonatomic,readonly) BOOL isConnected; 
@property (nonatomic,readonly) BOOL isCloudReachable; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)isConnected;
-(id)succinctDescription;
-(BOOL)isNearby;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(NSString *)description;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(BOOL)isDefaultPairedDevice;
-(id)succinctDescriptionBuilder;
-(void)dealloc;
-(id)initWithIDSDevice:(id)arg1 ;
-(BOOL)isCloudReachable;
@end

