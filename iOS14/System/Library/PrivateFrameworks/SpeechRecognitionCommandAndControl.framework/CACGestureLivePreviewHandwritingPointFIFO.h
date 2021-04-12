/*
* Generated on Thursday, January 14, 2021 at 2:28:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpeechRecognitionCommandAndControl.framework/SpeechRecognitionCommandAndControl
*/


#import <SpeechRecognitionCommandAndControl/SpeechRecognitionCommandAndControl-Structs.h>
@interface CACGestureLivePreviewHandwritingPointFIFO : NSObject {

	CACGestureLivePreviewHandwritingPointFIFO* _nextFIFO;

}

@property (nonatomic,retain) CACGestureLivePreviewHandwritingPointFIFO * nextFIFO;              //@synthesize nextFIFO=_nextFIFO - In the implementation block
-(void)clear;
-(void)flush;
-(void)addPoint:(SCD_Struct_CA12)arg1 ;
-(void)emitPoint:(SCD_Struct_CA12)arg1 ;
-(void)setNextFIFO:(CACGestureLivePreviewHandwritingPointFIFO *)arg1 ;
-(CACGestureLivePreviewHandwritingPointFIFO *)nextFIFO;
-(id)initWithFIFO:(id)arg1 ;
@end

