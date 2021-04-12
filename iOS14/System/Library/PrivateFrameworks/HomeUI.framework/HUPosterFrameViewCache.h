/*
* Generated on Thursday, January 14, 2021 at 2:24:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/


@class NSMutableArray;

@interface HUPosterFrameViewCache : NSObject {

	NSMutableArray* _posterFrameViewQueue;

}

@property (nonatomic,retain) NSMutableArray * posterFrameViewQueue;              //@synthesize posterFrameViewQueue=_posterFrameViewQueue - In the implementation block
+(void)purgeCache;
+(id)sharedCache;
+(id)dequeuePosterFrameViewForWidth:(double)arg1 ;
+(void)enqueuePosterFrameView:(id)arg1 ;
-(id)init;
-(NSMutableArray *)posterFrameViewQueue;
-(void)setPosterFrameViewQueue:(NSMutableArray *)arg1 ;
@end

