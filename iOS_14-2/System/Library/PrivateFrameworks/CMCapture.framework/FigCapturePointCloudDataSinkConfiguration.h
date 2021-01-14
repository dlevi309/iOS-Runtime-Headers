/*
* Generated on Thursday, January 14, 2021 at 2:23:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
*/

#import <CMCapture/CMCapture-Structs.h>
#import <CMCapture/FigCaptureSinkConfiguration.h>

@interface FigCapturePointCloudDataSinkConfiguration : FigCaptureSinkConfiguration {

	BOOL _discardsLatePointCloudData;

}

@property (assign,nonatomic) BOOL discardsLatePointCloudData;              //@synthesize discardsLatePointCloudData=_discardsLatePointCloudData - In the implementation block
-(id)initWithXPCEncoding:(id)arg1 ;
-(id)copyXPCEncoding;
-(id)description;
-(BOOL)discardsLatePointCloudData;
-(void)setDiscardsLatePointCloudData:(BOOL)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(int)sinkType;
-(BOOL)isEqual:(id)arg1 ;
@end

