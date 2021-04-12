/*
* Generated on Monday, March 1, 2021 at 2:31:38 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
*/


#import <Celestial/Celestial-Structs.h>
@class NSDictionary, NSString;

@interface BWInferenceResult : NSObject {

	int _inferenceType;
	SCD_Struct_BW2 _timestamp;
	NSDictionary* _inferences;
	NSString* _preventionReason;

}

@property (nonatomic,readonly) int inferenceType;                             //@synthesize inferenceType=_inferenceType - In the implementation block
@property (nonatomic,readonly) SCD_Struct_BW2 timestamp;                      //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * inferences;                //@synthesize inferences=_inferences - In the implementation block
@property (nonatomic,copy,readonly) NSString * preventionReason;              //@synthesize preventionReason=_preventionReason - In the implementation block
@property (getter=isValid,nonatomic,readonly) BOOL valid; 
-(void)dealloc;
-(BOOL)isValid;
-(SCD_Struct_BW2)timestamp;
-(NSDictionary *)inferences;
-(int)inferenceType;
-(id)initWithInferenceType:(int)arg1 inferences:(id)arg2 preventionReason:(id)arg3 atTimestamp:(SCD_Struct_BW2)arg4 ;
-(id)initWithInferenceType:(int)arg1 inferences:(id)arg2 atTimestamp:(SCD_Struct_BW2)arg3 ;
-(id)initWithInferenceType:(int)arg1 preventionReason:(id)arg2 atTimestamp:(SCD_Struct_BW2)arg3 ;
-(id)initWithResult:(id)arg1 replacementInferences:(id)arg2 replacementPreventionReason:(id)arg3 ;
-(NSString *)preventionReason;
@end

