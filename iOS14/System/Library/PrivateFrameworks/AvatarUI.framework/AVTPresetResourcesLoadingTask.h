/*
* Generated on Thursday, January 14, 2021 at 2:23:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
@property (getter=isCanceled) BOOL canceled; 
@property (nonatomic,copy,readonly) id completionHandler;                   //@synthesize completionHandler=_completionHandler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setCanceled:(BOOL)arg1 ;
-(BOOL)isCanceled;
-(id)initWithPresetResources:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(NSArray *)presetResources;
-(id)completionHandler;
-(void)cancel;
@end

