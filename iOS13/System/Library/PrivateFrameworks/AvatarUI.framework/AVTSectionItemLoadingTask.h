/*
* Generated on Monday, March 1, 2021 at 2:32:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
*/

#import <libobjc.A.dylib/AVTPreloadingTask.h>

@protocol AVTAvatarAttributeEditorSectionItemPrefetching;
@class NSString;

@interface AVTSectionItemLoadingTask : NSObject <AVTPreloadingTask> {

	BOOL canceled;
	/*^block*/id _completionHandler;
	id<AVTAvatarAttributeEditorSectionItemPrefetching> _sectionItem;

}

@property (nonatomic,copy,readonly) id<AVTAvatarAttributeEditorSectionItemPrefetching> sectionItem;              //@synthesize sectionItem=_sectionItem - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (getter=isCanceled) BOOL canceled; 
@property (nonatomic,copy,readonly) id completionHandler;                                                        //@synthesize completionHandler=_completionHandler - In the implementation block
-(void)cancel;
-(void)setCanceled:(BOOL)arg1 ;
-(id)completionHandler;
-(BOOL)isCanceled;
-(id)initWithSectionItem:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id<AVTAvatarAttributeEditorSectionItemPrefetching>)sectionItem;
@end

