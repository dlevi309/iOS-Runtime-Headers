/*
* Generated on Monday, March 1, 2021 at 2:34:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)description;
-(id)name;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)uniqueIdentifier;
-(NSNumber *)productID;
-(void)setDeviceName:(NSString *)arg1 ;
-(NSString *)deviceName;
-(void)setProductID:(NSNumber *)arg1 ;
-(NSNumber *)vendorID;
-(void)setVendorID:(NSNumber *)arg1 ;
-(NSString *)deviceUniqueID;
-(void)setDeviceUniqueID:(NSString *)arg1 ;
-(id)plistDictionary;
-(id)initWithPlistDictionary:(id)arg1 ;
-(unsigned long long)trackingType;
-(BOOL)isHIDDevice;
-(BOOL)supportsExpressions;
-(id)initWithDeviceUniqueID:(id)arg1 productID:(id)arg2 vendorID:(id)arg3 deviceName:(id)arg4 ;
-(NSDictionary *)hidMatchingDictionary;
@end

