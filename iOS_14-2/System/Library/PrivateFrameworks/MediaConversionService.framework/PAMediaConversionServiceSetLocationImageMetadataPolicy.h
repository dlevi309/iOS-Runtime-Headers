/*
* Generated on Thursday, January 14, 2021 at 2:26:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaConversionService.framework/MediaConversionService
*/

#import <MediaConversionService/PAMediaConversionServiceImageMetadataPolicy.h>

@class CLLocation;

@interface PAMediaConversionServiceSetLocationImageMetadataPolicy : PAMediaConversionServiceImageMetadataPolicy {

	CLLocation* _location;

}

@property (retain) CLLocation * location;              //@synthesize location=_location - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)policyWithLocation:(id)arg1 ;
-(CLLocation *)location;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setLocation:(CLLocation *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)processMetadata:(id)arg1 ;
-(BOOL)metadataNeedsProcessing:(id)arg1 ;
@end

