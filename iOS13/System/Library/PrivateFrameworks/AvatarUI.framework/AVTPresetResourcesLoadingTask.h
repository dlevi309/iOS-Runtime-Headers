/*
* Generated on Monday, March 1, 2021 at 2:32:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
*/

#import <libobjc.A.dylib/AVTPreloadingTask.h>

@class NSArray, NSString;

@interface AVTPresetResourcesLoadingTask : NSObject <AVTPreloadingTask> {

	BOOL canceled;
	/*^block*/id _completionHandler;
	NSArray* _presetResources;

}

@property (nonatomic,copy,readonly) NSArray * presetResources;              //@synthesize presetResources=_presetResources - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (getter=isCanceled) BOOL canceled; 
@property (nonatomic,copy,readonly) id completionHandler;                   //@synthesize completionHandler=_completionHandler - In the implementation block
-(void)cancel;
-(void)setCanceled:(BOOL)arg1 ;
-(id)completionHandler;
-(BOOL)isCanceled;
-(id)initWithPresetResources:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(NSArray *)presetResources;
@end

