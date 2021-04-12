/*
* Generated on Monday, March 1, 2021 at 2:32:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
*/


#import <QuickLook/QuickLook-Structs.h>
@interface QLItemURLThumbnailGenerator : NSObject {

	/*^block*/id _completionHandler;

}

@property (nonatomic,copy) id completionHandler;              //@synthesize completionHandler=_completionHandler - In the implementation block
-(id)completionHandler;
-(void)setCompletionHandler:(id)arg1 ;
-(void)_executeCompletionHandlerWithImage:(id)arg1 ;
-(void)generateThumbnailWithURL:(id)arg1 size:(CGSize)arg2 scale:(double)arg3 completionBlock:(/*^block*/id)arg4 ;
@end

