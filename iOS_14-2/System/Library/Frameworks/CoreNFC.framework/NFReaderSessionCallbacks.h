/*
* Generated on Thursday, January 14, 2021 at 2:26:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreNFC.framework/CoreNFC
*/


@protocol NFReaderSessionCallbacks <NSObject,NFSessionCallbackInterface>
@optional
-(void)didDetectTags:(id)arg1;
-(void)didDetectNDEFMessages:(id)arg1 fromTags:(id)arg2 updateUICallback:(/*^block*/id)arg3;
-(void)didDetectExternalReaderWithNotification:(id)arg1;

@required
-(void)didTerminate:(id)arg1;
-(void)didUIControllerInvalidate:(id)arg1;

@end

