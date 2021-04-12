/*
* Generated on Monday, March 1, 2021 at 2:34:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/IMTransferServices.framework/IMTransferServices
*/


@class NSMutableDictionary;

@interface IMTransferServicesCompressionController : NSObject {

	NSMutableDictionary* _blockMap;

}
+(id)sharedInstance;
-(void)fileCopierDidStart:(id)arg1 ;
-(void)fileCopierDidFinish:(id)arg1 ;
-(void)compressFileTransfer:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)_mapCopier:(id)arg1 toBlock:(/*^block*/id)arg2 ;
-(/*^block*/id)_blockForCopier:(id)arg1 ;
-(void)_unmapCopier:(id)arg1 ;
@end

