/*
* Generated on Thursday, January 14, 2021 at 2:28:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WebContentAnalysis.framework/WebContentAnalysis
*/


@class WFLSMResult, NSString;

@interface WFVerdict : NSObject {

	BOOL restricted;
	WFLSMResult* LSMEvaluationResult;
	NSString* message;
	NSString* URL;
	int evidence;

}
+(id)verdictWithRestriction:(BOOL)arg1 URL:(id)arg2 evidence:(int)arg3 LSMEvaluationResult:(id)arg4 message:(id)arg5 ;
-(void)setMessage:(id)arg1 ;
-(id)message;
-(void)setRestricted:(BOOL)arg1 ;
-(void)setURL:(id)arg1 ;
-(id)description;
-(BOOL)restricted;
-(id)URL;
-(void)dealloc;
-(int)evidence;
-(void)setEvidence:(int)arg1 ;
-(void)setLSMEvaluationResult:(id)arg1 ;
-(id)LSMEvaluationResult;
@end

