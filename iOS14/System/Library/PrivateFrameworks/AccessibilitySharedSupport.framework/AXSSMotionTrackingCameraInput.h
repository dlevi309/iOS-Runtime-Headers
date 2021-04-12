/*
* Generated on Thursday, January 14, 2021 at 2:25:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AccessibilitySharedSupport.framework/AccessibilitySharedSupport
*/

#import <AccessibilitySharedSupport/AXSSMotionTrackingInput.h>

@class NSString;

@interface AXSSMotionTrackingCameraInput : AXSSMotionTrackingInput {

	BOOL _isBuiltIn;
	NSString* _name;
	NSString* _captureDeviceUniqueID;

}

@property (nonatomic,copy) NSString * captureDeviceUniqueID;              //@synthesize captureDeviceUniqueID=_captureDeviceUniqueID - In the implementation block
@property (nonatomic,copy) NSString * name;                               //@synthesize name=_name - In the implementation block
@property (assign,nonatomic) BOOL isBuiltIn;                              //@synthesize isBuiltIn=_isBuiltIn - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)captureDeviceForMotionTrackingInput:(id)arg1 ;
+(id)motionTrackingCameraInputWithAVCaptureDevice:(id)arg1 ;
-(BOOL)isBuiltIn;
-(id)plistDictionary;
-(void)setIsBuiltIn:(BOOL)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)uniqueIdentifier;
-(NSString *)name;
-(BOOL)isCamera;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(id)initWithPlistDictionary:(id)arg1 ;
-(unsigned long long)trackingType;
-(BOOL)supportsExpressions;
-(NSString *)captureDeviceUniqueID;
-(id)initWithCaptureDeviceUniqueID:(id)arg1 name:(id)arg2 isBuiltIn:(BOOL)arg3 ;
-(void)setCaptureDeviceUniqueID:(NSString *)arg1 ;
@end

