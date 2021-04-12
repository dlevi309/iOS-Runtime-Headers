/*
* Generated on Thursday, January 14, 2021 at 2:26:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaConversionService.framework/MediaConversionService
*/

#import <MediaConversionService/PAMediaConversionServiceImageMetadataPolicy.h>

@interface PAMediaConversionServiceAddPFMediaMetadataPolicy : PAMediaConversionServiceImageMetadataPolicy {

	unsigned char _type;
	id _value;

}

@property (assign) unsigned char type;              //@synthesize type=_type - In the implementation block
@property (retain) id value;                        //@synthesize value=_value - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)policyWithType:(unsigned char)arg1 value:(id)arg2 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setType:(unsigned char)arg1 ;
-(void)setValue:(id)arg1 ;
-(unsigned char)type;
-(id)initWithCoder:(id)arg1 ;
-(id)processMetadata:(id)arg1 ;
-(id)value;
-(BOOL)metadataNeedsProcessing:(id)arg1 ;
@end

