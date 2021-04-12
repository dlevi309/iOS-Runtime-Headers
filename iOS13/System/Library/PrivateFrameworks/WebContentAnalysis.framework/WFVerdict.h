/*
* Generated on Monday, March 1, 2021 at 2:32:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(id)description;
-(void)setURL:(id)arg1 ;
-(id)URL;
-(id)message;
-(void)setMessage:(id)arg1 ;
-(void)setRestricted:(BOOL)arg1 ;
-(BOOL)restricted;
-(void)setEvidence:(int)arg1 ;
-(void)setLSMEvaluationResult:(id)arg1 ;
-(id)LSMEvaluationResult;
-(int)evidence;
@end

