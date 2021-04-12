/*
* Generated on Monday, March 1, 2021 at 2:32:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/FileProvider.framework/FileProvider
*/

#import <Foundation/NSProgress.h>

@class NSURL, NSObservation;

@interface FPProgressProxy : NSProgress {

	id _subscriber;
	NSURL* _fileURL;
	BOOL _shouldStopAccessingURL;
	NSObservation* _observation;
	BOOL _didSetupParentProgress;
	BOOL _updateFileCount;

}

@property (assign,nonatomic) BOOL updateFileCount;              //@synthesize updateFileCount=_updateFileCount - In the implementation block
+(void)initialize;
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)setCancellationHandler:(/*^block*/id)arg1 ;
-(void)stopTrackingIfStarted;
-(void)setProgressDidSetupHandler:(/*^block*/id)arg1 ;
-(void)startTrackingFileURL:(id)arg1 kind:(id)arg2 ;
-(void)_updateWithProgress:(id)arg1 ;
-(BOOL)updateFileCount;
-(void)setUpdateFileCount:(BOOL)arg1 ;
@end

