/*
* Generated on Monday, March 1, 2021 at 2:35:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/


@class OCCancel, OITSUTemporaryDirectory;

@interface OCMapper : NSObject {

	OCCancel* mCancel;
	OITSUTemporaryDirectory* mTemporaryDirectoryObject;

}
+(id)mapperForCurrentThread;
-(id)init;
-(void)cancel;
-(BOOL)isCancelled;
-(void)teardown;
-(void)setup;
-(void)quit;
-(id)temporaryDirectoryPath;
@end

