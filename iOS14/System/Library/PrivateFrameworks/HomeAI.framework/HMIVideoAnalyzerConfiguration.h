/*
* Generated on Thursday, January 14, 2021 at 2:27:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeAI.framework/HomeAI
*/

#import <HomeAI/HomeAI-Structs.h>
#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMFLogging.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class HMICamera, NSString;

@interface HMIVideoAnalyzerConfiguration : HMFObject <HMFLogging, NSSecureCoding> {

	BOOL _transcode;
	BOOL _recognizeFaces;
	double _minFrameQuality;
	double _minFrameScale;
	unsigned long long _thumbnailHeight;
	double _maxFragmentAnalysisDuration;
	HMICamera* _camera;
	SCD_Struct_HM3 _thumbnailInterval;
	SCD_Struct_HM3 _maxFragmentDuration;

}

@property (assign) SCD_Struct_HM3 thumbnailInterval;                //@synthesize thumbnailInterval=_thumbnailInterval - In the implementation block
@property (assign) unsigned long long thumbnailHeight;              //@synthesize thumbnailHeight=_thumbnailHeight - In the implementation block
@property (assign) double maxFragmentAnalysisDuration;              //@synthesize maxFragmentAnalysisDuration=_maxFragmentAnalysisDuration - In the implementation block
@property (assign) SCD_Struct_HM3 maxFragmentDuration;              //@synthesize maxFragmentDuration=_maxFragmentDuration - In the implementation block
@property (assign) BOOL transcode;                                  //@synthesize transcode=_transcode - In the implementation block
@property (assign) BOOL recognizeFaces;                             //@synthesize recognizeFaces=_recognizeFaces - In the implementation block
@property (retain) HMICamera * camera;                              //@synthesize camera=_camera - In the implementation block
@property (assign) double minFrameQuality;                          //@synthesize minFrameQuality=_minFrameQuality - In the implementation block
@property (assign) double minFrameScale;                            //@synthesize minFrameScale=_minFrameScale - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
+(BOOL)supportsSecureCoding;
-(HMICamera *)camera;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)attributeDescriptions;
-(void)setThumbnailHeight:(unsigned long long)arg1 ;
-(void)setCamera:(HMICamera *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)thumbnailHeight;
-(BOOL)isEqual:(id)arg1 ;
-(double)maxFragmentAnalysisDuration;
-(SCD_Struct_HM3)maxFragmentDuration;
-(BOOL)recognizeFaces;
-(void)setRecognizeFaces:(BOOL)arg1 ;
-(SCD_Struct_HM3)thumbnailInterval;
-(BOOL)transcode;
-(double)minFrameQuality;
-(double)minFrameScale;
-(void)setThumbnailInterval:(SCD_Struct_HM3)arg1 ;
-(void)setMaxFragmentAnalysisDuration:(double)arg1 ;
-(void)setMaxFragmentDuration:(SCD_Struct_HM3)arg1 ;
-(void)setTranscode:(BOOL)arg1 ;
-(void)setMinFrameQuality:(double)arg1 ;
-(void)setMinFrameScale:(double)arg1 ;
@end

