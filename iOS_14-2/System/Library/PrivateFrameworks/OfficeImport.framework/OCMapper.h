/*
* Generated on Thursday, January 14, 2021 at 2:28:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/


@class OCCancel, OITSUTemporaryDirectory;

@interface OCMapper : NSObject {

	OCCancel* mCancel;
	OITSUTemporaryDirectory* mTemporaryDirectoryObject;

}
+(id)mapperForCurrentThread;
-(void)setup;
-(void)quit;
-(id)init;
-(void)teardown;
-(void)cancel;
-(BOOL)isCancelled;
-(id)temporaryDirectoryPath;
@end

