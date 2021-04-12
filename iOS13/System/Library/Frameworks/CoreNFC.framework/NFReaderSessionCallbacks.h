/*
* Generated on Monday, March 1, 2021 at 2:34:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreNFC.framework/CoreNFC
*/


@protocol NFReaderSessionCallbacks <NSObject,NFSessionCallbackInterface>
@optional
-(void)didDetectTags:(id)arg1;
-(void)didDetectNDEFMessages:(id)arg1 fromTags:(id)arg2 updateUICallback:(/*^block*/id)arg3;
-(void)didDetectExternalReaderWithNotification:(id)arg1;

@required
-(void)didTerminate:(id)arg1;

@end

