/*
* Generated on Thursday, January 14, 2021 at 2:26:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AirTrafficDevice.framework/AirTrafficDevice
*/

#import <AirTrafficDevice/ATStoreDownloadOperation.h>
#import <libobjc.A.dylib/BLDownloadQueueObserving.h>

@class NSString;

@interface ATBookRedownloadOperation : ATStoreDownloadOperation <BLDownloadQueueObserving> {

	NSString* _bookDownloadID;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)execute;
-(void)downloadQueue:(id)arg1 downloadStates:(id)arg2 didCompleteWithError:(id)arg3 ;
-(void)downloadQueue:(id)arg1 downloadStatesDidChange:(id)arg2 ;
-(void)finishWithError:(id)arg1 ;
-(void)cancel;
-(void)dealloc;
@end

