/*
* Generated on Thursday, January 14, 2021 at 2:22:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PXImportConcurrentAction.h>

@class NSArray, NSMutableArray, NSString, PXImportController, NSProgress;

@interface PXImportDeleteAction : PXImportConcurrentAction {

	NSArray* _assets;
	NSMutableArray* _removedAssets;
	BOOL _userInitiatedDelete;
	NSString* _sessionUuid;
	PXImportController* _importController;
	NSProgress* _progress;

}

@property (nonatomic,retain) NSProgress * progress;                    //@synthesize progress=_progress - In the implementation block
@property (nonatomic,readonly) NSString * sessionUuid;                 //@synthesize sessionUuid=_sessionUuid - In the implementation block
@property (__weak) PXImportController * importController;              //@synthesize importController=_importController - In the implementation block
@property (assign) BOOL userInitiatedDelete;                           //@synthesize userInitiatedDelete=_userInitiatedDelete - In the implementation block
-(void)finish;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(NSProgress *)progress;
-(void)start;
-(id)performAction;
-(id)initWithAssets:(id)arg1 ;
-(BOOL)canDeleteAssets;
-(void)_preAction;
-(void)_performRealAction;
-(void)_performMockAction;
-(void)didRemove:(id)arg1 ;
-(void)startObservingDeleteProgress;
-(void)stopObservingDeleteProgress;
-(void)sendActionProgress:(double)arg1 ;
-(NSString *)sessionUuid;
-(BOOL)userInitiatedDelete;
-(void)setUserInitiatedDelete:(BOOL)arg1 ;
-(void)setProgress:(NSProgress *)arg1 ;
-(PXImportController *)importController;
-(void)setImportController:(PXImportController *)arg1 ;
-(void)cancel;
-(void)dealloc;
@end

