/*
* Generated on Thursday, January 14, 2021 at 2:23:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
*/


@class NRFCompletionStatus;

@interface BWNRFProcessorCompletionStatus : NSObject {

	NRFCompletionStatus* _completionStatus;

}
-(id)initWithCompletionStatus:(id)arg1 ;
-(BOOL)waitForCompletionWithDescriptionOut:(id*)arg1 ;
-(id)description;
-(BOOL)waitForCompletion;
-(void)dealloc;
@end

