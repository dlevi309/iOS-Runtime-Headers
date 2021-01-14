/*
* Generated on Thursday, January 14, 2021 at 2:25:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)plistDictionary;
-(void)encodeWithCoder:(id)arg1 ;
-(id)uniqueIdentifier;
-(NSString *)name;
-(id)initWithName:(id)arg1 ;
-(NSString *)_name;
-(id)description;
-(BOOL)isVideoFile;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithPlistDictionary:(id)arg1 ;
-(unsigned long long)trackingType;
-(BOOL)supportsExpressions;
-(void)set_name:(NSString *)arg1 ;
@end

