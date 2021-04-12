/*
* Generated on Monday, March 1, 2021 at 2:34:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)description;
-(NSString *)name;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(id)uniqueIdentifier;
-(void)setIsBuiltIn:(BOOL)arg1 ;
-(BOOL)isBuiltIn;
-(id)plistDictionary;
-(id)initWithPlistDictionary:(id)arg1 ;
-(BOOL)isCamera;
-(unsigned long long)trackingType;
-(BOOL)supportsExpressions;
-(NSString *)captureDeviceUniqueID;
-(id)initWithCaptureDeviceUniqueID:(id)arg1 name:(id)arg2 isBuiltIn:(BOOL)arg3 ;
-(void)setCaptureDeviceUniqueID:(NSString *)arg1 ;
@end

