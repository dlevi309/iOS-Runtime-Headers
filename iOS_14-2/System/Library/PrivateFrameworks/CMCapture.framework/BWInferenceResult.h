/*
* Generated on Thursday, January 14, 2021 at 2:23:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
*/


#import <CMCapture/CMCapture-Structs.h>
@class NSDictionary, NSString;

@interface BWInferenceResult : NSObject {

	int _inferenceType;
	SCD_Struct_BW8 _timestamp;
	NSDictionary* _inferences;
	NSString* _preventionReason;

}

@property (nonatomic,readonly) int inferenceType;                             //@synthesize inferenceType=_inferenceType - In the implementation block
@property (nonatomic,readonly) SCD_Struct_BW8 timestamp;                      //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * inferences;                //@synthesize inferences=_inferences - In the implementation block
@property (nonatomic,copy,readonly) NSString * preventionReason;              //@synthesize preventionReason=_preventionReason - In the implementation block
@property (getter=isValid,nonatomic,readonly) BOOL valid; 
-(SCD_Struct_BW8)timestamp;
-(NSDictionary *)inferences;
-(NSString *)preventionReason;
-(BOOL)isValid;
-(id)initWithResult:(id)arg1 replacementInferences:(id)arg2 replacementPreventionReason:(id)arg3 ;
-(id)initWithInferenceType:(int)arg1 inferences:(id)arg2 preventionReason:(id)arg3 atTimestamp:(SCD_Struct_BW8)arg4 ;
-(id)initWithInferenceType:(int)arg1 inferences:(id)arg2 atTimestamp:(SCD_Struct_BW8)arg3 ;
-(id)initWithInferenceType:(int)arg1 preventionReason:(id)arg2 atTimestamp:(SCD_Struct_BW8)arg3 ;
-(int)inferenceType;
-(void)dealloc;
@end

