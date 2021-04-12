/*
* Generated on Monday, March 1, 2021 at 2:34:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AccessibilitySharedSupport.framework/AccessibilitySharedSupport
*/

#import <AccessibilitySharedSupport/AXSSMotionTrackingInput.h>

@class NSString;

@interface AXSSMotionTrackingVideoFileInput : AXSSMotionTrackingInput {

	NSString* __name;

}

@property (nonatomic,copy) NSString * _name;                      //@synthesize _name=__name - In the implementation block
@property (nonatomic,copy,readonly) NSString * name; 
+(BOOL)supportsSecureCoding;
+(id)videoFileInputWithName:(id)arg1 ;
-(id)description;
-(NSString *)name;
-(NSString *)_name;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithName:(id)arg1 ;
-(id)uniqueIdentifier;
-(id)plistDictionary;
-(id)initWithPlistDictionary:(id)arg1 ;
-(BOOL)isVideoFile;
-(unsigned long long)trackingType;
-(BOOL)supportsExpressions;
-(void)set_name:(NSString *)arg1 ;
@end

