/*
* Generated on Monday, March 1, 2021 at 2:31:38 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
*/

#import <Celestial/Celestial-Structs.h>
#import <Celestial/FigVideoCaptureConnectionConfiguration.h>

@interface FigPointCloudDataCaptureConnectionConfiguration : FigVideoCaptureConnectionConfiguration {

	int _projectorMode;

}

@property (assign,nonatomic) int projectorMode;              //@synthesize projectorMode=_projectorMode - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setProjectorMode:(int)arg1 ;
-(id)initWithXPCEncoding:(id)arg1 ;
-(id)copyXPCEncoding;
-(int)projectorMode;
@end

