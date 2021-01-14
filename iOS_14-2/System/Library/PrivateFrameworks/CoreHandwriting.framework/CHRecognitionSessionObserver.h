/*
* Generated on Thursday, January 14, 2021 at 2:26:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreHandwriting.framework/CoreHandwriting
*/


@protocol CHRecognitionSessionObserver <NSObject>
@optional
-(double)preferredRecognitionResultUpdatesInterval;
-(void)recognitionSessionDidChangeStatus:(id)arg1;

@required
-(void)recognitionSessionDidUpdateRecognitionResult:(id)arg1;

@end

