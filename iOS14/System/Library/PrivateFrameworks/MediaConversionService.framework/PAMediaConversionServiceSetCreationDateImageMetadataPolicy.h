/*
* Generated on Thursday, January 14, 2021 at 2:26:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaConversionService.framework/MediaConversionService
*/

#import <MediaConversionService/PAMediaConversionServiceImageMetadataPolicy.h>

@class NSDate, NSTimeZone;

@interface PAMediaConversionServiceSetCreationDateImageMetadataPolicy : PAMediaConversionServiceImageMetadataPolicy {

	NSDate* _creationDate;
	NSTimeZone* _timeZone;

}

@property (retain) NSDate * creationDate;              //@synthesize creationDate=_creationDate - In the implementation block
@property (retain) NSTimeZone * timeZone;              //@synthesize timeZone=_timeZone - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)policyWithCreationDate:(id)arg1 inTimeZone:(id)arg2 ;
-(NSTimeZone *)timeZone;
-(void)setTimeZone:(NSTimeZone *)arg1 ;
-(void)setCreationDate:(NSDate *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSDate *)creationDate;
-(id)initWithCoder:(id)arg1 ;
-(id)processMetadata:(id)arg1 ;
-(BOOL)metadataNeedsProcessing:(id)arg1 ;
@end

