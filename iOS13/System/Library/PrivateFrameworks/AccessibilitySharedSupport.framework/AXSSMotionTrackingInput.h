/*
* Generated on Monday, March 1, 2021 at 2:34:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AccessibilitySharedSupport.framework/AccessibilitySharedSupport
*/

#import <AccessibilitySharedSupport/AccessibilitySharedSupport-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSDictionary;

@interface AXSSMotionTrackingInput : NSObject <NSSecureCoding, NSCopying>

@property (nonatomic,copy,readonly) NSString * name; 
@property (nonatomic,copy,readonly) NSString * uniqueIdentifier; 
@property (nonatomic,copy,readonly) NSDictionary * plistDictionary; 
@property (nonatomic,readonly) BOOL isHIDDevice; 
@property (nonatomic,readonly) BOOL isCamera; 
@property (nonatomic,readonly) BOOL isVideoFile; 
@property (nonatomic,readonly) BOOL supportsExpressions; 
@property (nonatomic,readonly) BOOL supportsLookAtPoint; 
@property (nonatomic,readonly) unsigned long long trackingType; 
+(BOOL)supportsSecureCoding;
+(id)motionTrackingInputFromPlistDictionary:(id)arg1 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSDictionary *)plistDictionary;
-(id)initWithPlistDictionary:(id)arg1 ;
-(BOOL)isCamera;
-(BOOL)isVideoFile;
-(unsigned long long)trackingType;
-(BOOL)isEqualToMotionTrackingInput:(id)arg1 ;
-(BOOL)isHIDDevice;
-(BOOL)supportsExpressions;
-(BOOL)supportsLookAtPoint;
@end

