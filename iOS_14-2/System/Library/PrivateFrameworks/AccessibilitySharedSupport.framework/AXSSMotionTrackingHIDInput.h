/*
* Generated on Thursday, January 14, 2021 at 2:25:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AccessibilitySharedSupport.framework/AccessibilitySharedSupport
*/

#import <AccessibilitySharedSupport/AXSSMotionTrackingInput.h>

@class NSString, NSNumber, NSDictionary;

@interface AXSSMotionTrackingHIDInput : AXSSMotionTrackingInput {

	NSString* _deviceUniqueID;
	NSNumber* _productID;
	NSNumber* _vendorID;
	NSString* _deviceName;

}

@property (nonatomic,copy) NSString * deviceUniqueID;                             //@synthesize deviceUniqueID=_deviceUniqueID - In the implementation block
@property (nonatomic,copy) NSNumber * productID;                                  //@synthesize productID=_productID - In the implementation block
@property (nonatomic,copy) NSNumber * vendorID;                                   //@synthesize vendorID=_vendorID - In the implementation block
@property (nonatomic,copy) NSString * deviceName;                                 //@synthesize deviceName=_deviceName - In the implementation block
@property (nonatomic,readonly) NSDictionary * hidMatchingDictionary; 
+(BOOL)supportsSecureCoding;
+(id)motionTrackingHIDInputWithDevice:(id)arg1 ;
-(id)plistDictionary;
-(NSString *)deviceName;
-(NSString *)deviceUniqueID;
-(void)setDeviceUniqueID:(NSString *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)uniqueIdentifier;
-(id)name;
-(id)description;
-(NSNumber *)productID;
-(id)initWithCoder:(id)arg1 ;
-(void)setProductID:(NSNumber *)arg1 ;
-(void)setDeviceName:(NSString *)arg1 ;
-(void)setVendorID:(NSNumber *)arg1 ;
-(NSNumber *)vendorID;
-(id)initWithPlistDictionary:(id)arg1 ;
-(unsigned long long)trackingType;
-(BOOL)isHIDDevice;
-(BOOL)supportsExpressions;
-(id)initWithDeviceUniqueID:(id)arg1 productID:(id)arg2 vendorID:(id)arg3 deviceName:(id)arg4 ;
-(NSDictionary *)hidMatchingDictionary;
@end

