/*
* Generated on Thursday, January 14, 2021 at 2:26:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
*/


@class NSURL;

@interface WLKUpNextDeltaStore : NSObject {

	NSURL* _fileURL;

}
+(id)sharedInstance;
-(void)delete:(/*^block*/id)arg1 ;
-(id)init;
-(void)read:(/*^block*/id)arg1 ;
-(id)_readDeltaFromURL:(id)arg1 error:(id*)arg2 ;
-(BOOL)_writeDelta:(id)arg1 toURL:(id)arg2 error:(id*)arg3 ;
-(void)write:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)merge:(id)arg1 completion:(/*^block*/id)arg2 ;
@end

