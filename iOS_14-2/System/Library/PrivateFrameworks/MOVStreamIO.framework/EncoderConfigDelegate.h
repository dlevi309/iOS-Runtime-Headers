/*
* Generated on Thursday, January 14, 2021 at 2:27:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MOVStreamIO.framework/MOVStreamIO
*/


@protocol EncoderConfigDelegate <NSObject>
@required
-(id)overrideVideoEncoderSpecification;
-(unsigned)codecTypeOverride;
-(BOOL)configureSessionOverride:(OpaqueVTCompressionSessionRef)arg1;

@end

