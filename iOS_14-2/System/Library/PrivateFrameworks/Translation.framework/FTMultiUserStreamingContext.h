/*
* Generated on Thursday, January 14, 2021 at 2:23:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Translation.framework/Translation
*/


@protocol OspreyClientStreamingContext;
@interface FTMultiUserStreamingContext : NSObject {

	id<OspreyClientStreamingContext> _grpcContext;

}
-(id)initWithGRPCStreamingCallContext:(id)arg1 ;
-(void)closeStream;
-(void)sendMultiUserStreamingRequest:(id)arg1 ;
@end

