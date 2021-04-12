/*
* Generated on Thursday, January 14, 2021 at 2:23:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
*/

#import <CMCapture/CMCapture-Structs.h>
#import <CMCapture/FigVideoCaptureConnectionConfiguration.h>

@interface FigPointCloudDataCaptureConnectionConfiguration : FigVideoCaptureConnectionConfiguration {

	int _projectorMode;

}

@property (assign,nonatomic) int projectorMode;              //@synthesize projectorMode=_projectorMode - In the implementation block
-(id)initWithXPCEncoding:(id)arg1 ;
-(id)copyXPCEncoding;
-(id)description;
-(int)projectorMode;
-(void)setProjectorMode:(int)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

