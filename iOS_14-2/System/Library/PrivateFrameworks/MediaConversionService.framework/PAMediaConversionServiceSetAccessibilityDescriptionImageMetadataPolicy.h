/*
* Generated on Thursday, January 14, 2021 at 2:26:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaConversionService.framework/MediaConversionService
*/

#import <MediaConversionService/PAMediaConversionServiceImageMetadataPolicy.h>

@class NSString;

@interface PAMediaConversionServiceSetAccessibilityDescriptionImageMetadataPolicy : PAMediaConversionServiceImageMetadataPolicy {

	NSString* _accessibilityDescription;

}

@property (copy) NSString * accessibilityDescription;              //@synthesize accessibilityDescription=_accessibilityDescription - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)policyWithAccessibilityDescription:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)accessibilityDescription;
-(id)initWithCoder:(id)arg1 ;
-(void)setAccessibilityDescription:(NSString *)arg1 ;
-(id)processMetadata:(id)arg1 ;
-(BOOL)metadataNeedsProcessing:(id)arg1 ;
@end

