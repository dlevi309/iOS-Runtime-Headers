/*
* Generated on Monday, March 1, 2021 at 2:34:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MediaConversionService.framework/MediaConversionService
*/

#import <MediaConversionService/PAMediaConversionServiceImageMetadataPolicy.h>

@interface PAMediaConversionServiceDefaultImageMetadataPolicy : PAMediaConversionServiceImageMetadataPolicy {

	float _lossyCompressionQuality;

}

@property (assign) float lossyCompressionQuality;              //@synthesize lossyCompressionQuality=_lossyCompressionQuality - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)standardPolicy;
+(id)policyWithLossyCompressionQuality:(float)arg1 ;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)processMetadata:(id)arg1 ;
-(BOOL)metadataNeedsProcessing:(id)arg1 ;
-(id)initWithLossyCompressionQuality:(float)arg1 ;
-(float)lossyCompressionQuality;
-(void)setLossyCompressionQuality:(float)arg1 ;
@end

