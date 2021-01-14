/*
* Generated on Thursday, January 14, 2021 at 2:23:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
*/

#import <CMCapture/BWNodeMessage.h>

@interface BWNodeStillImageReferenceFrameBracketedCaptureSequenceNumberMessage : BWNodeMessage {

	int _referenceFrameBracketedCaptureSequenceNumber;

}

@property (readonly) int referenceFrameBracketedCaptureSequenceNumber; 
+(id)newMessageWithStillImageReferenceFrameBracketedCaptureSequenceNumber:(int)arg1 ;
-(int)referenceFrameBracketedCaptureSequenceNumber;
-(id)_initWithStillImageReferenceFrameBracketedCaptureSequenceNumber:(int)arg1 ;
@end

