/*
* Generated on Monday, March 1, 2021 at 2:34:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(unsigned char)type;
-(void)setType:(unsigned char)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)value;
-(void)setValue:(id)arg1 ;
-(id)processMetadata:(id)arg1 ;
-(BOOL)metadataNeedsProcessing:(id)arg1 ;
@end

