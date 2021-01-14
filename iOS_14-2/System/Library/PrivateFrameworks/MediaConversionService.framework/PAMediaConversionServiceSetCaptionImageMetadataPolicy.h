/*
* Generated on Thursday, January 14, 2021 at 2:26:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaConversionService.framework/MediaConversionService
*/

#import <MediaConversionService/PAMediaConversionServiceImageMetadataPolicy.h>

@class NSString;

@interface PAMediaConversionServiceSetCaptionImageMetadataPolicy : PAMediaConversionServiceImageMetadataPolicy {

	NSString* _caption;

}

@property (copy) NSString * caption;              //@synthesize caption=_caption - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)policyWithCaption:(id)arg1 ;
-(NSString *)caption;
-(void)setCaption:(NSString *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)processMetadata:(id)arg1 ;
-(BOOL)metadataNeedsProcessing:(id)arg1 ;
@end

