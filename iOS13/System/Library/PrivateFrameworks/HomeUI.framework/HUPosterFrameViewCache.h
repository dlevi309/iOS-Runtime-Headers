/*
* Generated on Monday, March 1, 2021 at 2:34:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/


@class NSMutableArray;

@interface HUPosterFrameViewCache : NSObject {

	NSMutableArray* _posterFrameViewQueue;

}

@property (nonatomic,retain) NSMutableArray * posterFrameViewQueue;              //@synthesize posterFrameViewQueue=_posterFrameViewQueue - In the implementation block
+(id)sharedCache;
+(void)purgeCache;
+(id)dequeuePosterFrameView;
+(void)enqueuePosterFrameView:(id)arg1 ;
-(id)init;
-(NSMutableArray *)posterFrameViewQueue;
-(void)setPosterFrameViewQueue:(NSMutableArray *)arg1 ;
@end

