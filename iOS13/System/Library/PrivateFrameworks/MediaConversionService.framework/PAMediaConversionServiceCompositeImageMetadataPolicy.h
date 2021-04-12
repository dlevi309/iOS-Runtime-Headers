/*
* Generated on Monday, March 1, 2021 at 2:34:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSArray *)policies;
-(id)processMetadata:(id)arg1 ;
-(void)setPolicies:(NSArray *)arg1 ;
-(BOOL)metadataNeedsProcessing:(id)arg1 ;
@end

