/*
* Generated on Thursday, January 14, 2021 at 2:23:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
*/


@class VNSequenceRequestHandler;

@interface BWVisionInferenceContext : NSObject {

	VNSequenceRequestHandler* _sequenceRequestHandler;

}

@property (nonatomic,readonly) VNSequenceRequestHandler * sequenceRequestHandler;              //@synthesize sequenceRequestHandler=_sequenceRequestHandler - In the implementation block
@property (getter=isPrepared,nonatomic,readonly) BOOL prepared; 
+(void)initialize;
-(id)init;
-(int)prepareForInference;
-(BOOL)isPrepared;
-(VNSequenceRequestHandler *)sequenceRequestHandler;
-(void)dealloc;
@end

