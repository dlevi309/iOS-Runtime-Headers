/*
* Generated on Thursday, January 14, 2021 at 2:23:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/FileProvider.framework/FileProvider
*/

#import <Foundation/NSProgress.h>

@class NSURL, NSObservation;

@interface FPProgressProxy : NSProgress {

	id _subscriber;
	NSURL* _fileURL;
	BOOL _shouldStopAccessingURL;
	NSObservation* _totalUnitCountObservation;
	NSObservation* _fractionCompletedObservation;
	BOOL _didSetupParentProgress;
	BOOL _updateFileCount;

}

@property (assign,nonatomic) BOOL updateFileCount;              //@synthesize updateFileCount=_updateFileCount - In the implementation block
+(void)initialize;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)stopTrackingIfStarted;
-(void)setProgressDidSetupHandler:(/*^block*/id)arg1 ;
-(void)startTrackingFileURL:(id)arg1 kind:(id)arg2 ;
-(void)setCancellationHandler:(/*^block*/id)arg1 ;
-(void)_updateWithProgress:(id)arg1 ;
-(BOOL)updateFileCount;
-(void)setUpdateFileCount:(BOOL)arg1 ;
-(void)dealloc;
@end

