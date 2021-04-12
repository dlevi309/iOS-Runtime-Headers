/*
* Generated on Thursday, January 14, 2021 at 2:25:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSDictionary *)plistDictionary;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isCamera;
-(BOOL)isVideoFile;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithPlistDictionary:(id)arg1 ;
-(unsigned long long)trackingType;
-(BOOL)isEqualToMotionTrackingInput:(id)arg1 ;
-(BOOL)isHIDDevice;
-(BOOL)supportsExpressions;
-(BOOL)supportsLookAtPoint;
@end

