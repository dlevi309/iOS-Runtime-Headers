/*
* Generated on Monday, March 1, 2021 at 2:36:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /usr/lib/swift/libswiftCoreNFC.dylib
*/


@protocol NFCTagReaderSessionDelegate <NSObject>
@optional
-(void)tagReaderSessionDidBecomeActive:(id)arg1;
-(void)tagReaderSession:(id)arg1 didDetectTags:(id)arg2;

@required
-(void)tagReaderSession:(id)arg1 didInvalidateWithError:(id)arg2;

@end

