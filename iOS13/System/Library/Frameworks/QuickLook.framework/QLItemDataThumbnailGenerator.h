/*
* Generated on Monday, March 1, 2021 at 2:32:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
*/


#import <QuickLook/QuickLook-Structs.h>
@interface QLItemDataThumbnailGenerator : NSObject {

	/*^block*/id _completionHandler;

}

@property (nonatomic,copy) id completionHandler;              //@synthesize completionHandler=_completionHandler - In the implementation block
-(id)completionHandler;
-(void)setCompletionHandler:(id)arg1 ;
-(void)_executeCompletionHandlerWithImage:(id)arg1 ;
-(void)generateThumbnailWithData:(id)arg1 contentType:(id)arg2 size:(CGSize)arg3 scale:(double)arg4 completionBlock:(/*^block*/id)arg5 ;
@end

