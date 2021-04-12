/*
* Generated on Thursday, January 14, 2021 at 2:21:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
*/


#import <AVFCore/AVFCore-Structs.h>
@interface AVAssetSegmentReportSampleInformation : NSObject {

	SCD_Struct_AV6 _presentationTimeStamp;
	long long _offset;
	long long _length;
	BOOL _isSyncSample;

}

@property (nonatomic,readonly) SCD_Struct_AV6 presentationTimeStamp;              //@synthesize presentationTimeStamp=_presentationTimeStamp - In the implementation block
@property (nonatomic,readonly) long long offset;                                  //@synthesize offset=_offset - In the implementation block
@property (nonatomic,readonly) long long length;                                  //@synthesize length=_length - In the implementation block
@property (nonatomic,readonly) BOOL isSyncSample;                                 //@synthesize isSyncSample=_isSyncSample - In the implementation block
-(SCD_Struct_AV6)presentationTimeStamp;
-(long long)length;
-(BOOL)isSyncSample;
-(id)initWithFigSegmentReportSampleInformationDictionary:(id)arg1 ;
-(long long)offset;
-(void)dealloc;
@end

