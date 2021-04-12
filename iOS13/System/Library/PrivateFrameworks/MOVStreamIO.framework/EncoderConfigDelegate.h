/*
* Generated on Monday, March 1, 2021 at 2:35:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MOVStreamIO.framework/MOVStreamIO
*/


@protocol EncoderConfigDelegate <NSObject>
@required
-(id)overrideVideoEncoderSpecification;
-(unsigned)codecTypeOverride;
-(BOOL)configureSessionOverride:(OpaqueVTCompressionSessionRef)arg1;

@end

