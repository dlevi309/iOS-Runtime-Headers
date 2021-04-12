/*
* Generated on Monday, March 1, 2021 at 2:31:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
*/


@class VNSequenceRequestHandler;

@interface BWVisionInferenceContext : NSObject {

	VNSequenceRequestHandler* _sequenceRequestHandler;

}

@property (nonatomic,readonly) VNSequenceRequestHandler * sequenceRequestHandler;              //@synthesize sequenceRequestHandler=_sequenceRequestHandler - In the implementation block
@property (getter=isPrepared,nonatomic,readonly) BOOL prepared; 
+(void)initialize;
-(id)init;
-(void)dealloc;
-(BOOL)isPrepared;
-(VNSequenceRequestHandler *)sequenceRequestHandler;
-(int)prepareForInference;
@end

