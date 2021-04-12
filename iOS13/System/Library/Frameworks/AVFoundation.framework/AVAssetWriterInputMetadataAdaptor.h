/*
* Generated on Monday, March 1, 2021 at 2:30:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
*/


@class AVAssetWriterInputMetadataAdaptorInternal, AVAssetWriterInput;

@interface AVAssetWriterInputMetadataAdaptor : NSObject {

	AVAssetWriterInputMetadataAdaptorInternal* _internal;

}

@property (nonatomic,readonly) AVAssetWriterInput * assetWriterInput; 
+(void)initialize;
+(id)assetWriterInputMetadataAdaptorWithAssetWriterInput:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(id)description;
-(id)initWithAssetWriterInput:(id)arg1 ;
-(AVAssetWriterInput *)assetWriterInput;
-(BOOL)appendTimedMetadataGroup:(id)arg1 ;
@end

