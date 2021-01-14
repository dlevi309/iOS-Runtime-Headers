/*
* Generated on Thursday, January 14, 2021 at 2:26:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaConversionService.framework/MediaConversionService
*/

#import <MediaConversionService/PAMediaConversionServiceImageMetadataPolicy.h>

@class NSArray;

@interface PAMediaConversionServiceCompositeImageMetadataPolicy : PAMediaConversionServiceImageMetadataPolicy {

	NSArray* _policies;

}

@property (retain) NSArray * policies;              //@synthesize policies=_policies - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)policyWithPolicies:(id)arg1 ;
-(NSArray *)policies;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setPolicies:(NSArray *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)processMetadata:(id)arg1 ;
-(BOOL)metadataNeedsProcessing:(id)arg1 ;
@end

