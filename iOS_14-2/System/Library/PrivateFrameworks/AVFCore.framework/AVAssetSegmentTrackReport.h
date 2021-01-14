/*
* Generated on Thursday, January 14, 2021 at 2:21:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
*/


#import <AVFCore/AVFCore-Structs.h>
@class NSString, AVAssetSegmentReportSampleInformation;

@interface AVAssetSegmentTrackReport : NSObject {

	int _trackID;
	NSString* _mediaType;
	SCD_Struct_AV6 _earliestPresentationTimeStamp;
	SCD_Struct_AV6 _duration;
	AVAssetSegmentReportSampleInformation* _firstVideoSampleInformation;

}

@property (nonatomic,readonly) int trackID;                                                                      //@synthesize trackID=_trackID - In the implementation block
@property (nonatomic,readonly) NSString * mediaType;                                                             //@synthesize mediaType=_mediaType - In the implementation block
@property (nonatomic,readonly) SCD_Struct_AV6 earliestPresentationTimeStamp;                                     //@synthesize earliestPresentationTimeStamp=_earliestPresentationTimeStamp - In the implementation block
@property (nonatomic,readonly) SCD_Struct_AV6 duration;                                                          //@synthesize duration=_duration - In the implementation block
@property (nonatomic,readonly) AVAssetSegmentReportSampleInformation * firstVideoSampleInformation;              //@synthesize firstVideoSampleInformation=_firstVideoSampleInformation - In the implementation block
-(NSString *)mediaType;
-(int)trackID;
-(id)initWithFigSegmentTrackReportDictionary:(id)arg1 ;
-(SCD_Struct_AV6)earliestPresentationTimeStamp;
-(AVAssetSegmentReportSampleInformation *)firstVideoSampleInformation;
-(SCD_Struct_AV6)duration;
-(void)dealloc;
@end

