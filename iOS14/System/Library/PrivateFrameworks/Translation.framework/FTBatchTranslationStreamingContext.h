/*
* Generated on Thursday, January 14, 2021 at 2:23:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Translation.framework/Translation
*/


@protocol OspreyClientStreamingContext;
@interface FTBatchTranslationStreamingContext : NSObject {

	id<OspreyClientStreamingContext> _grpcContext;

}
-(void)sendBatchTranslationStreamingRequest:(id)arg1 ;
-(id)initWithGRPCStreamingCallContext:(id)arg1 ;
-(void)closeStream;
@end

