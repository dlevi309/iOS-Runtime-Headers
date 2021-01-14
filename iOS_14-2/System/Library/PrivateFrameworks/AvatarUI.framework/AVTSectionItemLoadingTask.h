/*
* Generated on Thursday, January 14, 2021 at 2:23:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
@property (getter=isCanceled) BOOL canceled; 
@property (nonatomic,copy,readonly) id completionHandler;                                                        //@synthesize completionHandler=_completionHandler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setCanceled:(BOOL)arg1 ;
-(BOOL)isCanceled;
-(id<AVTAvatarAttributeEditorSectionItemPrefetching>)sectionItem;
-(id)initWithSectionItem:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)completionHandler;
-(void)cancel;
@end

